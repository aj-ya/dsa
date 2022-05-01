#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(cin.failbit);
    unsigned int x,y;
    cin>>x>>y;
    x-=y;
    y/=2;
    cout<<x+y;
    return 0;
}