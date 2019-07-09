#include<iostream>
#include<vector>

using namespace std;


int partition(vector<pair<int, int>> loc, int p, int r)
{
   int x=loc[r];
   int i=p-1;
   for(int j=p; j<=r-1; j++)  {
	if(loc[j]<=x) {
	  swap(loc[++i], loc[j]);
	  count++;
        }
   }
   swap(loc[i+1], loc[r]);
   count++;
	return i+1;
}

void quickSort(vector<pair<int, int>> loc, int p, int r)
{
	int q=0;
	if(p<r){
		q=partition(loc, p, r);
		quickSort(loc, p, q-1);
		quickSort(loc, q+1, r);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num;
	cin>>num;
	
	
	
	for(int i=0; i<num; i++){
		cin>>loc[i].first>>loc[i].second;
	}
	
	int temp(0);
	

	for(int i=0; i<num; i++){
		cout<<loc[i][0]<<""<<loc[i][1]<<"\n";
	}
	
	return 0;
}
