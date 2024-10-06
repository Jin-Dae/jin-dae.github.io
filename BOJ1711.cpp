#include<iostream>
using namespace std;
int n,ipt[1500][2],a[5],ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n; for(int i=0;i<n;i++) cin>>ipt[i][0]>>ipt[i][1];
    for( a[0]=0;a[0]<n;a[0]++) for(a[1]=a[0]+1;a[1]<n;a[1]++) for(a[2]=a[1]+1;a[2]<n;a[2]++){
        a[3]=a[0],a[4]=a[1];
        for(int i=1;i<4;i++){
            if(((long long)ipt[a[i]][0]-ipt[a[i-1]][0])*(ipt[a[i+1]][0]-ipt[a[i-1]][0])+((long long)ipt[a[i]][1]-ipt[a[i-1]][1])*(ipt[a[i+1]][1]-ipt[a[i-1]][1])) ;
            else {ans++; break;}
        }
    }
    cout<<ans;
    return 0;
}