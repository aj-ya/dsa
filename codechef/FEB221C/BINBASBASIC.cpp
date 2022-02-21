#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int len,op;
        cin>>len>>op;
        string str;
        cin>>str;
        int nop=0;
        for(int i=0;i<len/2;i++){
           if(str[i]!=str[len-1-i]){
            //   cout<<str[i]<<"\t"<<str[str.length()-1-i]<<endl;
           nop++;}
        }
        if(nop==op)
             cout<<"YES"<<endl;
        else if(nop!=0 && nop>=op)
             cout<<"NO"<<endl;
        else if(nop<op){
             if(len%2==0 && (op-nop)%2==0)
                 cout<<"YES"<<endl;
             else if(len%2!=0)
                 cout<<"YES"<<endl;
             else
                 cout<<"NO"<<endl;
         }
            
    }
	// your code goes here
	return 0;
}
