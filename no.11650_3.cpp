#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<pair<int, int>> v;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	cin>>num;
	
	
	int x(0), y(0);
	for(int i=0; i<num; i++){
		cin>>x>>y;
		v.push_back(pair<int, int>(x, y));
	}
	
	//v.resize(num);
	/*
	for(int i=0; i<num; i++){
		cin>>v[i].first>>v[i].second;
	}
	*/
	sort(v.begin(), v.end());
	
	for(int i=0; i<num; i++){
		cout<<v[i].first<<" "<<v[i].second;
		cout<<'\n';
	}
	
	return 0;
}
