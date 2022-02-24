#include<bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
using namespace std;
#define endl "\n"
typedef long long ll;
typedef vector<ll> vll;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;

void coutvec(vll& a){
    for(uint64 i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
void leftRotatebyOne(vector<ll>& arr,ll st,ll nd)
{
    int temp = arr[st], i;
    for (i = st; i < nd - 1; i++)
        arr[i] = arr[i + 1];
    arr[nd-1] = temp;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(cin.failbit);
    unsigned int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        assert(n>2 && n<=50);
        vll cpy(n);
        for(int i=0;i<n;i++){cpy[i]=i+1;}
        //uint64 count=0;
        for(int i=0;i<n;i++){
            if(i!=2){
                swap(cpy[i],cpy[2]);
                coutvec(cpy);
                //count++;
                swap(cpy[2],cpy[i]);
            }
        }
            swap(cpy[2],cpy[0]);
            swap(cpy[2],cpy[1]);
            coutvec(cpy);
            //count++;
            //cout<<count<<endl;
    }
    return 0;
}