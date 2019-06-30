#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	cin>>num;
	
	int room(6), addr(1), cur(1);
	
	while(1)
	{
		if(num<=cur)	break;
		addr ++;
		cur += room;
		room += 6;
	}
	cout<<addr<<"\n";
	return 0;
}
