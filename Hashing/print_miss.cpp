
/*
Q) Given an array, arr[0..n-1] of distinct elements and a 
range [low, high], find all numbers that are in a range, but 
not the array. The missing elements should be printed in sorted order.

Input: arr[] = {10, 12, 11, 15}, 
       low = 10, high = 15
Output: 13, 14

Method 1) Hashing(efficient)
        Create a hash table and insert all array items into the hash table. 
        Once all items are in hash table, traverse through the range and 
        print all missing elements.
    
*/    
#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

void findMiss(int arr[], int n, int low, int high){

    //insert all element of arr in set
    unordered_set<int>s;

    for(int i = 0; i < n; i++){
        s.insert(arr[i]);
    }

    //traverse and print all missing elements
    for(int x = low; x <= high; x++){
        if(s.find(x) == s.end()){
            cout<<x<<" ";
        }
    }
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low=1, high=10;
    findMiss(arr,n,low,high);
}