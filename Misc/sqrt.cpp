/*
Q) find square root of integer n (Binary Search)

Input : n = 24
Output : 4
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;
int find(int x){
    if(x == 1){
        return 1;
    }
    int l = 0, r = x;
    int ans;
    while(l <= r){
        int mid = (l+r)/2;
        if(mid*mid == x){
            return mid;
        }
        if(mid*mid <= x){
            l = mid+1;
            ans = mid;
        }
        else{
            r = mid-1;
        }
    }
    return ans;
}
int main(){
    int n; cin>>n;
    cout<<find(n)<<endl;
}

//Time Complexity: O(log(n))