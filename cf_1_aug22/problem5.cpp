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
      vector<ll> arr(n);
      for(ll i=0; i<n; i++){
        cin >> arr[i];
      }
 
      for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        string s;
        cin >> s;
        ll temp=0;
        for(ll j=0; j<x; j++){
          if(s[j]=='U')
          temp--;
          else
          temp++;
        }
        arr[i]+=temp;
        if(arr[i] >= 0 && arr[i] <= 9 )
        cout << arr[i] << " ";
        else if(arr[i] > 9)
          cout << arr[i]%10 << " ";
        else
        cout << (9-(0-arr[i]-1)) << " ";// for negative numbers this is the formula
        }
        cout << "\n";
      }
}