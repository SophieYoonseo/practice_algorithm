#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N; // # of exam subjects
	cin>>N;
	if(N>1000) return 0;
	
	int M=0; // The highest score
	double score[N];  // current score
	
	for(int i=0; i<N; i++)
	{
		cin>>score[i];
		if(score[i]<0 || score[i]>100) return 0;
	}
	
	for(int i=0; i<N; i++)
	{
		if(M>score[i]) M=M;
		else	M=score[i];
	}
	
	
	double avg = 0.0;
	double new_score[N];
	for(int j=0; j<N; j++)
	{
		new_score[j] = (score[j]/M)*100;
		avg = avg + new_score[j];
	}
	
	cout.precision(2);
	cout<<fixed<<(double)avg/N<<"\n";
	
	return 0;
}
