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
        if(n==2){cout<<-1;continue;} 
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}