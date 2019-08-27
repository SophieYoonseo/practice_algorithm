#include<iostream>
#include<queue>
#include<cstring>

using namespace std;

const int MAX = 1000+1;

int dot;	// the number of dots
int line;	// The number of lines
int num;	// Number of vertex to start navigation
int adj[MAX][MAX];
bool visited[MAX];

queue<int> q;

void dfs(int index)
{
	cout<<index<<" ";
	for(int i=1; i<=dot; i++){
		if(adj[index][i] && !visited[i]){
			visited[i] = 1;
			dfs(i);  // recursive
		}
	}
}

void bfs(int index)
{
	q.push(index);
	visited[index] = 1;
	
	while(!q.empty())
	{
		index = q.front();
		q.pop();
		
		cout<<index<<" ";
		
		// BFS adds all nodes adjacent to that node and proceeds with the BFS
		for(int i=1; i<=dot; i++){
			if(adj[index][i] && !visited[i]){
				visited[i] = 1;
				q.push(i);
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	cin>>dot>>line>>num;
	
	for(int i=0; i<line; i++){
		int from, to;
		cin>>from>>to;
		adj[from][to] = 1;
		adj[to][from] = 1;
	}
	visited[num] = 1;
	dfs(num);
	cout<<"\n";
	
	memset(visited, false, sizeof(visited));
	bfs(num);
	cout<<"\n";
	
	return 0;
}
