#include<bits/stdc++.h>
using namespace std;
#define mt make_tuple
void Tuples101(){
    //https://codeforces.com/blog/entry/93914
    auto a=mt('1',2,4.5);
    cout<<"Accessing the tuple elements is done through get<_index>(_tuple). also the _index must be a constant not a variable\n";
    cout<<get<0>(a)<<"\t"<<get<1>(a)<<"\t"<<get<2>(a)<<"\n";
    cout<<"Do not use a tuple for persistant jobs as there is no easy way to iterate through them as of now.\n";
    cout<<"----UseCases for Tuples----\n";
    cout<<"1.Destructuring using std::tie\n";
    int c,b;
    tie(b,ignore,c)=mt(1,4.5,3);
    cout<<"tie(_v1,ignore,_v2)=make_tuple(1,4.5,3)\n_v1->1,_v2->3\n";
    cout<<"2.Swapping values using std::tie\n";
    tie(b,c)=mt(c,b);
    cout<<"tie(_v1,_v2)=make_tuple(_v2,_v1)\n";
    cout<<"Size of Tuple->"<<tuple_size<decltype(a)>::value;
}
int main(){
    Tuples101();
    return 0;
}