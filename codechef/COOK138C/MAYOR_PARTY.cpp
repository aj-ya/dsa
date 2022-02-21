#include <iostream>
using namespace std;
typedef unsigned long long int llui;
typedef long long int lli;
int main() {
    llui t,a,b,c;
    cin>>t;
    while(t-->0){
        cin>>a>>b>>c;
        a+c>b?cout<<a+c:cout<<b;
        cout<<"\n";
    }
	// your code goes here
	return 0;
}
