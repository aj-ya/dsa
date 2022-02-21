#include <iostream>
using namespace std;

int main() {
	// your code goes here
	unsigned int t;
	cin>>t;
	while(t-->0){
	    long x;
	    cin>>x;
	    int c=0,n=0,d=0;
	    int m=14;
	    while(m-->=0){
	        int r=getchar();
	        if(r==(int)'C')c++;
	        else if(r==(int)'N')n++;
	        else if(r==(int)'D')d++;
	        //cout<<(char)r;
	    }
	    //cout<<x<<" "<<c<<" "<<n<<" "<<d<<"\n";
	    if(c==n)cout<<x*55;
	    else if(c>n)cout<<x*60;
	    else cout<<x*40;
	    cout<<"\n";
	}
	return 0;
}
