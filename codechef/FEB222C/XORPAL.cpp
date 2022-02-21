#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int t;
    cin>>t;
    while(t-->0){
        int n,d,z=0,o=0;
        cin>>n;
        assert(n>0);
        d=getchar();//<--'\n' 
        for(int k=0;k<n;k++){
            d=getchar();
            if(d==(int)'0')z++;
            else o++;
        }
        //cout<<z<<' '<<o<<"\n";
        if(n%2==0){
            if(z%2==0)cout<<"yes";//even z & o for xor 0
            else if(n/2==z)cout<<"yes";//z==o for xor 1
            else cout<<"no";
            cout<<"\n";
        }
        else{
            cout<<"yes";//xor 0
            //else cout<<"no";
            cout<<"\n";
        }
    }
	// your code goes here
	return 0;
}
