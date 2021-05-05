#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long int c = 0;
    unordered_map<string, int> a;
    bool check(unordered_map<string, int> m, long long int h, string s)
    {
        if (m.find(s) != m.end())
        {
            return true;
        }
        return false;
    }
    bool findd(unordered_map<string, int> m, long long int h, string s)
    {

        long long int size = s.size();
        if (size == 0)
        {
            return a[s] = true;
        }
        for (long long int i = 1; i <= size; i++)
        {

            if (check(m, h, s.substr(0, i)) == true && findd(m, h, s.substr(i, size - 1)) == true)
            {
                c++;
                c = c % h;
                return true;
                //v.push_back({s.substr(0,i),s.substr(i,size-1)});
                //cout<<s<<" ";
            }
        }
        return a[s] = false;
    }
    bool wordBreak(string s, vector<string> &wordDict)
    {
        long long int n, l, j = 0, h = 1000000007;
        c = 0;
        n = s.size();
        l = wordDict.size();
        unordered_map<string, int> m;
        for (long long int i = 0; i < l; i++)
        {

            m[wordDict[i]]++;
        }
        findd(m, h, s);
        if (c >= 1)
        {
            return true;
        }
        return false;
    }
};
int main()
{

    static const int _ = []() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        return 0;
    }();
    long long int n, l, j = 0, h = 1000000007;
    c = 0;
    string s, s1;
    cin >> s;
    cin >> l;
    n = s.size();
    unordered_map<string, int> m;
    for (long long int i = 0; i < l; i++)
    {
        cin >> s1;
        m[s1]++;
    }
    findd(m, h, s, 0);

    cout << c % h << "\n";
}

//recurssion with dp1***********************************************************
class Solution
{
public:
    long long int c = 0;
    unordered_map<string, bool> a;
    bool check(unordered_map<string, int> m, long long int h, string s)
    {
        if (m.find(s) != m.end())
        {
            return true;
        }
        return false;
    }
    bool findd(unordered_map<string, int> m, long long int h, string s, int low)
    {

        long long int size = s.size();
        if (size == 0)
        {
            return true;
        }
        if (a.find(s) != a.end())
        {
            return a[s];
        }
        for (long long int i = 1; i <= size; i++)
        {

            if (check(m, h, s.substr(0, i)) == true && findd(m, h, s.substr(i, size - i), i) == true)
            {

                c++;
                c = c % h;
                return a[s] = true;
                //v.push_back({s.substr(0,i),s.substr(i,size-1)});
                //cout<<s<<" ";
            }
        }
        return a[s] = false;
    }
    bool wordBreak(string s, vector<string> &wordDict)
    {
        long long int n, l, j = 0, h = 1000000007;
        c = 0;
        n = s.size();
        l = wordDict.size();
        unordered_map<string, int> m;
        for (long long int i = 0; i < l; i++)
        {

            m[wordDict[i]]++;
        }
        if (findd(m, h, s, 0))
        {
            return true;
        }

        return false;
    }
};
static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();