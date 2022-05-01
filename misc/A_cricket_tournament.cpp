#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int  lli;
typedef vector<lli> vlli;
void cinvec(vlli& a){
    for(lli i=0;i<a.size();i++){
        cin>>a[i];
    }
}
void coutvec(vlli& a){
    for(lli i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(cin.failbit);
    unsigned int n;
    cin>>n;
    vlli a(n),b(n);
    cinvec(a);
    cinvec(b);
    sort(a.begin(),a.end(),[](lli a,lli b){return a>b;});
    sort(b.begin(),b.end());
    lli sum=0;
    for(int i=0;i<n;i++){sum+=(a[i]>b[i])?a[i]-b[i]:0;}
    //coutvec(a);
    //coutvec(b);
    cout<<sum<<endl;
    return 0;
}