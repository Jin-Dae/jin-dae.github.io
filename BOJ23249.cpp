#include<iostream>
using namespace std;
int map[301][301],ans,h,x;
int main(){
    cin>>h>>x;
    for(int i=1;i<=h;i++) for(int j=1;j<=x;j++) cin>>map[i][j];
    for(int i=1;i<=h;i++) for(int j=1;j<=x;j++){
        for(int k=0,sum=0;k<10;k++){
            int eh=i+k;
            if(eh>h) break;
            sum+=map[eh][j];
            if(sum==10) {ans++; break;}
            else if(sum>10) break;
        }
        for(int k=0,sum=0;k<10;k++){
            int ex=j+k;
            if(ex>x) break;
            sum+=map[i][ex];
            if(sum==10&&k!=0) {ans++; break;}
            else if(sum>10) break;
        }
        for(int k=0,sum=0;k<5;k++){
            int eh=i+k,ex=j+1;
            if(eh>h||ex>x) break;
            sum+=map[eh][j]+map[eh][ex];
            if(sum==10&&k!=0) {ans++; break;}
            else if(sum>10) break;
        }      
        for(int k=0,sum=0;k<5;k++){
            int ex=j+k,eh=i+1;
            if(ex>x||eh>h) break;
            sum+=map[i][ex]+map[i+1][ex];
            if(sum==10&&k!=1&&k!=0) {ans++; break;}
            else if(sum>10) break;
        }
        if(i+2<=h&&j+2<=x){
            int sum=0;
            for(int k=0;k<3;k++) for(int l=0;l<3;l++) {
                sum+=map[i+k][j+l];
            }
            if(sum==10) ans++;
        }
    }
    cout<<ans;
    return 0;
}