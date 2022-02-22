#include<bits/stdc++.h>
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
using namespace std;
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << " = " << a << endl;
	err(++it, args...);
}
#define eb emplace_back //use emplace_back instead of push_back as faster but not typesafe?
#define mt make_tuple //returns a tuple->heterogenous array? auto t= mt(1,"hello",3.455) etc
//swapping tie(a,b)=mt(b,a)
//
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
