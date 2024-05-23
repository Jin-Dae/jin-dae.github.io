#include<iostream>
#include<algorithm>
using namespace std;
struct point{
    int x,y;
}a;
bool cmp(point a,point b){
    if(a.x!=b.x) return a.x<b.x;
    else return a.y<b.y;
}
point p[100000]; 
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin>>n;
    for(int i=0;i<n;i++){
        cin>>a.x>>a.y;
        p[i]=a;
    }
    sort(p,p+n,cmp);
    for(int i=0;i<n;i++) cout<<p[i].x<<' '<<p[i].y<<'\n';   
    return 0;
}