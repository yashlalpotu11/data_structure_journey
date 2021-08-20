
/*
Q) An Array of integers is given, both +ve and -ve. 
You need to find the two elements such that their sum is closest to zero.

INPUT : arr[] = {1, 60, -10, 70, -80, 85};
OUTPUT : -80 -85
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

//modified sort by absolute value
bool compare(int a, int b){
    return abs(a) < abs(b);
}

void findMinSum(int arr[], int n){
    sort(arr, arr+n, compare);

    int min = INT_MAX, x, y;
    for(int i=1;i<n;i++){
        if(abs(arr[i]+arr[i-1]) <= min){
            min = abs(arr[i]+arr[i-1]);
            x = i-1;
            y = i;
        }
    }
    cout<<"The two element whose sum is minimun are "<<arr[x]<<" and "<<arr[y]<<endl;
}
int main(){
    
    int arr[] = { 1, 60, -10, 70, -80, 85 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findMinSum(arr, n);
}
/*
Time Complexity: O(nlogn) 
Space Complexity: O(1)
*/