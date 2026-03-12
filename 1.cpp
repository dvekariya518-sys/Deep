#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int A=0,B=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                A+=a[i];
            }
            else{
                B+=a[i];
            }
        }
        if(A>B)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
    }
}