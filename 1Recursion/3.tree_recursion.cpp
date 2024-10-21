#include<iostream>
using namespace std;

void fun(int n){
    if(n>0){
<<<<<<< HEAD
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
=======

        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
        
>>>>>>> b96cc551cfff89b3b749fa0043fa187d4f034192
    }
}

int main(){
    fun(3);
    return 0;


}