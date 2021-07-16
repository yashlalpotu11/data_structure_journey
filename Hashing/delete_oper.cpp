
/*
Q) The task is to find a minimum number of elements to be deleted 
from the array to make it equal.

Input: arr[] = {4, 3, 4, 4, 2, 4}
Output: 2
After deleting 2 and 3 from array, array becomes 
arr[] = {4, 4, 4, 4} 
*/

// Algo :  n(size of array) – max_freq 

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int minDelete(int arr[], int n){

    unordered_map<int, int>freq;

    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    //find frequency
    int max_freq = INT_MIN;
    for(auto it : freq){
        max_freq = max(max_freq, it.second);
    }
    return n - max_freq;
}
int main(){
    int arr[] = { 4, 3, 4, 4, 2, 4 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<minDelete(arr, n);
}

//Time cpmplexity : O(n)