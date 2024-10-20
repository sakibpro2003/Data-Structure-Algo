#include<iostream>
using namespace std;

int sum(int n){
    if(n==0)
    {
        return 0;
    }
    else{
        return sum(n-1)+n;
        
        
    }
    // return 0;
}
int main()
{
    int result;
    result = sum(4);
    cout<<result;
    return 0;
}