#include<iostream>
#include<algorithm>
using namespace std;
int n,k,a[100000],sum,sum_; 
void func(int sum,int div){
    int a1,a2,a3;
    a1=sum/div; 
    sum=(sum%div)*10; a2=sum/div;
    sum=(sum%div)*10; a3=sum/div;
    sum=(sum%div)*10/div; 
    if(sum>=5){
        a3++; if(a3==10){
            a2++,a3=0; if(a2==10) a1++,a2=0;
        }
    }
    cout<<a1<<'.'<<a2<<a3<<'\n';
}
int main(){
    cin>>n>>k;
    cout<<fixed; cout.precision(2);
    for(int i=0;i<n;i++){
        int b,c; char d; cin>>b>>d>>c;
        a[i]=b*10+c; sum+=a[i];
    }
    sort(a,a+n); sum_=sum;
    for(int i=0;i<k;i++){
        sum-=a[0+i]+a[n-1-i]; sum_+=a[k]-a[0+i]+a[n-1-k]-a[n-1-i];
    }
    func(sum,10*(n-2*k));
    func(sum_,n*10);
    return 0;
}