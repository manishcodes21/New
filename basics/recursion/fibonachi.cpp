#include<bits/stdc++.h>
using namespace std;
int fibonachi(int n){
    if(n<=1) return n;
    else{
        return fibonachi(n-1)+fibonachi(n-2);
    }
}
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
      int x =fibonachi(i);
    cout<<x<<" ";
    }
    
}
int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}