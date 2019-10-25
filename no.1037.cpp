#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0), minN(987654321), maxN(-987654321);
	int arr[60]={0};
	
	cin>>num;
	
	for (int i = 1; i <= num; ++i) {
		cin >> arr[i];
		minN = min(minN, arr[i]);
		maxN = max(maxN, arr[i]);
	}
 
	cout << minN * maxN << endl;
	
	return 0;
}
