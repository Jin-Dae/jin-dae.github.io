#include<iostream>
#include<cstring>
using namespace std;
int n,b[25],c[4][4]; 
char d[4]; 
string a; 
char func(int e){
    int f=b[a[e]-'A'],g=b[a[e+1]-'A'];
    if(f>g) return d[c[g][f]];
    else return d[c[f][g]];
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>a;
    b['A'-'A']=0,b['G'-'A']=1,b['C'-'A']=2,b['T'-'A']=3;
    d[0]='A',d[1]='G',d[2]='C',d[3]='T';
    for(int i=0;i<4;i++) c[i][i]=i;
    c[0][1]=2,c[0][2]=0,c[0][3]=1,c[1][2]=3,c[1][3]=0,c[2][3]=1;
    for(int i=a.length()-2;i>=0;i--) a[i]=func(i);
    cout<<a[0];
    return 0;
}