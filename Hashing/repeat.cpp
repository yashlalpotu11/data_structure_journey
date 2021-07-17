
/*
Q) We are given an array arr[] of size n. Numbers are from 1 to (n-1) 
in random order. The array has only one repetitive element. We need to 
find the repetitive element.

Input  : a[] = {1, 3, 2, 3, 4}
Output : 3


Method 1) Hashing (Efficient)

algo : Use a hash table to store elements visited. If a seen element 
appears again, we return it.
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int findRepeat(int arr[], int n){

    unordered_set<int>s;

    for(int i = 0; i < n; i++){
        if(s.find(arr[i]) != s.end()){
            return arr[i];
        }
        else{
            s.insert(arr[i]);
        }
    }
    return -1;
}
int main(){
    int arr[] = {  9, 8, 2, 6, 1, 8, 5, 3, 4, 7 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findRepeat(arr, n);
}