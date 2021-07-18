
/*
Q) Given two arrays A[] and B[] of size n. It is given that 
both array individually contains distinct elements. We need 
to find the sum of all elements that are not common.

Input : A[] = {1, 5, 3, 8}
        B[] = {5, 4, 6, 7}
Output : 29
1 + 3 + 4 + 6 + 7 + 8 = 29
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int findSum(int A[], int B[], int n){

    //insert all element in hash
    unordered_map<int, int>mp;
    for(int i = 0; i < n; i++){
        mp[A[i]]++;
        mp[B[i]]++;
    }
    int sum = 0;
    for(auto it : mp){
        if(it.second == 1){
            sum += it.first;
        }
    }
    return sum;
}
int main(){
    int A[] = { 5, 4, 9, 2, 3 };
    int B[] = { 2, 8, 7, 6, 3 };
    int n = sizeof(A)/sizeof(A[0]);
    cout<<findSum(A,B,n);
}

//Time complexity : O(n)