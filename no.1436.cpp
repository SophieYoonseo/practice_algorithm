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
		//�ش� ���ڸ� ã�� ���  
		if(turn == num)	break;
		
		title++;
		
		//�ش� ���ڸ� �����ϰ� 
		int copy = title;
		string str;
		
		while(copy)
		{
			str += (copy%10 + '0');
			copy /= 10;
		}
		copy = stoi(str);
		
		//6�� �������� �� �� �ִ��� Ȯ��
		int check(0);
		while(copy)
		{
			int temp = copy%10;
			
			if(temp == 6)	check++;
			else if(check<3)	check=0;
			
			copy /= 10;	
		}
		
		//������ �����Ѵٸ� 
		if(check >= 3)	turn++; 
	}
	
	cout<<title<<"\n";
	return 0;
}
