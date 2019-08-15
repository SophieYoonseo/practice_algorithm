#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool check(string str){
	int len = (int)str.length();
	stack<char> ps; //Parenthesis String
	
	for(int i=0; i<len; i++){
		char ch = str[i];
		
		if(ch == '('){
			ps.push(str[i]);
		} else {
			if(!ps.empty()){
				ps.pop();
			} else {
				return false;
			}
		}
	}
	return ps.empty();
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	cin>>num;
	
	for(int i=0; i<num; i++){
		string str;
		cin>>str;
		
		if(check(str)){
			cout<<"YES"<<"\n";
		} else {
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}
