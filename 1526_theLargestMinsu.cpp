#include<iostream>

using namespace std;

int theLargestMinsu(int n)
{
   	while(n)
   	{
      	int digit=n%10;  //�ڸ��� 
      	n/=10;
      	if(digit==4||digit==7)
         	continue;
         	else
         	{
            	goto zero; 
         	}
   	}
   	return 1;
   	zero: 
   	return 0;
}
int main()
{
   	int n;
   	cin>>n;
   	int m;
   	for(int i=4; i<=n; i++)  //n���� �۰ų� ���� �ݹμ� �� ���� ū �� 
   	{
    	if(theLargestMinsu(i)==1)
      	m=i;
    } 
    cout<<m<<endl;   
}
