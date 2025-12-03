#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k;
    cin>>n>>k;
    int a[n];
    int flag = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i])flag = 1;
    }
    int cnt=0;
    if(flag == 1){
        int maxi = INT_MIN;    
        for(int i=0;i<n;i++){
            maxi = max(a[i],a[k-1]);
            if(a[i] == 0){

            }
            else if (maxi == a[i])cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
