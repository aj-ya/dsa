#include<iostream>
#include<string>
using namespace std; 

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned int t, n;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        char st=s[0],end=s[s.length()-1];
        int curr=0,maxL=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=st && s[i]!=end){
                curr++;
            }
            else{
                if(maxL<curr)
                maxL=curr;
                curr=0;
            }
        }
        if(maxL==0)maxL=-1;
        cout<<maxL<<"\n";
        //do something
    }
    return 0;
}