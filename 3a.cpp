#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,q;
        cin>>n>>q;

        vector<long long>a(n),ans(q);
        vector<pair<long long,long long>>k(q);

        for(long long i=0;i<n;i++)
            cin>>a[i];

        for(long long i=0;i<q;i++){
            cin>>k[i].first;
            k[i].second=i;
        }

        sort(k.begin(),k.end());

        long long j=0;
        long long sum=0;
        long long mx=0;

        for(long long i=0;i<q;i++){
            long long limit=k[i].first;

            while(j<n){
                long long newMax = max(mx,a[j]);

                if(newMax<=limit){
                    mx=newMax;
                    sum+=a[j];
                    j++;
                }
                else break;
            }

            ans[k[i].second]=sum;
        }

        for(auto c:ans) cout<<c<<" ";
        cout<<"\n";
    }
}
