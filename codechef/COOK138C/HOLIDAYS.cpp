#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int llui;
typedef long long int lli;
int main() {
    llui t,n,w;
    cin>>t;
    while(t-->0){
        cin>>n>>w;
        vector<unsigned int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end(),[](int a,int b){return a>b;});
        int count=0,sum=0;
        for(auto i :a){
            count++;
            sum+=i;
            if(sum>=w)break;
        }
        cout<<a.size()-count<<"\n";
    }
	// your code goes here
	return 0;
}
