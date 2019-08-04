#include<iostream>
#include<string>
#include<stack>

using namespace std;

stack<int> s;

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	
	int num;
	cin>>num;
	
	for(int i=0; i<num; i++){
		string str;
		cin>>str;
		if(str=="push"){
			int x;
			cin>>x;
			s.push(x);
		}
		else if(str=="pop"){
			if(s.empty())	cout<<"-1"<<"\n";
			else{
				cout<<s.top()<<"\n";
				s.pop();	
			}
		}
		else if(str=="top"){
			if(s.empty())	cout<<"-1"<<"\n";
			else	cout<<s.top()<<"\n";
		}
		else if(str=="size")	cout<<s.size()<<"\n";
		else	cout<<s.empty()<<"\n";
		
	}
	
	return 0;
}
