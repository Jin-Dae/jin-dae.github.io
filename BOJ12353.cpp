#include<iostream>
using namespace std;
void itof(int s){
    cout<<s/12<<'\''<<s%12<<'\"';
    return;
}
int main() {
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        getchar();
        char a,b,c; int d,e,f,g,sum,w=0;
        scanf("%c %d%c%d%c %d%c%d%c",&a,&d,&b,&e,&c,&f,&b,&g,&c);
        sum=d*12+e+f*12+g;
        sum+=(a=='B')?5:-5;
        if(sum%2) w=1;
        sum/=2;
        cout<<"Case #"<<i<<": ";
        itof(sum-4+w);
        cout<<" to ";
        itof(sum+4);
        cout<<'\n';
    }
    return 0;
}