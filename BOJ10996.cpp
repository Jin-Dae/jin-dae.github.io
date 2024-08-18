#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=0;i<2*n;i++){
        for(int j=0;j<n;j++){
            if((j+i)%2) cout<<' ';
            else cout<<'*';
        }
        cout<<'\n';
    }
    return 0;
}