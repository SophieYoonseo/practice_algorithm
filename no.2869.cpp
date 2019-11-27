#include <iostream>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int A(0), B(0), V(0);
    int day(0); //몇일 걸리는 지  
    cin>>A>>B>>V;
    
    // 하루에 올라갈 수 있는 높이 a-b
	// 마지막 날에는 a만큼 올라갈 수 있다. b는 계산 안함.
	// 마지막 날 전날까지 올라가야할 높이는 v-a
	// 올라가야할 높이를 하루에 올라갈 수 있는 높이로 나누면 몇일만에 올라갈 수 있는 지 구할 수 있다.
	 
    if((V-A)%(A-B)==0)	day=(V-A)/(A-B); //마지막 날 전까지 딱 맞춰서 올라갈 수 있다. 
		else	day=(V-A)/(A-B)+1; //조금 더 올라가야하므로 하루를 더해야 함.

	day++; //마지막 이동 
    
    cout<<day<<"\n";
    
	return 0;
}

