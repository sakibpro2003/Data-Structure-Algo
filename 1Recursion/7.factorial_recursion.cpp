#include<iostream>
using namespace std;

int recursion_fibonacci(int n){
    if(n<=1) return n;
    return recursion_fibonacci(n-2)+recursion_fibonacci(n-1);
}

int main(){

    int result = recursion_fibonacci(6);
    cout<<result ;

}