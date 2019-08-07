#include <iostream>

#define MAX_SIZE 10000

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int test(0), num(0);
	int not_prime_nums[MAX_SIZE + 5] = { 0,1,0, };

	// 소수 구하기
	for (int p = 2; p <= MAX_SIZE; p++) {
		if (not_prime_nums[p] == 0) {
			for (int i = 2; p*i <= MAX_SIZE; i++)
				not_prime_nums[p*i] = 1;
		}
	}

	cin>>test;

	while (test--) {
		cin>>num;

		for (int i = num/2; i > 0; i--) {
			if (not_prime_nums[i] == 0 && not_prime_nums[num-i] == 0) {
				cout<<i<<" "<<num - i<<"\n";
				break;
			}
		}

	}

	return 0;
}
