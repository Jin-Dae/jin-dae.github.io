#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int jin[36],n,ans[53],w[36][53],k;
int conv(char c){
    if(c<='9') return c-'0';
    else return c-'A'+10;
}
char invconv(int d){
    if(d<=9) return d+'0';
    else return d-10+'A';
}
bool cmp(int a,int b){
    for(int i=52;i>=0;i--){
        if(w[a][i]!=w[b][i]) return w[a][i]>w[b][i];
    }
    return 0;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<36;i++) jin[i]=i;
    for(int i=0;i<n;i++){
        string a; cin>>a;
        int len=a.length();
        for(int j=0;j<len;j++){
            int b=conv(a[len-j-1]);
            ans[j]+=b;
            w[b][j]+=35-b;
        }
    }
    for(int i=0;i<36;i++) for(int j=0;j<53;j++){
        if(w[i][j]>35) w[i][j+1]+=w[i][j]/36,w[i][j]%=36;
    }
    cin>>k;
    sort(jin,jin+36,cmp);
    for(int i=0;i<k;i++) for(int j=0;j<53;j++) ans[j]+=w[jin[i]][j];
    for(int i=0;i<53;i++) if(ans[i]>35) ans[i+1]+=ans[i]/36,ans[i]%=36;
    bool flag=0;
    for(int i=52;i>=0;i--){
        if(ans[i]) cout<<invconv(ans[i]),flag=1;
        else if(flag) cout<<ans[i];
    }
    if(!flag) cout<<0;
    return 0;
}