#include<iostream>
#include<map>
#include<vector>
using namespace std;
map<int,bool> m;
int a[4],tg,cnt;
int find_num(bool chk,const int b[4]){
    int MIN=9999;
    vector<int> v; 
    for(int j=0;j<2;j++) for(int i=0;i<4;i++) v.push_back(b[i]);
    for(int i=0;i<4;i++){
        int temp=v[i]*1000+v[i+1]*100+v[i+2]*10+v[i+3];
        MIN=min(MIN,temp);
        if(chk) m[temp]=1;
    }
    return MIN;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>a[0]>>a[1]>>a[2]>>a[3]; tg=find_num(0,a);
    for(int i=1111;i<=9999;i++){        
        int temp=i; bool cant=0;
        for(int j=3;j>=0;j--) {
            a[j]=temp%10, temp/=10;
            if(a[j]==0) cant=1;
        }
        if(m[i]||cant) continue;
        cnt++;         
        if(tg==find_num(1,a)) {
            cout<<cnt;
            break;
        }
    }
    return 0;
}