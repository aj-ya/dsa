#include<iostream>
using namespace std;
int main(){
    int n;
    bool j=false;
    cin>>n;
    char a[n];
    cin>>a;
    if(a[0]=='H' && n>1 && a[1]!='.'){cout<<"NO";return 0;}
    for(int i=1;i<n-1;i++){
        if(a[i]=='H'){
            if(a[i+1]!='.' || a[i-1]!='.'){j=true;break;}}
    }
    if(j){cout<<-1;return 0;}
    if(a[n-1]=='H' && n-2>=0 && a[n-2]!='.'){cout<<"NO";return 0;}
    cout<<"YES\n";
    for(int i=0;i<n;i++){
        a[i]=='H'?cout<<'H':cout<<'B';
    }
    return 0;
}