#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void count_sort(vector<int>&a,int exp){
    vector<int>count(10,0),o(a.size());
    for(int i=0;i<a.size();i++){
        count[(a[i]/exp)%10]++;
    }
    for(int i=0;i<10;i++){
        count[i]+=count[i-1];
    }
    for(int i=a.size()-1;i>=0;i--){
        o[count[(a[i]/exp)%10]-1]=a[i];
        count[(a[i]/exp)%10]--;
    }
    for(int i=0;i<a.size();i++){
        a[i]=o[i];
    }
}
void radix_sort(vector<int>&a){
    int max=a[0];
    for(int i=0;i<a.size();i++){
        if(a[i]>max)
        max=a[i];
    }
    for(int exp=1;(max/exp)>0;exp*=10){
        count_sort(a,exp);
    }
}
int main(){
    int s;
    cin>>s;
    vector<int>a(s);
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    radix_sort(a);
    for(int x:a){
        cout<<x<<' ';
    }
    cout<<'\n';
}