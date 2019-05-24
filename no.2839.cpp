#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, box = 0;
	cin>>n;
	
	while(true)
	{
		if(n%5==0)
		{
			box += n/5;
			cout<<box;
			break;
		}
		
		n = n-3;
		box++;
		
		if(n<0)
		{
			cout<<"-1";
			break;
		}
	}
	
	return 0;
}
