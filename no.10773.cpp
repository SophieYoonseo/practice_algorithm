#include<iostream>
#include<stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int k(0);
	cin>>k;
	
	int num(0);
	stack<int> st;
	for(int i=0; i<k; i++){
		cin>>num;
		
		if(num != 0)	st.push(num);
		else	st.pop();	
	}
	
	int sum(0);
	while(!st.empty()){
		sum += st.top();
		st.pop();
	}
	
	cout<<sum<<"\n";
	
	return 0;
}
