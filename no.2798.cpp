#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
int result;
vector<int> v;

void sumOfCards(int idx, int cnt, int sum)
{
    //���� ������ ���
    if (cnt == 3 && sum <= M)
    {
        result = max(result, sum);
        return;
    }

    //���� ���
    if (idx >= N || cnt > 3 || sum > M)
        return;

    //�ش� ī�� ����
    sumOfCards(idx + 1, cnt + 1, sum + v[idx]);

    //�ش� ī�� ���� X
	sumOfCards(idx + 1, cnt, sum);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> N >> M;

    v.resize(N);

    for(int i = 0; i < N; i++)
        cin >> v[i];

    sumOfCards(0, 0, 0);

    cout<<result<<"\n";

    return 0;
}
