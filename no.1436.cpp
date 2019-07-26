#include<iostream>
#include<string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num(0);
	cin>>num;
	
	int title = 666;
	int turn = 1;

	while(1)
	{
		//해당 숫자를 찾은 경우  
		if(turn == num)	break;
		
		title++;
		
		//해당 숫자를 저장하고 
		int copy = title;
		string str;
		
		while(copy)
		{
			str += (copy%10 + '0');
			copy /= 10;
		}
		copy = stoi(str);
		
		//6이 연속으로 세 개 있는지 확인
		int check(0);
		while(copy)
		{
			int temp = copy%10;
			
			if(temp == 6)	check++;
			else if(check<3)	check=0;
			
			copy /= 10;	
		}
		
		//조건을 만족한다면 
		if(check >= 3)	turn++; 
	}
	
	cout<<title<<"\n";
	return 0;
}
