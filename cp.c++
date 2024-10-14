#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n; 
    cin>>n;
    vector<int> v(n);
    for(auto &i:v) cin>>i;
    sort(v.begin(),v.end());
    int ans = v[0]+v[1];
    for(int i = 2; i<n; i++){
     ans += (v[i]*2);
}
cout<<ans<<"\n";
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
