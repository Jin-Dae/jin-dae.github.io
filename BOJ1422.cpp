#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int k,n,Mlen,l;
string a[50];
bool comp(const string b,const string c){
    string bc=b+c,cb=c+b;
    for(int i=0;i<bc.length();i++){
        if(bc[i]==cb[i]) continue;
        return bc[i]>cb[i];
    }
    return 0;
}
int main(){
    cin>>k>>n;
    for(int i=0;i<k;i++){
        cin>>a[i]; l=a[i].length();
        Mlen=max(Mlen,l);
    }
    sort(a,a+k,comp);
    bool use=1;
    for(int i=0;i<k;i++){
        if(use&&a[i].length()==Mlen){
            use=0;
            for(int j=0;j<=n-k;j++) cout<<a[i];
        }
        else cout<<a[i];
    }
    return 0;
}