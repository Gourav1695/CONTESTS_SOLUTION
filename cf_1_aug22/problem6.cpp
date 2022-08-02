#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
      ll n;
      cin >> n;
      vector<string> arr(n);
      map<string,ll> mp;
      for(ll i=0; i<n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
      }
      string ans="";

      for(ll i=0; i<n; i++){
        string s=arr[i];
        bool flag = false;
        for(ll j=0; j<s.size(); j++){
          if(mp[s.substr(0,j+1)] > 0 && mp[s.substr(j+1, s.size()-j-1)]){
            ans+='1';
            flag=true;
            break;
          }
        }
        if(flag == false)
        ans+='0';
      }


cout << ans << "\n";
      
      }    
  return 0;
}