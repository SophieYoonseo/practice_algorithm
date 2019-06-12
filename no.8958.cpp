#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int test;
	cin>>test;
	
	char str[81];
	int count(0), sum(0);
		
	while(test>0){
		cin>>str;
	
		for(int i=0; i < strlen(str); i++){
			if(str[i]=='O'){
				count++;
				sum += count;
			}	
			else{
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
