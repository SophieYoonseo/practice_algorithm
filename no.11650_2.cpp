#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
vector<pair<int, int>> vec;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int num(0);
    int x(0), y(0);
    cin >> num;
    
    for(int i=0; i<num; i++)
	{
        cin>>x>>y;
        vec.push_back({x, y});
    }
    sort(vec.begin(), vec.end());
 
    for(int i=0; i<vec.size(); i++)
        cout<<vec[i].first<<" "<<vec[i].second<<"\n";
 
    return 0;
}

