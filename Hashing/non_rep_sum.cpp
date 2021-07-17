
/*
Q) Given an integer array with repeated elements, the task is to 
find sum of all distinct elements in array.

Input  : arr[] = {12, 10, 9, 45, 2, 10, 10, 45,10};
Output : 78
Here we take 12, 10, 9, 45, 2 for sum
because it's distinct elements 
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int findSum(int arr[], int n){

    int sum = 0;
    unordered_set<int>s;

    for(int i = 0; i < n; i++){
        if(s.find(arr[i]) == s.end()){
            sum += arr[i];
            s.insert(arr[i]);
        }
    }
    return sum;
}
int main(){
    int arr[] = { 1, 2, 3, 1, 1, 4, 5, 6 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findSum(arr, n);
}

/*
Time Complexity: O(n) 
Auxiliary Space: O(n)
*/