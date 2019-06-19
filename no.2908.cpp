#include<iostream>

using namespace std;

int solution(int str)
{
	int num1(0), num2(0), num3(0), result(0);
	
	num1 = str%10;
	num2 = (str/10)%10;
	num3 = (str/100)%10;
	result = num1*100 + num2*10 + num3;
	
	return result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int str1, str2;
	cin>>str1>>str2;
	
	int result1, result2;
	result1 = solution(str1);
	result2 = solution(str2);
	
	if(result1>result2)	cout<<result1;
	else	cout<<result2;
	
	return 0;
}
