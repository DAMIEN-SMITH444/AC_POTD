#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a;
    cin>>n>>m>>a;

    long long length = ceil((double)n / a);
    long long height = ceil((double)m / a);
    cout<<length * height << endl;
    return 0;
}