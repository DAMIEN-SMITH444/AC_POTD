/*
Total N legs
    cows = 4
    chiken = 2
->  if odd number then return 0
->  For Even
    ex01 - 10
    10/4=2(cow)
    remainder 2 ==chiken
    ex02 - 12
    12/4=3(cow)
    remainder 0 
    numbers of possible be = N/4 + 1
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;cin>>n;
        if(n % 2 == 1)cout<<0<<endl;
        else cout<<(n/4)+1<<endl;
    }
}