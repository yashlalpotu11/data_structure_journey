/*
Q) The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

bool isPrime(ll n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    ll num = 600851475143;
    int max_pri = INT_MIN;
    bool flag = 0;
    for(ll i=1; i<=sqrt(num);i++){
        if(isPrime(i) and num%i==0){
            flag = 1;
            int temp=i;
            max_pri = max(max_pri, temp);
        }
    } 
    if(flag) cout<<max_pri;
    else cout<<"Not Found";
}