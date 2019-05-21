#include <stdio.h>

int main()
{
	int N;
	int mul=0;
	scanf("%d", &N);
	for(int i=1; i<10; i++)
	{
		mul=N*i;
		printf("%d * %d = %d\n",N,i,mul);
	}
}
