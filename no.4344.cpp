#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int c; // # of test case 
	cin>>c;
	int n; // # of students
	
	while(c--)
	{
		cin>>n;
		int score[1000];  // score of students
		int sum = 0;
		double avg = .0;
		int count = 0;
		double ratio = .0;
		
		for(int i=0; i<n; i++){
			cin>>score[i];
			sum += score[i];
		}
		
		avg = (double)sum/n;
		
		for(int j=0; j<n; j++){
			if(avg<score[j])	count++;
		}
	
		ratio = (double)count*100/n;
		cout.precision(3);
		cout<<fixed<<ratio<<"%"<<"\n";
	}
	
	return 0;
}
