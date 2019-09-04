#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int num;
int sum;
int maxNum = -4000, minNum = 4000;

int arr[500001];
int visited[8001];	//-4000 ~ 4000

// »ê¼úÆò±Õ  
int arithmeticMean()
{
	return (int)round(sum/double(num));
}

// Áß¾Ó°ª  
int median()
{
	sort(arr, arr+num);
	return arr[num/2];
}

// ÃÖºó°ª  
int mode()
{
	int n(-1);
	int cur(0);
	bool checked = false;
	
	for(int i=0; i<=8000; i++){
		if(cur < visited[i]){
			cur = visited[i];
			n = i;
			checked = false;
		}
		else if(cur == visited[i] && !checked){
			n = i;
			checked = true;
		}
	}
	return n-4000;
} 

// ¹üÀ§ 
int average()
{
	return maxNum-minNum;	
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>num;

	
	for(int i=0; i<num; i++){
		cin>>arr[i];
		
		sum += arr[i];
		
		minNum = min(minNum, arr[i]);
		maxNum = max(maxNum, arr[i]);
		
		visited[arr[i]+4000]++;
	}
		
		
	cout<<arithmeticMean()<<"\n";
	cout<<median()<<"\n";
	cout<<mode()<<"\n";
	cout<<average()<<"\n";
	
	return 0;
}
