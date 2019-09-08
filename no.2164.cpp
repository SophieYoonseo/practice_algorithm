#include<iostream>
#include<queue>

using namespace std;

queue<int> q;

void card2()
{
	int ans(0);
	while(1)
	{
		q.pop();
		if(q.size()==1){
			ans = q.front();
			break;
		}
		q.push(q.front());
		q.pop();	
	}
	cout<<ans<<"\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	cin>>num;
	
	for(int i=1; i<=num; i++){
		q.push(i);
	}
		
	if(q.size()==1){
		cout<<1<<"\n";
		return 0;
	}
	
	card2();
	
	return 0;
}
