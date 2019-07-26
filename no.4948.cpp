#include <iostream>

using namespace std;

const int MAX = 123456 * 2 + 1;
int minFactor[MAX]; //minFactor[i] -> i�� ���� ���� ���μ�(i�� �Ҽ��� ��� �ڱ� �ڽ�)

//�����佺�׳׽��� ü 
void eratosthenes(void)
{
    //1�� �׻� ���� 
    minFactor[0] = minFactor[1] = -1;

    //��� ���ڸ� ó������ �Ҽ��� ǥ��
    for(int i=2; i<MAX; i++)
        minFactor[i] = i;

    //�����佺�׳׽��� ü ����
    for(int i=2; i*i<MAX; i++)
        if(minFactor[i] == i)
            for(int j=i*i; j<MAX; j+=i)
	            //���� ����� �� �� ���� ������ ��� i�� ��д�
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

