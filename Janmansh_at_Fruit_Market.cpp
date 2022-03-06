#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t,x,k[3];
	cin>>t;
	while(t--){
	    cin>>x>>k[0]>>k[1]>>k[2];
        sort(k,k+3);
        cout<<(k[0]*(x-1))+k[1]<<"\n";
	}
	return 0;
}
