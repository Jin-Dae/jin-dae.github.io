#include<iostream>
#include<cstring>
using namespace std;
bool dp[101]={1,};
string s,A[100];
int n,slen;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>s>>n; slen=s.length();
    for(int i=0;i<n;i++) cin>>A[i];
    for(int i=0;i<slen;i++){
        if(dp[i]){
            for(int j=0;j<n;j++){
                int len=A[j].length();
                if(i+len>slen) continue;
                bool flag=0;
                for(int k=0;k<len;k++) if(s[k+i]!=A[j][k]) {flag=1; break;}
                if(!flag) dp[i+len]=1;
            }
        }
    }
    if(dp[slen]) cout<<1;
    else cout<<0;
    return 0;
}