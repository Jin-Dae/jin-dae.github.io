#include<iostream>
using namespace std;
int t,n,a[10001],b[1000000]; long long ans;
int main(){
    cin>>t;
    while(t--){
        cin>>n; ans=0; a[0]=0;
        for(int i=0;i<n;i++){
            cin>>b[i]; a[b[i]]++; a[0]=max(a[0],b[i]);
        }
        for(int i=0;i<n;i++){
            a[b[i]]--;
            if(b[i]<a[0]) ans+=a[0]-b[i];
            else for(int j=a[0];j>0;j--) if(a[j]) {a[0]=j; break;}
        }
        cout<<ans<<'\n';
    }
    return 0;
}