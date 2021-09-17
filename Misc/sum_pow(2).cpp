/*
Q) Given a number N ( maybe up to 10^9 ). The task is to find the 
sum of first N natural number taking powers of 2 as a negative number.

Input: N = 4
Output: -4
- 1 - 2 + 3 - 4 = -4
1, 2, and 4 are the powers of two.

Input: N = 5
Output: 1
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int solve(int n){
    ll d = n*(n+1)/2;
    for(int i = 1; i <= n; i*=2){
        d -= 2*i;
    }
    return d;
}
int main(){
    int n; cin >> n;
    cout<<solve(n);
}