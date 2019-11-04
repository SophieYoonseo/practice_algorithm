#include<iostream>
#include<algorithm>

using namespace std;
 
int a1,b1,a2,b2;
 
int gcd(int a, int b){
    return b ? gcd(b, a%b) : a;
}
 
int lcm(int a, int b){
    return a*b / gcd(a, b);
}
 
int main(){
 
    cin>>a1>>b1>>a2>>b2;
 
    if(b1<b2){
        swap(a1,a2);
        swap(b1,b2);
    }
 
    int lcm_num = lcm(b1, b2);
 
    a1 = a1*(lcm_num/b1) + a2*(lcm_num/b2);
    b1 = gcd(a1, lcm_num);
 
    cout<<a1/b1<<" "<<lcm_num/b1;
 
    return 0;
}

