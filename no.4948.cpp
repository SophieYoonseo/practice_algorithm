#include <iostream>

using namespace std;

const int MAX = 123456 * 2 + 1;
int minFactor[MAX]; //minFactor[i] -> i의 가장 작은 소인수(i가 소수인 경우 자기 자신)

//에라토스테네스의 체 
void eratosthenes(void)
{
    //1은 항상 예외 
    minFactor[0] = minFactor[1] = -1;

    //모든 숫자를 처음에는 소수로 표시
    for(int i=2; i<MAX; i++)
        minFactor[i] = i;

    //에라토스테네스의 체 수행
    for(int i=2; i*i<MAX; i++)
        if(minFactor[i] == i)
            for(int j=i*i; j<MAX; j+=i)
	            //아직 약수를 본 적 없는 숫자인 경우 i를 써둔다
                if(minFactor[j] == j)
                    minFactor[j] = i;
}

int main()
{
    eratosthenes();

    while (1)
    {
        int num(0);
        cin >> num;

        if(num == 0)
            break;

        int count(0);
        for(int i=num+1; i<=2*num; i++)
            if(minFactor[i] == i)
            	count++;
        cout << count << "\n";
	}
    return 0;
}

