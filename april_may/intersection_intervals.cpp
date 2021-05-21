vector<vector<int>> solve(vector<vector<int>>&arr1, vector<vector<int>>&arr2) {
    vector<vector<int>>v;
    int i = 0, j = 0;
  
    // Size of the two lists
    int n = arr1.size(), m = arr2.size();
  
    // Loop through all intervals unless
    // one of the interval gets exhausted
    while (i < n && j < m) {
        // Left bound for intersecting segment
        int l = max(arr1[i][0], arr2[j][0]);
  
        // Right bound for intersecting segment
        int r = min(arr1[i][1], arr2[j][1]);
  
        // If segment is valid print it
        if (l <= r)
        {
            vector<int>a{l,r};
            v.push_back(a);
        }

  
        // If i-th interval's right
        // bound is smaller
        // increment i else
        // increment j
        if (arr1[i][1] < arr2[j][1])
            i++;
        else
            j++;
    }
    return v;
}