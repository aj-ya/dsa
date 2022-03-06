#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t,n,m;
	cin>>t;
	while(t--){
        long long int temp;
	    cin>>n>>m;
        bool flag=false;
        for(long long int i=1;i<=n;i++){
            if(m%i==0){
                temp=m/i; 
                cout<<i<<" "<<temp<<" ";
                if(temp <=(n-i+1))
                    {flag=true;break;}
            }
        }
        (flag)?cout<<"YES":cout<<"NO";
        cout<<"\n";
	}
	return 0;
}
