#include<iostream>
#include<vector>
using namespace std;
long long gcd(long long a,long long b){
    if(b==0){
    return a;
}
    return gcd(b,a%b);

}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,k;
        cin>> a>> b>>k;
        long long x;
        x=gcd(a,b);
        a=a/x;
        b=b/x;
        if(((a<=k && b>k) || (a>k&&b<=k))){
            cout<<2<<'\n';
        }
        else if(a>k && b>k){
            cout<<2<<'\n';
        }
        else{
            cout<<1<<'\n';
        }
    }


}