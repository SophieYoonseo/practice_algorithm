#include<iostream>

using namespace std;

int fountain(int num)
{
	int cur(1), add(0);
	while(num>0)
	{
		add++;
		num -= add;
	}
	
	if(add%2 == 0)
		cout<<add+num<<"/"<<1+(-num);
		else cout<<1+(-num)<<"/"<<add+num;
		
	return 0;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num;
	cin>>num;
	
	int result = fountain(num);
	//cout<<result;
	 
	return 0;
}
