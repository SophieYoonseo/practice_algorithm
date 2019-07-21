#include <iostream>

using namespace std;

int primeNum(int num){
    if(num == 1)	return 0; //It's not a prime number.
    if(num == 2)	return 1;
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1; 
}

int main(){
    int test(0), num(0), count(0);
    cin>>test;
    
    for(int i = 0; i < test; i++){
        cin>>num;
        if(primeNum(num)){
            count++;
        }
    }
    cout<<count<<"\n";
}
