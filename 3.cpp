#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        vector<long long >a(n),ans(q);
        vector<pair<long long ,long long >>k(q);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        for(long long i=0;i<q;i++){
            cin>>k[i].first;
            k[i].second=i;
        }
        sort(k.begin(),k.end());
        long long j=0,f=0;
        for(long long i=0;i<q;i++){
            if(a[0]>k[i].first)
                ans[k[i].second]=0;
            else {
                for(long long x=j;x<n;x++){
                    if(a[x]<=k[i].first){
                        f+=a[x];
                        j++;
                    }
                    else{
                        break;
                    }
                }
                ans[k[i].second]=f;
            }
        }
        for(auto c:ans){
            cout<<c<<' ';
        }
        cout<<'\n';
        }
    

}