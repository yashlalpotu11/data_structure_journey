
/*
Q) Given two given arrays of equal length, the task is to find if given arrays are equal or not.
Two arrays are said to be equal if both of them contain the same set of elements, arrangements 
(or permutation) of elements may be different though.

Input  : arr1[] = {1, 2, 5, 4, 0};
         arr2[] = {2, 4, 5, 0, 1}; 
Output : Yes

Input : arr1[] = {1, 7, 1};
        arr2[] = {7, 7, 1};
Output : No
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

bool areEqual(int arr1[], int arr2[], int n, int m){

    if(n != m){
        return false;
    }

    //store arr1[] element in hashmap
    unordered_map<int, int>mp;
    for(int i = 0; i < n; i++){
        mp[arr1[i]]++;
    }
    //traverse arr2[] and check all numbr are present same number of times
    for(int i = 0; i < n; i++){

        //if there is element in arr2[] but not in arr1[]
        if(mp.find(arr2[i]) == mp.end()){
            return false;
        }
        // If an element of arr2[] appears more
        // times than it appears in arr1[]
        if (mp[arr2[i]] == 0)
            return false;
 
        mp[arr2[i]]--;
    }
    return true;
}
int main(){
    int arr1[] = { 3, 5, 2, 5, 2 };
    int arr2[] = { 2, 3, 5, 5, 2 };
    int n = sizeof(arr1) / sizeof(int);
    int m = sizeof(arr2) / sizeof(int);
 
    if (areEqual(arr1, arr2, n, m))
        cout << "Yes";
    else
        cout << "No";
}
/*
Time Complexity: O(n) 
Auxiliary Space: O(n)
*/