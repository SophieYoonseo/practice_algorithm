#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int test(0);
	cin>>test;
	
	for(int i=0; i<test; i++){
		int x, y;
		cin>>x>>y;
		
		long long num(1);
		while(num*num <= (y-x)){
			num++;
		}
		num--;
		
		long long ans = (y-x) - (num*num);
        ans = (long long)ceil((double)ans / (double)num);
        cout << num*2 - 1 + ans << "\n";

	} 
	return 0;
}
