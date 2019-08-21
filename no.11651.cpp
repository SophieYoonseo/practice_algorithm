#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	//Based on the y-coordinate
    if (a.second < b.second)
        return true;

    else if (a.second == b.second)
	    if (a.first < b.first)
            return true;

    return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	cin>>num;
	
	vector <pair<int, int>> v(num);
	
	for(int i=0; i<num; i++)
	{
		cin>>v[i].first>>v[i].second;
	}
		
	sort(v.begin(), v.end(), cmp);
		
	for(int i=0; i<num; i++)
		cout<<v[i].first<<" "<<v[i].second<<"\n";
		
	return 0;
}
