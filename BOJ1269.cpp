#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<int,int> m1,m2;
int n1,n2,cnt1,cnt2,s1[200000],s2[200000];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n1>>n2;
    cnt1=n1,cnt2=n2;
    for(int i=0;i<n1;i++){
        cin>>s1[i]; m1[s1[i]]++;
    }
    for(int i=0;i<n2;i++){
        cin>>s2[i]; m2[s2[i]]++;
    }
    for(int i=0;i<n1;i++){
        if(m2[s1[i]]) cnt1-=m2[s1[i]];
    }
    for(int i=0;i<n2;i++){
        if(m1[s2[i]]) cnt2-=m1[s2[i]];
    }
    cout<<cnt1+cnt2;
    return 0;
}