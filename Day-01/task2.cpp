/*
A Soilder wants to buy w bananas in the shop. He has to pay k dollars for the first banana, 2k dollars for the second one and so on (in other words, he has to pay i·k dollars for the i-th banana).

He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?

k =  the cost of the first banana.
n =  initial number of dollars
w =  number of bananas he wants

input =
    k =  3 (1st)
    n = 17 (soilder has total money)
    w = 4 (he wants to buy)

    3+6+9+12 = 30
    30 - 17 = 13(ans)

output = 13

    sum()
        1 -> 4
            sum + 3*i 
*/


#include <bits/stdc++.h>
using namespace std;

int summation (int k , int w){
    int sum = 0 ;
    for(int i = 1;i<=w;i++){
        sum+=k*i;
    }
    return sum ;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k,n,w;
    cin>>k>>n>>w;
    int total = summation(k,w);
    if( total < n ){
        cout<<0<<endl;
    }else {
        int ans = total - n;
        cout <<ans<<endl;
    }
    return 0;
}
