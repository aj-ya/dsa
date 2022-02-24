#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;
#define endl "\n"
typedef unsigned long long int  uint64;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(cin.failbit);
    unsigned int t;
    cin>>t;
    string seq;
    while(t--){
        string keys;
        cin>>seq;
        bool flag=false;
        for(uint64 i=0;i<seq.length();i++){
            if(isupper(seq[i])){
                //error(seq[i],i,seq.find(tolower(seq[i])));
                if(seq.find(tolower(seq[i]))>i){
                    flag=true;
                    break;
                    //cout<<"hello";
                }
            }
        }
        (flag==false)?cout<<"YES":cout<<"NO";
        cout<<endl;
        //do something
    }
    return 0;
}