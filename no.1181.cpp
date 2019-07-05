#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

string str[20001];

bool compare(const string a, const string b)
{
	if(a.length() == b.length())
	{
        for(int i = 0; i < a.length(); i++)
            if(a[i] == b[i])
                continue;
            else if (a[i] < b[i])
                return true;
            else
                return false;
    }
	if(a.length()<b.length())
		return true;
	
	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num;
	cin>>num;
	
	vector<string> v;
    map<string, bool> visited;
    for (int i = 0; i < num; i++)
    {
		string temp;
        cin >> temp;
        
		//같은 단어는 입력하지 않는다
        if (!visited.count(temp))
		{
            visited[temp] = true;
            v.push_back(temp);
        }
    }

    //정렬
    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";

    return 0;
}
