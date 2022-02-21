#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int llui;
typedef long long int lli;
void leftRotatebyOne(vector<llui>& arr,llui st,llui nd)
{
    int temp = arr[st], i;
    for (i = st; i < nd - 1; i++)
        arr[i] = arr[i + 1];
    arr[nd-1] = temp;
}
int main() {
    llui t,n,k;
    cin>>t;
    while(t-->0){
        cin>>n>>k;
        if(k==0){cout<<-1<<"\n";continue;}
        else if(n==k){for(int i=1;i<=n;i++){cout<<i<<" ";}cout<<"\n";continue;}
        vector<llui>a(n);
        for(int i=0;i<n;i++)a[i]=i+1;
        if(k==n-1){a[0]+=a[a.size()-1];
        a[a.size()-1]=a[0]-a[a.size()-1];
        a[0]-=a[a.size()-1];
        }
        else{
        leftRotatebyOne(a,k ,n);}
        for(auto i:a)cout<<i<<" ";
	    cout<<"\n";
    }
	// your code goes here
	return 0;
}