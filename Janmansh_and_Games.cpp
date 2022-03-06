#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,m;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    ((n+m)%2==0)?cout<<"Janmansh\n":cout<<"Jay\n";
	}
	return 0;
}
