
/*
Q)Given an array, find the most frequent element in it.

Input : arr[] = {1, 3, 2, 1, 4, 1}
Output : 1

Method 1) Sorting and then linearly traverse
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int mostFreq(int arr[], int n){

    //sort array
    sort(arr, arr+n);

    int max_cnt = 1, curr_cnt = 1, res = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i-1]){
            curr_cnt++;
        }
        else{
            if(curr_cnt > max_cnt){
                max_cnt = curr_cnt;
                res = arr[i-1];
            }
            curr_cnt = 1;
        }
    }
    //if last element is most freq
    if(curr_cnt > max_cnt){
        max_cnt = curr_cnt;
        res = arr[n-1];
    }
    return res;
}
int main(){
    int arr[] = {  1, 5, 2, 1, 3, 2, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<mostFreq(arr, n);
}
/*
Time Complexity : O(n Log n) 
Auxiliary Space : O(1)
*/

/*
Method 2) Hashing(efficient)
  We create a hash table and store elements and their 
  frequency counts as key value pairs. 
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int mostFreq(int arr[], int n){

    unordered_map<int, int>hash;

    //insert into hash table
    for(int i = 0; i < n; i++){
        hash[arr[i]]++;
    }

    //find max freq
    int max_cnt = 0, res = -1;
    for(auto it : hash){
        if(max_cnt < it.second){
            res = it.first;
            max_cnt = it.second;
        }
    }
    return res;
}
int main(){
    int arr[] = {  1, 5, 2, 1, 3, 2, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<mostFreq(arr, n);
}