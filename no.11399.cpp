#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	cin>>num;
	
	vector<int> v(num, 0); //v는 0으로 초기화된 num개의 원소를 갖는다. 
	for(int i=0; i<num; i++)
		cin>>v[i];
		
	sort(v.begin(), v.end());
	
	int sum(0);
	for(int i=0; i<num; i++)
		sum += v[i]*(num-i);
		
	cout<<sum<<"\n";
	return 0;
}
