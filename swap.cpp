#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    int a[n];
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i=i+2*k){
        for(j=0;j<k;j++){
            swap(a[i+j],a[i+j+k]);
        }
    }

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}