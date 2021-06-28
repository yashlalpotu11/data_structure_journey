#include<bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
typedef long long int ll;
 
unordered_set<string> st;
void subseq(string s){
    for (int i = 0; i < s.length(); i++)
        {
            for (int j = s.length(); j > i; j--)
                {
                    string str = s.substr(i, j);
                    st.insert(str);
            
                    for (int k = 1; k < str.length() - 1; k++)
                    {
                        string sb = str;
                        sb.erase(sb.begin() + k);
                        subseq(sb);
                    }
        }
    }
}
int main(){
    // int t; cin>>t;
    // while(t--){
        int m,x; cin>>m>>x;
        string s = "0123456789";
 
        bool flag = 0;
        int ans;
        subseq(s);
         vector<int>v;
         for(auto it : st){
             int num = stoi(it);
             v.push_back(num);
         }
         sort(v.begin(), v.end());
        for(int i=0;i<v.size();i++){
            int sum = 0;
            int temp = v[i];
            while(temp>0){
                sum+=temp%10;
                temp/=10;
            }
            int dig1 = int(log10(sum) + 1);
            // int dig2 = int(log10(x) + 1);;
            if(sum==x and dig1==m){
                ans = v[i];
                flag = 1;
                break;
                // v1.push_back(v[i]);
            }
            // cout<<v[i]<<" ";
        }
        string a = to_string(ans);
        reverse(a.begin(), a.end());
        if(flag){
            // cout<<mini<<" "<<maxi<<endl;
            cout<<ans<<" "<<a<<endl;
        }
        else{
            cout<<-1<<" "<<-1<<endl;
        }
    //}
}