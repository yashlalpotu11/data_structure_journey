
/*
Q) There are 2 sorted arrays A and B of size n each. Write an algorithm 
to find the median of the array obtained after merging the above 2 
arrays(i.e. array of length 2n). 

//Approach :
1) Take the union of the input arrays ar1[] and ar2[].
2) Sort ar1[] and ar2[] respectively.
3) The median will be the last element of ar1[] + the first
   element
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

//assuming both ar1 and ar2 are sorted
int getMedian(int ar1[], int ar2[], int n){
    int j = 0, i = n - 1;
    while(ar1[i] > ar2[j] and j < n and i > -1){
        swap(ar1[i--], ar1[j++]);
    }
    sort(ar1, ar1 + n);
    sort(ar2, ar2 + n);

    return (ar1[n-1] + ar2[0])/2; 
}

int main(){
    int ar1[] = { 1, 12, 15, 26, 38 };
    int ar2[] = { 2, 13, 17, 30, 45 };
    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);

    if (n1 == n2)
        cout << "Median is " << getMedian(ar1, ar2, n1);
    else
        cout << "Doesn't work for arrays"
             << " of unequal size";
}

