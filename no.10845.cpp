#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	cin>>num;
	
	queue<int> q;
	
	for(int i=0; i<num; i++){
		string str;
		cin>>str;
		
		if(str == "push"){
			int n(0);
			cin>>n;
			q.push(n);
		}
		else if(str == "pop"){
			if(!q.empty()){
				cout<<q.front()<<"\n";
				q.pop();
			}
			else
				cout<<-1<<"\n";
		}
		else if(str == "size")
			cout<<q.size()<<"\n";
		else if(str == "empty")
			cout<<q.empty()<<"\n";
		else if(str == "front"){
			if(!q.empty())
				cout<<q.front()<<"\n";
			else
				cout<<-1<<"\n";
		}
		else if(str == "back"){
			if(!q.empty()){
				int curSize = q.size();
				//현재 큐 크기-1 만큼 반복문을 돌리면 front를 뒤로 넣는다. 
				
				for(int j=0; j<curSize-1; j++){
					int n = q.front();
					q.pop();
					q.push(n);
				}
				
				//반복문 수행 후 front는 back 
				int n = q.front();
				q.pop();
				cout<<n<<"\n";
				
				//원상복귀
				q.push(n); 
			}
			else
				cout<<-1<<"\n";
		}		
	}
	return 0;
}
