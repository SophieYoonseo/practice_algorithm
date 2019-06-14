#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int visited[26];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string str;
	cin>>str;
	
	memset(visited, -1, sizeof(visited));
	
	for(int i=0; i<str.length(); i++){
		if(visited[str[i]-'a'] == -1)	visited[str[i]-'a'] = i;
	}
	for(int i=0; i<26; i++){
		cout<<visited[i]<<" ";
	}
	
	return 0;
}
