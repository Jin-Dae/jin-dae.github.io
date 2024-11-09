#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
vector<int> a,ans;
map<int,bool> chk;
int n,m,sz;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int aa; cin>>aa;
        a.push_back(aa);
        chk[aa]=1;
    }
    for(int i=0;i<m;i++){
        int bb; cin>>bb;
        chk.erase(bb);
    }
    for(int i=0;i<n;i++) if(chk[a[i]]) ans.push_back(a[i]);
    sort(ans.begin(),ans.end());
    sz=ans.size();
    cout<<sz<<'\n';
    for(int i=0;i<sz;i++){
        cout<<ans[i]<<' ';
    }
    return 0;
}