
/*
Q) Check if string is palindrome or not(using recursion)

input : abcba
output : YES

input : abc
output : NO
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9 + 7;
typedef long long int ll;

bool ispal(string s, int l, int r){
    if(l==r){
        return true;
    }
    if(l > r){
        return true;
    }
    if(s[l] != s[r]){
        return false;
    }
    return ispal(s, l+1, r-1);
}
int main(){
    string s; cin>>s;
    int l = 0, r = s.length()-1;
    ispal(s, l, r) ? cout<<"YES" : cout<<"NO";
}