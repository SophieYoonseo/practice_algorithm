#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int num;
vector<pair<int, string>> info;	//age and name

bool cmp(pair<int, string> a, pair<int, string> b)
{
    if (a.first < b.first)
        return true;

    //If they are of the same age, you should deal with it separately
    else if (a.first == b.first)
        return false;

    return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin>>num;

	info.resize(num);	//Change size
	
	for (int i = 0; i < num; i++) {
		cin >> info[i].first >> info[i].second;
	}
	
	stable_sort(info.begin(), info.end(), cmp);   //Order quaranteed
	
	for (int i=0; i<info.size(); i++) {
		cout << info[i].first << " " << info[i].second << "\n";
	}
	
	return 0;
}


