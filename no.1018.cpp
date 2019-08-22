#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

const int INF = 987654321;
const int MAX = 50;

string board[MAX];


//(0, 0) is white
string whiteFirst[8] = {
        { "WBWBWBWB" },
        { "BWBWBWBW" },
        { "WBWBWBWB" },
        { "BWBWBWBW" },
        { "WBWBWBWB" },
        { "BWBWBWBW" },
        { "WBWBWBWB" },
        { "BWBWBWBW" }
};

//(0, 0) is black
string blackFirst[8] = {
        { "BWBWBWBW" },
        { "WBWBWBWB" },
        { "BWBWBWBW" },
        { "WBWBWBWB" },
        { "BWBWBWBW" },
        { "WBWBWBWB" },
        { "BWBWBWBW" },
        { "WBWBWBWB" }
};

//(0, 0)이 W인 체스보드 기준 바뀔 칸 수
int white(int y, int x) 
{
    int cnt = 0;

    for (int i = y; i < y + 8; i++)
        for (int j = x; j < x + 8; j++)
            if (board[i][j] != whiteFirst[i - y][j - x])
                cnt++;

    return cnt;
}

//(0, 0)이 B인 체스보드 기준 바뀔 칸 수
int black(int y, int x)
{
    int cnt = 0;

   	for (int i = y; i < y + 8; i++)
       	for (int j = x; j < x + 8; j++)
            if (board[i][j] != blackFirst[i - y][j - x])
                cnt++;

    return cnt;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n(0), m(0);
	cin>>n>>m;
	
	for(int i=0; i<n; i++)
		cin>>board[i];
	
	int result = INF;
	
	for(int i=0; i+7<n; i++)
		for(int j=0; j+7<m; j++)
			result = min(result, min(white(i,j), black(i,j)));
			
	cout<<result<<"\n";
	
	return 0;
}
