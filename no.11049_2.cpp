#include <iostream>
#include <algorithm>
#include <cstring> //memset

using namespace std;

const int MAX = 500;
const int INF = 987654321;

int num;
pair<int, int> matrix[MAX];
int cache[MAX][MAX];

//left~right까지 연산하는데 드는 비용
int minCalc(int left, int right)
{
	if (left == right)
        return 0;

    int &result = cache[left][right];
    if (result != -1)
	    return result;

    result = INF;
    for (int i = left; i < right; i++)
        //두 부분으로 나눈다
        result = min(result, minCalc(left, i) + minCalc(i + 1, right) + matrix[left].first*matrix[i].second*matrix[right].second);

    return result;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
    cin >> num;

	for(int i=0; i<num; i++)
		cin>>matrix[i].first>>matrix[i].second;

    memset(cache, -1, sizeof(cache));

    cout<<minCalc(0, num - 1)<<"\n";

    return 0;
}
