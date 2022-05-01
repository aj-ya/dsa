#include<iostream>
#include<string>
using namespace std;
int main(){
    int x=0,y=0;
    char n;
    while(cin>>n){
        if(n=='z')x++;
        else y++;
    }
    (x*2==y)?cout<<"Yes":cout<<"No";
    return 0;
}