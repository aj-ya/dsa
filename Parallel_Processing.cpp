#include<iostream>
using namespace std;
typedef long long unsigned int lli;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(cin.failbit);
    lli t,n;
    cin>>t;
    while(t--){
        cin>>n;
        lli arr[n];
        for(lli i=0;i<n;i++)cin>>arr[i];
        lli f=0,s=n-1;
        lli sumf=0,sums=0;
        while(f<s){
            if(sumf<sums){
                sumf+=arr[f];
                f++;
            }
            else if(sumf>sums){
                sums+=arr[s];
                s--;
            }
            else{
                sumf+=arr[f];
                f++;
                sums+=arr[s];
                s--;
            }
        }
        lli ret=(n%2==0)?0:arr[f];
        cout<<max(max(sumf,sums),min(sumf,sums)+ret)<<"\n";
    }
    return 0;
}