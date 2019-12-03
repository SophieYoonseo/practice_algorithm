#include <iostream>

using namespace std;

int totalNum;
int num1, num2;

int main()
{
	ios::sync_with_stdio(false);
	
	cin>>totalNum>>num1>>num2;
	
	int count(0);
	while(num1 != num2){
		num1 = (num1+1)/2;
		num2 = (num2+1)/2;
		
		count++;	
	}
	cout<<count<<"\n";
	return 0;
}

/*
int tournament(void)
{
    int round = 1;
 
    while(totalNum)
    {
    	if((num1+1)/2 == (num2+1)/2)	break;

    	num1 = (num1+1)/2;
    	num2 = (num2+1)/2;
    	round += 1;
    	totalNum /= 2;
  	}

    if(!totalNum)	return -1;

    return round;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
    cin>>totalNum>>num1>>num2;

    cout<<tournament()<<"\n";

    return 0;
}
*/
