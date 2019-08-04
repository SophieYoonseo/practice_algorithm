#include<iostream>
#include<cstring>

using namespace std;

int stack[10001];
int top = -1;

void push(int x){
	stack[++top] = x;
}

int empty()
{
	if(top == -1)	return 1;
	else	return 0;
}

void pop(){
	if(empty() == 1)	cout<<"-1"<<"\n";
	else{
		cout<<stack[top]<<"\n";
		stack[top--] = 0;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	cin>>num;
	
	char str[10];
	for(int i=0; i<num; i++){
		cin>>str;
		if(!strcmp(str,"push")){
			int x(0);
			cin>>x;
			push(x);
		}
		else if(!strcmp(str, "top")){
			if(empty() == 1)	cout<<"-1"<<"\n";
			else	cout<<stack[top]<<"\n";
		}
		else if(!strcmp(str, "empty")){
			cout<<empty()<<"\n";
		}
		else if(!strcmp(str, "pop")){
			pop();
		}
		else{
			cout<<top+1<<"\n";
		}
	}
	return 0;
}

