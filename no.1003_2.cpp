#include<iostream>

using namespace std;

int dp[41];

int fibonacci(int n){
	if(n==0)	return 0;
    else if(n==1)	return 1;
    else if(n < 0)	return 1;
    else{
    	if(dp[n]>0) return dp[n];
        dp[n] = fibonacci(n-1) + fibonacci(n-2);
        return dp[n];
   	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n(0), testcase(0), num0(0), num1(0);
    cin>>testcase;
    
    for(int i=0; i<testcase; i++){
        cin>>n;
        num1=fibonacci(n);
        num0=fibonacci(n-1);
        
        cout<<num0<<" "<<num1<<"\n";
    }
    return 0;
}
 
