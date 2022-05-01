#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(cin.failbit);
    unsigned int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        string sk(s);
        unsigned int cost=0,pos,i=0;
        sort(sk.begin(),sk.end());
        while(!s.empty()){
            pos=s.find(sk[i]);
            cost+=pos+1;
            s.erase(s.begin()+pos);
            i++;
        }
        cout<<cost<<"\n";
    }
    return 0;
}