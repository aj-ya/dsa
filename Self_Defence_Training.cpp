#include<iostream>
using namespace std;
#define endl "\n"
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(cin.failbit);
    unsigned int t,n,k;
    cin>>t;
    while(t--){
        cin>>n;
        int sum=0;
        for(int i=0;i<n;i++){cin>>k;if(k>=10&&k<=60)sum++;}
        cout<<sum<<endl;
        //do something
    }
    return 0;
}