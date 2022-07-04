#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--){
	    int n;
	    cin>>n;
	    if(n==3)
	    {
	        cout<<"-1"<<endl;
	    }
	    else
	    {
	        cout<<"1 3 4 2 ";
	    }
	    for (int i=5;i<=n;i++){
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
