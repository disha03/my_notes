int largestRectangleArea(vector<int> A)
{
    int n = A.size(), maxi = 0;
    stack<pair<int, int>> s;
    vector<int> l(n + 1), r(n + 1);
    for (int i = 0; i < n; i++)
    {
        if (s.empty())
        {
            l[i] = -1;
        }
        else if (s.top().first < A[i])
        {
            l[i] = s.top().second;
        }
        else
        {
            while (s.empty() == false && s.top().first >= A[i])
            {
                s.pop();
            }
            if (s.empty() == false)
            {
                l[i] = s.top().second;
            }
            else
            {
                l[i] = -1;
            }
        }
        s.push({A[i], i});
    }
    stack<pair<int, int>> k;
    for (int i = n - 1; i >= 0; i--)
    {
        if (k.empty())
        {
            r[i] = n;
        }
        else if (k.top().first < A[i])
        {
            r[i] = k.top().second;
        }
        else
        {
            while (k.empty() == false && k.top().first >= A[i])
            {
                k.pop();
            }
            if (k.empty() == false)
            {
                r[i] = k.top().second;
            }
            else
            {
                r[i] = n;
            }
        }
        k.push({A[i], i});
    }
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, (r[i] - l[i] - 1) * A[i]);
    }
    return maxi;
}
int Solution::maximalRectangle(vector<vector<int>> &A)
{
    int maxi = 0, k = 0;
    k = largestRectangleArea(A[0]);
    maxi = max(maxi, k);
    for (int i = 1; i < A.size(); i++)
    {

        for (int j = 0; j < A[i].size(); j++)
        {
            if (A[i][j] != 0)
            {
                A[i][j] += A[i - 1][j];
            }
            else
            {
                A[i][j] = 0;
            }
        }
        k = largestRectangleArea(A[i]);

        maxi = max(maxi, k);
    }
    return maxi;
}
