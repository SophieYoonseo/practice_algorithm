#include<iostream>

using namespace std;

int main()
{
	bool visited[100];   //�ʱ�ȭ ���ϸ� �� false�̴�. 
	
	if(!visited[5])	cout<<"abc"<<endl;   //false�̸�  
	else if(visited[5])	cout<<"zzz"<< endl;  //true�̸�  
	
	return 0;
}
