#include<iostream>
#include <vector>

using namespace std;

long long sum(vector<int> &a) {
	long long ans = 0;
	for(int i=0; i<a.size(); i++)
		ans += a[i];
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0), temp(0);
	cin>>num;
	
	vector<int> vec(num);
	for(int i=0; i<num; i++){
		cin>>temp;
		vec.push_back(temp);
	}
		
	long long ans(0);
	ans = sum(vec);
	
	cout<<ans<<"\n";
	
	return 0;
}
