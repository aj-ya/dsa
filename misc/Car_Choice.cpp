#include<iostream>
using namespace std;
#define endl "\n"
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(cin.failbit);
    unsigned int t;
    float a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if(c/a<d/b)cout<<-1;
        else if(c/a>d/b)cout<<1;
        else cout<<0;
        cout<<endl;
        //do something
    }
    return 0;
}