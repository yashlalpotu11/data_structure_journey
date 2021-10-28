
/*
Q) Find all factors of a natural number 

Input:  n = 100
Output: 1 2 4 5 10 20 25 50 100

Note : We, however, have to be careful if there are two equal divisors as in the case of (10, 10). 
In such case, we’d print only one of them. 
*/

#include<bits/stdc++.h>
using namespace std;

void printDivisors(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(i==n/i)
                cout<<i<<" ";
            else
                cout<<i<<" "<<n/i<<" ";
        }
    }
}
int main(){
    int n = 100;
    printDivisors(n);
}
// Time Complexity: O(sqrt(n))