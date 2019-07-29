#include<iostream>

using namespace std;

int inhabitant[15][15];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	for(int i=1; i<15; i++)
		inhabitant[0][i] = i;
	
	for(int i=1; i<15; i++){
		for(int j=1; j<15; j++){
			inhabitant[i][j] = inhabitant[i-1][j]+inhabitant[i][j-1];
		}
	}
	
	int test(0);
	cin>>test;
	
	int floor(0), house(0);
	for(int i=0; i<test; i++){
		cin>>floor>>house;
		cout<<inhabitant[floor][house]<<"\n";
	}
	return 0;
}
