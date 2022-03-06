#include<iostream>
#include<vector>
using namespace std;

long int retLowest(vector<bool>& freq,long int st){
    for(long int i=st-1;i<freq.size();i++){
        if(freq[i]==false)return i;
    }
    return 0;
}
int main(){
    unsigned int t,n;
    long int temp;
    cin>>t;
    while(t--){
        cin>>n;
        vector<bool>freq(n*2,false);
        for(long int i=0;i<n-1;i++){
           if(i%2==0){
               temp=retLowest(freq,i-1)+1;
               cout<<temp<<" "<<temp*2<<" ";
               freq[temp-1]=true;
               freq[temp*2-1]=true;
           } 
        }
        if(n%2!=0)cout<<retLowest(freq,n-1)+1;
        cout<<"\n";         
    }
    return 0;
}