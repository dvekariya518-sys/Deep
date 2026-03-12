#include<iostream>
#include<vector>
using namespace std;
 int main(){
    long long n;
    cin>>n;
    vector<long long>a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    long long ans=a[n-1];
    for(long long i=n-2;i>=0;i--){
        if(a[i]>=a[i+1]){
            ans+=a[i+1]-1;
            a[i]=a[i+1]-1;
            if(a[i]==0){
                break;}
            }
            else {
            ans+=a[i];
        }
    }
    cout<<ans;
 }