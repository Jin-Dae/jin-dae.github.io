#include<iostream>
#include<cstring>
using namespace std;
int main() {
    int t; cin>>t; getchar();
    while(t--){
        string a;
        getline(cin,a);
        int cnt[26]={0,},MAXi=0;
        bool c=0;
        for(int i=0;i<a.length();i++){
            if(a[i]!=' '){
                if(++cnt[a[i]-'a']>cnt[MAXi]) MAXi=a[i]-'a';
            } 
        }
        for(int i=0;i<26;i++){
            if(cnt[i]==cnt[MAXi]&&i!=MAXi) c=1;
        }
        if(c) cout<<'?';
        else cout<<(char)(MAXi+'a');
        cout<<'\n';
    }
    return 0;
}