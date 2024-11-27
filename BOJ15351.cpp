#include<iostream>
#include<cstring>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string a; int n;
    cin>>n; cin.ignore();
    for(int i=0;i<n;i++){
        int sum=0;
        getline(cin,a); 
        for(int j=0;j<a.length();j++){
            if(a[j]>='A'&&a[j]<='Z') sum+=a[j]-'A'+1;
        }
        if(sum==100) cout<<"PERFECT LIFE\n";
        else cout<<sum<<'\n';
    }
    return 0;
}