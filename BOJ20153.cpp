#include<iostream>
using namespace std;
int n,cnt[23],a[2222223],ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        int c=0,b; cin>>a[i]; b=a[i];
        while(b){
            if(b%2) cnt[c]++;
            b/=2;
            c++;
        }
    }
    for(int i=0;i<=n;i++){
        int sum=0;
        for(int j=0;j<23;j++){
            if(a[i]&(1<<j)&&!(cnt[j]%2)) sum+=1<<j;
            else if(!(a[i]&(1<<j))&&cnt[j]%2) sum+=1<<j;
        }
        ans=max(ans,sum);
    }
    cout<<ans<<ans;
    return 0;
}