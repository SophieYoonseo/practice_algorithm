#include<iostream>
#include<string>

using namespace std;

int arr[26];
string wordStudy(string str)
{
	int max(0);
	string ans;
	for(int i=0; i<str.length(); i++){
		if(str.at(i) >= 65 && str.at(i) <= 90)
			arr[str.at(i)-65] ++;
		else if(str.at(i) >= 97 && str.at(i) <= 122)
			arr[str.at(i)-97]++;	
	}
	
	for(int j=0; j<26; j++){
		if(arr[j] > max){
			ans = j + 65;
			max = arr[j];
		}
		else if(arr[j] == max)
			ans = "?";
	}
	
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string str;
	cin>>str;
	if(str.length()>1000000)	return 0;
	
	string letter;
	letter = wordStudy(str);
	cout<<letter;
	
	return 0;
}
