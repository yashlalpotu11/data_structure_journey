/*
Q) You are given a list of n-1 integers and these integers are in 
the range of 1 to n. There are no duplicates in the list. One of 
the integers is missing in the list. Write an efficient code to find 
the missing integer.

Input: arr[] = {1, 2, 4, 6, 3, 7, 8}
Output: 5
Explanation: The missing number from 1 to 8 is 5

This method avoid integer overflow
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9 + 7;
typedef long long int ll;

int getMissingNo(int arr[], int n){
    int i, total=1;
    for(i=2; i<=n+1; i++){
        total += i;
        total -= arr[i-2];
    }
    return total;
}
int main(){
    int arr[] = {1, 2, 3, 5};
    cout<<getMissingNo(arr,sizeof(arr)/sizeof(arr[0]));
}

/*
Complexity Analysis: 
    Time Complexity: O(n). 
Only one traversal of the array is needed.
    Space Complexity:O(1). 
No extra space is needed 
*/