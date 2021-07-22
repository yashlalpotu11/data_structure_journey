

Q) find the sum of the even-valued terms. (below 4 million)

#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int main(){
    ll sum = 0;
    int num1=1, num2=2;
    while(sum<=4000000){
        if(num2%2==0){
            sum+=num2;
        }
        int next_num = num1 + num2;
        num1 = num2;
        num2 = next_num;
    }
    cout<<sum;
}