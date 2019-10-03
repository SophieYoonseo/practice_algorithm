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
	
	while(num != 0){
		string str;
		cin>>str;
		
		if(str=="push"){
			int temp(0);
			cin>>temp;
			q.push(temp);
		}
		else if(str=="pop"){
			if(q.empty())	cout<<"-1"<<"\n";
			else{
				cout<<q.front()<<"\n";
				q.pop();
			}
		}
		else if(str=="size")	cout<<q.size()<<"\n";
		else if(str=="empty")	cout<<q.empty()<<"\n";
		else if(str=="front"){
			if(q.empty())	cout<<"-1"<<"\n";
			else	cout<<q.front()<<"\n";
		}
		else if(str=="back"){
			if(q.empty())	cout<<"-1"<<"\n";
			else{
				int curSize = q.size();
				
				//send back the value at the front through repeat sentence
				for(int i=0; i<curSize-1; i++){
					int temp = q.front();
					q.pop();
					q.push(temp);
				}
				
				//after iteration, the front has the rearmost value 
				int ans=q.front();
				q.pop();
				cout<<ans<<"\n";
				
				//return to the original state
				q.push(ans); 
			}
		}
		num--;		
	}
	return 0;
}
