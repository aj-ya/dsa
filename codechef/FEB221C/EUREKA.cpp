#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        assert(n>3 && n<16);
        double f=pow(0.143*n,n);
        if(f -(int)f < 0.5)
            cout<<(int)f<<endl;
        else
            cout<<(int)f+1<<endl;
    }
	// your code goes here
	return 0;
}
