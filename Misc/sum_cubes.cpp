

// Q) Given large Number x, find if a^3+b^3=x

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9 + 7;
typedef long long int ll;

int main(){
    int t; cin>>t;
    while(t--){
        ll x; cin>>x;
        map<ll, ll>cube;
        for(ll i=1;i*i*i<=x;i++){
            cube[i*i*i] = i;
        }
        bool flag = 0;
        for(auto it : cube){
            ll temp = x - it.first;
            if(cube.find(temp) != cube.end()){
                flag = 1;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

//Time complexity : O(n)