#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

const int MAX = 1000000000+1;

int num;
vector<int> v;
int oper[4];
int maxAns = -MAX, minAns = MAX;

void DFS(int addition, int subtraction, int multiply, int divide, int count, int temp)
{
	if(count == num){
		maxAns = max(maxAns, temp);
		minAns = min(minAns, temp);
	}
	if(addition>0)
	    DFS(addition-1, subtraction, multiply, divide, count+1, temp+v[count]);

    if(subtraction>0)
        DFS(addition, subtraction-1, multiply, divide, count+1, temp-v[count]);

    if(multiply>0)
       	DFS(addition, subtraction, multiply-1, divide, count+1, temp*v[count]);

    if(divide>0)
        DFS(addition, subtraction, multiply, divide-1, count+1, temp/v[count]);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>num;
	
	v.resize(num);
	for(int i=0; i<num; i++){
		cin>>v[i];
	}
	for(int i=0; i<4; i++){
		cin>>oper[i];
	}
	DFS(oper[0], oper[1], oper[2], oper[3], 1, v[0]);
	
	cout<<maxAns<<"\n";
	cout<<minAns<<"\n";
	
	return 0;
}
