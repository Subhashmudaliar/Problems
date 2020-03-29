/*
https://leetcode.com/problems/sort-array-by-parity-ii/
*/
class Solution {
  public:
    vector < int > sortArrayByParityII(vector < int > & A) {
      vector < int > result(A.size());
      int even = 0, odd = 1;
      for (int x: A) {
        if (x % 2 == 0) {
          result[even] = x;
          even += 2;
        } else {
          result[odd] = x;
          odd += 2;
        }
      }
      return result;
    }
};
