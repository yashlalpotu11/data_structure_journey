
/*
Q) Search an element in a sorted and rotated array

Input  : arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
         key = 3
Output : Found at index 8

Input  : arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
         key = 30
Output : Not found

Approach: 
 
1) The idea is to find the pivot point, divide the array in 
two sub-arrays and perform binary search.
2) The main idea for finding pivot is – for a sorted (in increasing order) and pivoted array, pivot element is the 
   only element for which next element to it is smaller than it.
3) Using the above statement and binary search pivot can be found.
4) After the pivot is found out divide the array in two sub-arrays.
5) Now the individual sub – arrays are sorted so the element can be 
   searched using Binary Search.

Implementation : 
    Input arr[] = {3, 4, 5, 1, 2}
    Element to Search = 1
  1) Find out pivot point and divide the array in two
      sub-arrays. (pivot = 2) (Index of 5)
  2) Now call binary search for one of the two sub-arrays.
      (a) If element is greater than 0th element then
             search in left array
      (b) Else Search in right array
          (1 will go in else as 1 < 0th element(3))
  3) If element is found in selected sub-array then return index
     Else return -1.

*/     

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

//Standard binary search
int binarySearch(int arr[], int low, int high, int key){
    if(low > high){
        return -1;
    }
    int mid = (low + high)/2;

    if(arr[mid] == key){
        return mid;
    }

    if(arr[mid] > key){
        return binarySearch(arr, low, mid-1, key);
    }
    //else
    return binarySearch(arr, mid+1, high, key);
}

/* Function to get pivot. For array 3, 4, 5, 6, 1, 2
   it returns 3 (index of 6) */
int findPivot(int arr[], int low, int high){

    //base cases
    if(low > high){
        return -1;
    }

    if(low == high){
        return low;
    }

    // Find the mid element
    int mid = low + (high - low)/2;

    if(mid < high and arr[mid] > arr[mid+1]){
        return mid;
    }

    if(mid > low and arr[mid] < arr[mid-1]){
        return (mid-1);
    }

    if(arr[low] >= arr[mid]){
        return findPivot(arr, low, mid-1);
    }
    
    return findPivot(arr, mid+1, high);
}

//search element in pivoted sorted rotated array
int pivotedBinarySearch(int arr[], int n, int key){

    int pivot = findPivot(arr, 0, n-1);

    //if we dont find pivot, then array is not rotated at all
    if(pivot == -1){
        return binarySearch(arr, 0, n-1, key);
    }

    //if we found pivot, then first compare it with pivot
    //and then then search it in 2 subarrays
    if(key == arr[pivot]){
        return pivot;
    }
    //if key is greater than pivot, then search in left subarray
    if(arr[0] <= key){
        return binarySearch(arr, 0, pivot-1, key);
    }
    //if key is smaller than pivot, then search in right subarray
    return binarySearch(arr, pivot+1, n-1, key);
}
int main(){
    int arr1[] = { 5, 6, 7, 8, 9, 10, 1, 2, 3 }; //rotated array
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int key = 3;

    //Function calling
    cout << "Index of element is : "<<pivotedBinarySearch(arr1, n, key)<<endl;
}

//Time Complexity: O(logn)