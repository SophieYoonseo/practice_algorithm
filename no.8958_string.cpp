#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int test;
	cin>>test;
	
	string str;
	int count(0), sum(0);
		
	while(test>=0){
		getline(cin, str);
	
		for(int i=0; i < str.length(); i++){
			if(str.at(i)=='O'){
				count++;
				sum += count;
			}	
			else if(str.at(i)=='X'){
				count=0;
			}
		}
		cout<<sum<<"\n";
		test--;
		sum=0;
		count=0;
	}

	return 0;
}
