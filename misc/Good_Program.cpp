#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(cin.failbit);
    unsigned int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        (n%4==0)?cout<<"Good\n":cout<<"Not Good\n";
    }
    return 0;
}