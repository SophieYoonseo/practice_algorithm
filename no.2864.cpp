#include <iostream>

using namespace std;

int max(int num1, int num2)
{
	int n1(0), n2(0);

    int calc=num1;
    int multiplier=1;

    while(calc){
	   	int temp = calc%10;
        if(temp == 5)
            temp = 6;

        n1 += temp*multiplier;
        multiplier *= 10;
        calc /= 10;
   	}

    calc = num2;
    multiplier = 1;
    while(calc)
    {
        int temp = calc%10;
        if(temp == 5)
            temp = 6;
        n2 += temp*multiplier;
        multiplier *= 10;
        calc /= 10;
    }

    return n1+n2;
}

int min(int num1, int num2)
{
	int n1(0), n2(0);

    int calc=num1;
    int multiplier=1;

    while(calc){
	   	int temp = calc%10;
        if(temp == 6)
            temp = 5;

        n1 += temp*multiplier;
        multiplier *= 10;
        calc /= 10;
   	}

    calc = num2;
    multiplier = 1;
    while(calc)
    {
        int temp = calc%10;
        if(temp == 6)
            temp = 5;
        n2 += temp*multiplier;
        multiplier *= 10;
        calc /= 10;
    }

    return n1+n2;
}

 

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num1(0), num2(0);
    cin>>num1>>num2;

    cout<<min(num1, num2)<<" "<<max(num1, num2)<<"\n";

    return 0;
}
