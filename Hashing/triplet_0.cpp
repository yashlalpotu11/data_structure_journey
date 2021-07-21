
/*
Q) Given an array of distinct elements. The task is to find 
triplets in the array whose sum is zero.

Input : arr[] = {0, -1, 2, -3, 1}
Output : (0 -1 1), (2 -3 1)

Explanation : The triplets with zero sum are
0 + -1 + 1 = 0 and 2 + -3 + 1 = 0 

Method 1) hashing
       step 1) Create a hashmap to store a key-value pair.
       step 2) Run a nested loop with two loops, the outer 
               loop from 0 to n-2 and the inner loop from i+1 to n-1.
       step 3) Check if the sum of ith and jth element multiplied with 
               -1 is present in the hashmap or not
       step 4) If the element is present in the hashmap, print the triplet 
               else insert the j’th element in the hashmap.
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

void findTriplet(int arr[], int n){

    bool found = false;

    for(int i = 0; i < n-1; i++){

        //find all pair with sum equal to -arr[i]
        unordered_set<int>s;
        for(int j = i+1; j < n; j++){
            int x = -(arr[i] + arr[j]);
            if(s.find(x) != s.find()){
                cout<<x<<" "<<arr[i]<<" "<<arr[j];
                found = true;
            }
            else{
                s.insert(arr[j]);
            }
        }
    }
    if(found == false){
        cout<<"Triplet does not found";
    }
}
int main(){
    int arr[] = {0, -1, 2, -3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    findTriplet(arr,n);
}

/*
Time Complexity: O(n2). 
Auxiliary Space: O(n). 
Since a hashmap is required, so the space complexity is linear.
*/