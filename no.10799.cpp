#include<iostream>
#include<string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string str;
	cin>>str;
	
	int pipe(0), ans(0);
	char laser;
	
	for(int i=0; i<str.length(); i++){
		if(str[i]=='('){
			pipe++;
		}else{
			pipe--;
			if(laser=='(')	ans += pipe;
			else	ans++;
		}
		laser = str[i];
	}
	cout<<ans<<"\n";
	return 0;
}
