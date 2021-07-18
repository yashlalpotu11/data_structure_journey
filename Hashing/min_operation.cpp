
/*
Q) Given an array with n positive integers. We need to find 
the minimum number of operation to make all elements equal.

Input : arr[] = {1, 2, 3, 4}
Output : 3
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int minOp(int arr[], int n){

    //insert all element in hash
    unordered_map<int, int>mp;
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }
    int max_op = 0;
    for(auto it : mp){
        if(max_op < it.second){
            max_op = it.second;
        }
    }
    return (n - max_op);
}
int main(){
    int arr[] = { 1, 5, 2, 1, 3, 2, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<minOp(arr, n);
}

//Time complexity : O(n)