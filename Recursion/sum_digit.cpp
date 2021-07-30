
/*
Q) Sum of digit of number using Recursion

input : 1234
output : 10

*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9 + 7;
typedef long long int ll;

int sum(int n){
    if(n < 10){
        return n;
    }
    return sum(n/10)+n%10;
}
int main(){
    int n; cin>>n;
    cout<<sum(n);
}