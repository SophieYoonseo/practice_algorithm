#include<iostream>
#include<vector>
#include<utility>

using namespace std;

vector<pair<string, int>> clothes;	//종류와 개수  

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int testCase(0);
	cin>>testCase;
	
	for(int i=0; i<testCase; i++){
		int num(0);
		cin>>num;
		int ans(1);
		
		for(int j=0; j<num; j++){
			string name, kind;
			bool cmp = false;
			
			cin>>name>>kind;	//옷 이름(?)과 종류를 받음  
			
			if(clothes.empty())	clothes.emplace_back(make_pair(kind, 1));
			else{
				for(int k=0; k<clothes.size(); k++){
					if(clothes[k].first == kind){
						cmp = true;
						clothes[k].second++;
					}
				}
				if(!cmp)	clothes.emplace_back(make_pair(kind, 1));
			}
		}
		for(int i=0; i<clothes.size(); i++){
			ans *= (clothes[i].second + 1);
		}
			
			
		cout<<ans - 1<<"\n";
		
		clothes.clear();
	}
	return 0;
}
