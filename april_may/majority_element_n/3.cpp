//https://leetcode.com/problems/majority-element-ii/
vector<int> majorityElement(vector<int>& nums) {

  if (nums.size() == 1) return nums;

  int cand1 = INT_MIN, cand2 = INT_MIN;
  int count1 = 0, count2 = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == cand1)
      count1++;
    else if (nums[i] == cand2)
      count2++;
    else if (count1 == 0) {
      cand1 = nums[i];
      count1++;
    } else if (count2 == 0) {
      cand2 = nums[i];
      count2++;
    } else {
      count1--;
      count2--;
    }
  }

  count1 = 0;
  count2 = 0;
  for (int n : nums) {
    if (n == cand1)
      count1++;
    else if (n == cand2)
      count2++;
  }
  int threshold = nums.size() / 3;
  vector<int> ans;
  if (count1 > threshold) ans.push_back(cand1);
  if (count2 > threshold) ans.push_back(cand2);

  return ans;
}