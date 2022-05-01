#define MOD 1000000007
#pragma GCC target("popcnt")
#include <bits/stdc++.h>
#include <numeric>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
int dfs(vector < vector < int > > &adj,vector < int > &sz,vector < int > &par,int root){
	for(auto &i:adj[root]){
		if(i!=par[root]){
			par[i]=root;
			sz[root]+=dfs(adj,sz,par,i);
		}
	}
	return sz[root];
}
void coutvec(vector<int>& a)
{
    for(int i=0;i<a.size();i++)
        cout << a[i] << " ";
    cout << "\n";
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin>>T;
	for(int T_Case=1;T_Case<=T;++T_Case){
		int64_t n,l{0},r{0},c,u,car;
		cin>>n;
		vector < int > par(n,-1),sz(n,1);
		vector < vector < int > > adj(n);
		vector < bool > vis(n);
		vector < int64_t > mex(n+1);
		for(int i=0; i<n-1; ++i){
			int u,v;
			cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		vis[0]=true;
		dfs(adj,sz,par,0);
        coutvec(sz);
		c=n*(n-1)/2;
		for(auto &i:adj[0]){
			mex[0]+=sz[i]* int64_t(sz[i]-1)/2;
		}
		c-=mex[0];
		for(int i=1; i<n; ++i){
			if(vis[u=i])
				continue;
			car=sz[u];
			while(!vis[u]){
				vis[u]=true;
				sz[par[u]]-=car;
				car+=sz[par[u]];
				u=par[u];
			}
			if(u!=l&&u!=r){
				mex[i]=c;
				c=0;
				break;
			}
			if(u==r)
				swap(l,r);
			mex[i]=c-sz[l=i]* int64_t(sz[r]);
			c=sz[l]* int64_t(sz[r]);
		}
		mex[n]=c;
		for(int i=0; i<=n; ++i){
			cout<<mex[i]<<' ';
		}
		cout<<'\n';
	}
}
