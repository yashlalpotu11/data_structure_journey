

// Q) Nth Fibo series using recursion

#include <iostream>
using namespace std;

int fibo(int n){
    //base case
    if(n<=1){   //if n=0, 0 and n=1, 1
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
int main() {
   int n = 9;
   cout<<fibo(n);
}

// Output : 34