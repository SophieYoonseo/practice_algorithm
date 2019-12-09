#include <iostream>
#include <vector>
using namespace std
;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	vector<int> v(5);

	for(int i=0; i<5; i++)
		cin>>v[i];

	int multiple(1);

	while(1)
	{
		int cnt(0);

		for(int i=0; i<5; i++)
		{
			if(multiple>=v[i] && multiple%v[i]==0)
				cnt++;
		}
		if(cnt>=3)
		{
			cout<<multiple<<"\n";
			break;
		}
		multiple++;
	}
	return 0;
}
