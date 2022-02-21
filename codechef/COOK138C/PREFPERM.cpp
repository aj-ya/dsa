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
    llui t,n,k,p;
    cin>>t;
    while(t-->0){
        cin>>n>>k;
        vector<llui>a(k),res(n);
        for(int i=0;i<n;i++)res[i]=i+1;
        for(int i=0;i<k;i++)cin>>a[i];
        //cout<<a[k-1];
        int prev=0;
        for(int i=0;i<a.size();i++){
             leftRotatebyOne(res,prev,a[i]);
             prev=a[i];
        }
        for(int i=prev;i<n;i++){
            res[i]=i+1;
        }
        for(auto i:res)cout<<i<<" ";
	    cout<<"\n";
    }
	// your code goes here
	return 0;
}