#include<iostream>
using namespace std;

void b(int n); //forward declaretion of function b()
void a(int n){
    if(n>0){
        cout<<n<<" ";
        b(n-1);
    }
}

void b(int n){
    if(n>1){
        cout<<n<<" ";
        a(n/2);
    }
}
int main(){
    a(20);
    return 0;
}