#include<iostream>
#include<cstring>

using namespace std;

int w, h;
bool visited[51][51];
int square[51][51];

int dx[8] = { 0,0,1,-1,-1,-1,1,1 };
int dy[8] = { 1,-1,0,0,-1,1,-1,1 };


void dfs(int y, int x)
{
    visited[y][x]=true; 

    for(int i=0; i<8; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (nx>=0 && nx<w && ny>=0 && ny<h){
        	if(square[ny][nx]==1 && visited[ny][nx]==false)
        		dfs(ny, nx);
		}
            
    }
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	while(1){
		cin>>w>>h;
		if(w==0 && h==0)	break;
		
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				cin>>square[i][j];
				visited[i][j]=false;
			}
		}
		
		int cnt(0);
		
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				if (visited[i][j]==false && square[i][j]==1){
                   	dfs(i, j); 
                    cnt++;
                }
			}  
		}
        cout<<cnt<<endl;
	}
	return 0;
}
