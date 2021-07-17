
/*
Q) How to check if two given sets are disjoint?

Input: set1[] = {12, 34, 11, 9, 3}
       set2[] = {2, 1, 3, 5}
Output: Not Disjoint
3 is common in two sets.

Input: set1[] = {12, 34, 11, 9, 3}
       set2[] = {7, 2, 1, 5}
Output: Yes, Disjoint
There is no common element in two sets.

Mehtod 1) Hashing (Efficient)
*/

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

bool areDisjoint(int set1[], int set2[], int n1, int n2){

    //create hashset
    set<int>s;

    //traverse first set and store it in hashset
    for(int i = 0; i < n1; i++){
        s.insert(set1[i]);
    }

    //traverse the second set and check if is already present in hash
    for(int i = 0; i < n2; i++){
        if(s.find(set2[i]) != s.end()){
            return false;
        }
    }
    return true;
}
int main(){
    int set1[] = {10, 5, 3, 4, 6};
    int set2[] = {8, 7, 9, 3};
 
    int n1 = sizeof(set1) / sizeof(set1[0]);
    int n2 = sizeof(set2) / sizeof(set2[0]);
    if (areDisjoint(set1, set2, n1, n2))
        cout << "Yes";
    else
        cout << "No";
}

//Time complexity : O(n+m)