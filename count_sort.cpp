#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int s;
    cin>>s;
    vector<int>a(s);
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    int max=a[0];
    for(int i=0;i<s;i++){
        if(a[i]>max)
        max=a[i];
    }
    vector<int>count(max+1);
    for(int i=0;i<s;i++){
        count[a[i]]++;
    }
    for(int i=1;i<=max;i++){
        count[i]+=count[i-1];
    }
    vector<int>b(s);
    for(int i=s-1;i>=0;i--){
        b[count[a[i]]-1]=a[i];
        count[a[i]]--;
    }
    for(int x:b){
        cout<<x<<' ';
    }
    cout<<'\n';
}
 
    
