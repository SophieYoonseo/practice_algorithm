#include<iostream>

using namespace std;

int people[3][51];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num;
	cin>>num;
	
	for(int i=0; i<num; i++)
		cin>>people[0][i]>>people[1][i];
	
	for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            if (i == j) { continue; }
            if (people[0][i] < people[0][j] && people[1][i] < people[1][j]) { people[2][i]++; }
        }
    }
    for (int i = 0; i < num; i++)
        cout << people[2][i] + 1 << " ";
        
	return 0;
}
