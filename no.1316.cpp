#include<iostream>
#include<string>

using namespace std;

bool wordCheck(string str){
	bool alphabet[26] = {false};
	
	for(int i=0; i<str.length(); i++){
		if(alphabet[str.at(i)-'a'])	return false;
			else{
				char temp = str.at(i);
				alphabet[str.at(i)-'a'] = true;
				
				while(1){
					if(temp != str[++i]){
						i--;
						break;
					}
				}
			}
	}
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num;
	cin>>num;
	
	int count(0);
	for(int i=0; i<num; i++){
		string str;
		cin>>str;
		
		if(wordCheck(str)){
			count++;
		}
	}
	
	cout<<count;
	
	return 0;
}
