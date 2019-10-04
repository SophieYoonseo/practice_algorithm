#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
	int num(0);
	cin>>num;
	
	stack<int> st;
	int x(0);
	string str="null";
	
	for(int i=0; i<num; i++){
		cin>>str;
		if(str=="push"){
			cin>>x;
			st.push(x);
		}
		else if(str=="pop"){
			if(st.empty())	cout<<"-1"<<"\n";
			else{
				cout<<st.top()<<"\n";
				st.pop();
			}	
		}
		else if(str=="size"){
			cout<<st.size()<<"\n";
		}
		else if(str=="empty"){
			cout<<st.empty()<<"\n";
		}
		else{
			if(st.empty())	cout<<"-1"<<"\n";
			else{
				cout<<st.top()<<"\n";
			}
		}
	}
	return 0;
}
