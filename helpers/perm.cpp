#include <bits/stdc++.h>
using namespace std;
 
// Function to find all permutations of a given string `str[i…n-1]`
// containing all distinct characters
void permutations(vector<int> str, int i, int n)
{
    // base condition
    if (i == n - 1)
    {
        for(auto k:str)
            cout <<k<<" ";
        cout<<endl;
        return;
    }
 
    // process each character of the remaining string
    for (int j = i; j < n; j++)
    {
        // swap character at index `i` with the current character
        swap(str[i], str[j]);        // STL `swap()` used
 
        // recur for substring `str[i+1, n-1]`
        permutations(str, i + 1, n);
 
        // backtrack (restore the string to its original state)
        swap(str[i], str[j]);
    }
}