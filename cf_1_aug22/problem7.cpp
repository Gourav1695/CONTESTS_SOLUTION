#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
    ll t;
    cin >> t;
 
    while(t--){
		ll n,H,M;
		cin >> n >> H >> M;
		vector<ll> h(n);
		vector<ll> m(n);
		for(ll i=0; i<n; i++){
			cin >> h[i] >> m[i];
		} 
 
    vector<ll> ans(n);
    ll anss;
    anss=H*60+M;
    for(ll i=0; i<n; i++){
      ans[i]=h[i]*60 + m[i];
    }
    sort(ans.begin(), ans.end());
    ll temp = lower_bound(ans.begin(), ans.end(), anss) - ans.begin();
    if(temp != n){
      ll y = ans[temp] - anss;
      cout << y/60 << " " << y%60 << "\n";
    }
    else{
      ll y = 1440-anss + ans[0];
      cout << y/60 << " " << y%60 << "\n";
    }
    }
  return 0;
}