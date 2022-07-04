#include<bits/stdc++.h>
using namespace std;

#define int_out(x) printf("%d", x)
#define ll_out(x) printf("%lld", x)
#define char_out(x) printf("%c", x)
#define str_out(x) printf("%s", x)
#define YES printf("YES\n")
#define Yes printf("Yes\n")
#define NO printf("NO\n")
#define No printf("No\n")
#define nl printf("\n")
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,m;
        cin>>n>>m>>k;
        
        vector<int >A(n+1,0);

        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            A[num]+=1;

        }
        int mex=0;
        for(int i=0; i<k; i++)
        {
            if(A[i]!=0){
                mex++;

            }
            else{
                break;

            }
        }
        int available =n-A[k];
        if(k<=m && mex ==k && available >=m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}