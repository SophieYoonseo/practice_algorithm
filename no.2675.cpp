#include<iostream>
#include<string>

using namespace std;

string solution(int repeat, string str){
	string p ="";  // New string
	
	for(int i=0; i<str.length(); i++){
		for(int j=0; j<repeat; j++){
			p += str[i];
		}
	}
	return p;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int test;  // # of test cases
	cin>>test;
	
	int repeat;  //Number of repetitions
	string str;
	
	for(int i=0; i<test; i++){
		cin>>repeat>>str;
		cout<<solution(repeat, str)<<"\n";
	}

	return 0;
}
