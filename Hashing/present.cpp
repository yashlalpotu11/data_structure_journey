
/*
Q) Given two arrays, the task is that we find numbers which 
are present in first array, but not present in the second array. 

Input : a[] = {1, 2, 3, 4, 5, 10};
    b[] = {2, 3, 1, 0, 5};
Output : 4 10    
4 and 10 are present in first array, but
not in second array.
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

void findMissing(int A[], int B[], int n, int m){

    //insert all element in hash
    unordered_set<int>st;
    for(int i = 0; i < m; i++){
        st.insert(B[i]);
    }
    
    for(int i = 0; i < n; i++){
        if(st.find(A[i]) == st.end()){
            cout<<A[i]<<" ";
        }
    }
    
}
int main(){
    int A[] = { 1, 2, 6, 3, 4, 5 };
    int B[] = { 2, 4, 3, 1, 0 };
    int n = sizeof(A)/sizeof(A[0]);
    int m = sizeof(B)/sizeof(B[0]);
    findMissing(A,B,n,m);
}

//Time complexity : O(n)