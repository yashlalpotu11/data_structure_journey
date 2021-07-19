
/*
Q) Given an array of size N with repeated numbers, You Have to 
Find the top three repeated numbers.

Note : If Number comes same number of times then our output is one 
who comes first in array

Input : arr[] = {3, 4, 2, 3, 16, 3, 15, 16, 15, 15, 16, 2, 3} 
Output : Three largest elements are 3 16 15 
Explanation :Here, 3 comes 4 times, 16 comes 3 times, 15 comes 3 times.
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

void find(int arr[], int n){

    //insert all element in map
    map<int, int>mp;
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }
    //initialise vector
    vector<int>v;
    for(auto it : mp){
        // v.push_back(it.first);
        cout<<it.first<<" "<<it.second<<endl;
    }
    // int len = v.size();
    // cout<<v[len-1]<<" "<<v[len-2]<<" "<<v[len-3]<<endl;
}
int main(){
    int arr[] = {  3, 4, 2, 3, 16, 3, 15, 16, 15, 15, 16, 2, 3  };
    int n = sizeof(arr)/sizeof(arr[0]);
    find(arr, n);
}
