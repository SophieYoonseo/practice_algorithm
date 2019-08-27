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
				//���� ť ũ��-1 ��ŭ �ݺ����� ������ front�� �ڷ� �ִ´�. 
				
				for(int j=0; j<curSize-1; j++){
					int n = q.front();
					q.pop();
					q.push(n);
				}
				
				//�ݺ��� ���� �� front�� back 
				int n = q.front();
				q.pop();
				cout<<n<<"\n";
				
				//���󺹱�
				q.push(n); 
			}
			else
				cout<<-1<<"\n";
		}		
	}
	return 0;
}
