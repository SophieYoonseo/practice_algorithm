#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool check(string str){
	int len = (int)str.length();
	stack<char> ps; //Parenthesis String
	
	bool flag = true;
	
	for(int i=0; i<len; i++){
		char ch = str[i];
			
		if(ch == '('){
			ps.push('(');
		}
		else if(ch == '['){
			ps.push('[');
		}
		else if(ch == ')'){
			if(!ps.empty() && ps.top() == '('){
				ps.pop();
			} else {
				flag = false;
				break;
			}
		}
		else if(ch == ']'){
			if(!ps.empty() && ps.top() == '['){
				ps.pop();
			} else {
				flag = false;
				break;
			}
		}
	}
	if(flag && ps.empty())	return true;
	else	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string str;
	
	while(1)
	{
		getline(cin, str);
		if(str.length() == 1 && str[0] == '.')
			break;

		if(check(str)){
			cout<<"yes"<<"\n";
		} else {
			cout<<"no"<<"\n";
		}
	}
	return 0;
}
