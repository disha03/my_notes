#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n, j = 1, c = 0;
    cin >> n;
    vector<int> v(n + 1);
    if(n==4)
    {
        cout<<"2 4 1 3"<<"\n";
        return 0;
    }
    for (int i = 0; i < n; i += 2)
    {
        if (j <= n)
        {
            v[i] = j;
            j++;
        }
    }
    for (int i = 1; i < n; i += 2)
    {
        if (j <= n)
        {
            v[i] = j;
            j++;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (abs(v[i] - v[i - 1]) == 1)
        {
            cout << "NO SOLUTION"
                 << "\n";
            c++;
            break;
        }
    }
    if (c == 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
    }
}