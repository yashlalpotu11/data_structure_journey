
/*
Q) Given two arrays: arr1[0..m-1] and arr2[0..n-1]. 
Find whether arr2[] is a subset of arr1[] or not. 
Both the arrays are not in sorted order. It may be assumed 
that elements in both array are distinct.

Input: arr1[] = {11, 1, 13, 21, 3, 7}, arr2[] = {11, 3, 7, 1} 
Output: arr2[] is a subset of arr1[]

*/

/*
Method 1) Sorting and Merging

step 1) Sort both arrays: arr1[] and arr2[] which takes O(mLogm + nLogn)
step 2) Use Merge type of process to see if all elements of sorted 
arr2[] are present in sorted arr1[].

*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

bool isSubset(int arr1[], int arr2[], int m, int n){

    //remember size of first array is greater than second array
    int i = 0, j = 0;

    //sort both the arrays 
    sort(arr1, arr1+m);
    sort(arr2, arr2+n);

    //iterate till they dont exceed their size
    while(i < n and j < m){

        //if ele is smaller then move ahead in second array
        if(arr1[j] < arr2[i]){
            j++;
        }
        else if(arr1[j] == arr2[i]){
            i++;
            j++;
        }
        //if we dont have ele smaller or equal to second
        //array then break
        else if(arr1[j] > arr2[i]){
            return 0;
        }
    }
    return (i < n) ? false : true;
}
int main(){
    int arr1[] = { 11, 1, 13, 21, 3, 7 };
    int arr2[] = { 11, 3, 7, 1 };
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    if (isSubset(arr1, arr2, m, n))
        printf("arr2[] is subset of arr1[] ");
    else
        printf("arr2[] is not a subset of arr1[] ");
}

// Time Complexity: O(mLogm + nLogn)

/*
Method 2) Hashing

Algorithm : 
    step 1) Create a Hash Table for all the elements of arr1[].
    step 2) Traverse arr2[] and search for each element of arr2[] in the Hash Table. 
    If element is not found then return 0.
    step 3) If all elements are found then return 1.
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

bool isSubset(int arr1[], int arr2[], int m, int n){

    //initialise STL hash table
    set<int>s;

    //store all value of arr1 in hash
    for(int i = 0; i < m; i++){
        s.insert(arr1[i]);
    }

    //loop to check all element of arr2 in hash table
    for(int i = 0; i < n; i++){
        if(s.find(arr2[i]) == s.end()){
            return false;
        }
    }
    return true;
}
int main(){
    int arr1[] = { 11, 1, 13, 21, 3, 7 };
    int arr2[] = { 11, 3, 7, 1 };
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    if (isSubset(arr1, arr2, m, n))
        printf("arr2[] is subset of arr1[] ");
    else
        printf("arr2[] is not a subset of arr1[] ");
}
