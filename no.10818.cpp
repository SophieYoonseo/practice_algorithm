#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	cin>>num;
	
	int min = 1000001;
	int max = -1000001;
	int target = 0;

	for (int i = 0; i < num; i++) {

		cin>>target;

		if (target < min) {
			min = target;
		}

		if (target > max) {
			max = target;
		}
	}

	cout<<min<<" "<<max;
	return 0; 
}
