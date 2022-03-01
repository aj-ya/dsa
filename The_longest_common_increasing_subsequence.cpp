#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl "\n"
#define eb emplace_back
#define mp make_pair
vector<int> a, b, c;
int getIndex(vector<int> &v, int &K, int pos)
{
    int index = -1;
    for (int i = pos; i < v.size(); i++)
    {
        if (v[i] == K)
        {
            index = i;
            break;
        }
    }
    return index;
}
string NDS(vector<int> &chk, vector<int> &str)
{
    int prevIndex = -1;
    string posb;
    for (int j = 0; j < chk.size(); j++)
    {
        int curr = getIndex(str, chk[j], prevIndex + 1);
        if (curr == -1)
        {
            return "";
        }
        else
        {
            prevIndex = curr;
            posb.append(to_string(curr + 1) + " ");
        }
    }
    return posb;
}
int maxSize = 0;
string final1, final0;
void find(vector<int> inp, vector<int> out)
{
    if (inp.size() == 0)
    {
        if (out.size() > maxSize)
        {
            string tempr = NDS(out, b);
            if (tempr != "")
            {
                // cout<<tempr<<"<-tempr\n";
                maxSize = tempr.length() / 2;
                final0 = NDS(out, a);
                final1 = tempr;
            }
        }
        return;
    }
    vector<int> temp;
    temp.eb(inp[0]);
    bool flag=inp[0]==0?true:false;
    inp.erase(inp.begin());
    find(inp, out);
    if(flag==true)return;
    if (out.size() == 0)
        find(inp, temp);

    else if (temp[0] >= out[out.size() - 1])
    {
        out.eb(temp[0]);
        find(inp, out);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(cin.failbit);
    int n, m,t,i,ct=0;
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        cin >> t;
        a.eb(t);
    }
    for (i = 0; i < m; i++)
    {
        
        cin >> t;
        b.eb(t);
    }
    for(i=0;i<n;i++){
        if((getIndex(b,a[i], 0) == -1)){a[i]=0;ct++;}
    }
    if(ct==n) cout<<0;
    else
    {
        find(a,c);
        cout<<maxSize<< "\n"<<final0<<"\n"<<final1;
    }
    return 0;
}