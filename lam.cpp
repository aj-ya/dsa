#include <iostream>
#include <unordered_set>

using namespace std;

// The function will print the output for a square matrix. To make it work for Non square matrix. The inpu

int sunOfRepeatingElements(int m, int n, int **array)
{

    int sum = 0;
    int **a;

    // putting 1 at missing places if matrix is not a square matrix.

    if (m != n)
    {
        if (m < n)
        {
            a = new int *[n];
            for (int i = 0; i < (n - m); ++i)
            {
                a[i] = new int *[n];
                for (int j = 0; j < n; j)
                {
                    a[i][j] = 1;
                }
            }

            for (int(n - m); i < n; ++i)
            {
                a[i] = array[i - (n - m)];
            }
            m = n;
        }
        else
        {
            a = new int *[m];
            for (int i = 0 i < m; ++i)
            {
                a[i] = new int[n];
                for (int i = 0 j < m; ++j)
                    if (j < n)
                        a[i][j] = array[i][j];
                    else
                        a[i][j] = 1;
            }
        }

        17 Else Part End

            // To store the non-diagonal elements in a set (method start) (can be used for printing the array as well) unordered set<int> non diagonal elements; // using unordered-set which takes 0(1) search time for (int i = 0; i < m; i

            for (int j = 0; j < m; ++1)

                if (i = j && != m - j - 1) non diagonal elements.insert(a[i][j]);

        // To store the non-diagonal elements in a set method end

        // Again iterate but this time, at diagonal elements. (same method as above)

        for (int i = 0; i < m; ++1) for (int j = 0; j < m

// skip if it is a non-diagonal element if (i = && im-j-1)

continue;

check whether it's a non-diagonal-element and if it is, add it to the sum. if(non diagonal elements.find(a[i][j])-non_diagonal_elements.end())

// Method End return sum;

int main()

int m,n;

int a new int[n]; for (int i = 0 i<m; ++i)

a[i]= new int[n]; for (int j = 0 j < n; ++1)

cout << sumOfRepeatingElements (m,n,a)<<endl;

return 0;