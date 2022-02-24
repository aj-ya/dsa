#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void initial_code()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);


	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE	
}

int32_t main() {   
	initial_code();

	int t; cin>>t; while(t--)
	{
		string s; cin>>s;
		int n = s.size()/2;

		string s1 = s.substr(0,n);
		string s2;
		if(s.size() % 2 == 1)
			s2 = s.substr(n+1, s.size());
		else
			s2 = s.substr(n, s.size());

		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());

		if(s1 == s2) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}

	return 0;
	    	
}