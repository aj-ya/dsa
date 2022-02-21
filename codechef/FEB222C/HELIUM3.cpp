#include <iostream>
using namespace std;

int main() {
    unsigned int t;
    cin>>t;
    while(t-->0){
        unsigned int a,b,x,y;
        cin>>a>>b>>x>>y;
        (a*b <= x*y)?cout<<"yes":cout<<"no";
        cout<<"\n";
    }
	// your code goes here
	return 0;
}
