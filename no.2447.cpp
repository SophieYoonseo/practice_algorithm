#include <iostream>

using namespace std;

char mat[2201][2201];

void init(int n)
{
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			mat[i][j]=' ';
		}
	}
}

void solve(int y, int x, int num)
{
    if(num == 1)
    {
	    mat[y][x]='*';
        return;
    }

    int div = num/3;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
        {
            if(i == 1 && j == 1)
            	continue;
            else
                solve(y+(i*div), x+(j*div), div);
        }
    }
}

int main()
{

    int n(0);
	cin>>n;

    init(n);
    solve(0, 0, n);

    for(int i=0; i<n; i++)
    {
	    for(int j=0; j<n; j++)
			cout<<mat[i][j];
		
        cout<<"\n";
    }
    return 0;
}
