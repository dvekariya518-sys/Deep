#include <iostream>
using namespace std;
int main(){
    long long N,K;
     cin>>N>>K;

    vector<vector<long long>> bucket(K);

    for(long long i=0;i<N;i++){
        long long x;
        cin>>x;
        bucket[x%K].push_back(x);
    }

    for(long long i=0;i<K;i++)
        sort(bucket[i].begin(),bucket[i].end());

    for(long long i=K-1;i>=0;i--){
        for(long long x:bucket[i])
            cout<<x<<" ";
    }
}
