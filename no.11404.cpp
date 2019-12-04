#include<iostream>
#include<algorithm>

#define INF 987654321
using namespace std;

int city, bus;
int visited[101][101];

void floydWarshall()
{
	for(int k=0; k<city; k++){
		for(int i=0; i<city; i++){
			//if(visited[i][k] == 0)	continue;
			for(int j=0; j<city; j++){
			//	if(visited[k][j]==0 || i==j)	continue;
			//	if(visited[i][j]==0 || visited[i][k]+visited[k][j]<visited[i][j])	visited[i][j]=visited[i][k]+visited[k][j];
				if(visited[i][k]+visited[k][j]<visited[i][j])	visited[i][j]=visited[i][k]+visited[k][j];
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>city>>bus;
	
	for(int i=0; i<city; i++){
		for(int j=0; j<city; j++){
			visited[i][j] = INF;
		}
	}
	for(int i=0; i<city; i++)	visited[i][i] = 0;
	
	int a,b,c;
	for(int i=0; i<bus; i++){
		cin>>a>>b>>c;
		if(visited[a-1][b-1]>c)	visited[a-1][b-1]=c;
		/*
		if(!visited[a][b])	visited[a][b]=c;
		else	visited[a][b] = min(visited[a][b], c);
		*/
	}
	
	floydWarshall();
	
	for(int i=0; i<city; i++){
		for(int j=0; j<city; j++){
			if(visited[i][j]==INF)	cout<<"INF"<<" ";
			else	cout<<visited[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
