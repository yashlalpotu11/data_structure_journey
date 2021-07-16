
/*
Q) Minimum number of given operation required to convert n to m
Input: n = 120, m = 51840 
Output: 7 

120→240→720→1440→4320→12960→25920→51840. 
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int main(){
    int n,m; cin>>n>>m;
    if(m%n!=0){
        cout<<-1<<endl;
    }
    else{
        int cnt = 0;
        int res = m/n;

        // Counting all 2s
        while(res%2==0){
            res/=2;
            cnt++;
        }

        // Counting all 3s
        while(res%3==0){
            res/=3;
            cnt++;
        }
        // If q contained only 2 and 3
        // as the only prime factors
        // then it must be 1 now
        if(res==1){
            cout<<cnt<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}