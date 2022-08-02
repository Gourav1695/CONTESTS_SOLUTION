#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while (t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        map<char,ll>mp;
        ll ans=0;

        for (ll i=0; i<n;i++)
        {
            ans+=1;
            if(mp[s[i]]==0)
            ans++;
            mp[s[i]]++;

        }
        cout<<ans<<endl;
    }
   return 0;
}