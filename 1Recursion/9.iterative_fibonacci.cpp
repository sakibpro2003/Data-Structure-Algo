#include<iostream>
using namespace std;

int fib(int n){
    int t0,t1,s,i;
    t0=0;
    t1=1;
    
    if(n<=1){
        return n;
    }
    for(i=2;i<=n;i++){
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;

}
int main(){
    int r = fib(7);
    cout<<r;

    return 0;
}