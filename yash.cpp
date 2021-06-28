#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;

int main(){
    int n; cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int num; cin>>num;
        v.push_back(num);
    }
    int len = v.size();
    if(len<3){
        cout<<-1<<endl;
        return 0;
    }
    if(len==3){
        // if((v[0]<v[1] and v[2]<v[1] and ) or v[0]>v[1] and v[2]>v[1]){
        //     cout<<-1<<endl;
        // }
        if(v[0]==v[2] and v[1]>=v[2]){
            cout<<-1<<endl;
        }
        else if(v[0]==v[1]){
            cout<<2<<" "<<3<<endl;
        }
        else if(v[1]==v[2]){
            cout<<1<<" "<<2<<endl;
        }
        return 0;
    }
    for(int i=0;i<v.size()-1;i++){
        // if(check==v[i]) cnt++;
        if(v[i]<v[i+1] or v[i]>v[i+1]){
            cout<<i+1<<" "<<i+2<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}