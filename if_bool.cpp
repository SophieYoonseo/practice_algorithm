#include<iostream>

using namespace std;

int main()
{
	bool visited[100];   //초기화 안하면 다 false이다. 
	
	if(!visited[5])	cout<<"abc"<<endl;   //false이면  
	else if(visited[5])	cout<<"zzz"<< endl;  //true이면  
	
	return 0;
}
