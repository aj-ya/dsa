#include<iostream>
using namespace std;
int main(){
    int n,num;
    cin>>n;
    while(n--){
        cin>>num;
    }
    (num%10==0)?cout<<"Yes":cout<<"No";
    return 0;
}