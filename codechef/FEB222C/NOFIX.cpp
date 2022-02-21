#include <iostream>
using namespace std;

int main() {
    unsigned int t;
    cin>>t;
    while(t-- > 0){
        long long int n;
        cin>>n;
        long long int a[n];
        for(long long int k=0;k<n;k++){
            cin>>a[k];
        }
        long long int pos=1,ch=0;
        for(long long int k=0;k<n;k++){
            //cout<<pos<<a[k]<<"\n";
            if(a[k]==pos){ch++;k--;}
            pos++;
        }
        cout<<ch<<"\n";
    }
	// your code goes here
	return 0;
}
