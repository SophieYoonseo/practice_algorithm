#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int A, B, C;
	cin>>A>>B>>C;
	
	if(A>B){
		if(A>C){
			if(B>C) cout<<B<<"\n";
			else cout<<C<<"\n";
		}
		else cout<<A<<"\n"; 
	}
		
	else{
		if(B>C){
			if(A>C) cout<<A<<"\n";
			else cout<<C<<"\n";
		}
		else cout<<B<<"\n";
	}
	
	return 0;	
}
