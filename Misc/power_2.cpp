
// Q) Check if given number is power of 2

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool ispower(int n){
    if(n==0) return 0;
    return (ceil(log2(n))==floor(log2(n)));
}
int main() {
    int n; cin >> n;
    cout<<ispower(n)<<endl;
}