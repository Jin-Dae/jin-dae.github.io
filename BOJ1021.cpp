#include<iostream>
#include<deque>
using namespace std;        
deque<int> dq;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n,m,ans=0; cin>>n>>m;
    for(int i=1;i<=n;i++) dq.push_back(i);
    while(m--){
        int kth,cnt=0; cin>>kth;
        while(dq.front()!=kth){
            cnt++;
            dq.push_back(dq.front());
            dq.pop_front();
        }
        dq.pop_front();
        ans+=min(n---cnt,cnt);
    }
    cout<<ans;
    return 0;
}