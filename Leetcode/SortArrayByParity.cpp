class Solution {
  public:
    vector < int > sortArrayByParity(vector < int > & A) {
      vector < int > odd;
      vector < int > even;
      for (int x: A) {
        if (x % 2 == 0) {
          even.push_back(x);
        } else {
          odd.push_back(x);
        }
      }
      even.insert(even.end(), odd.begin(), odd.end());
      return even;
    }

};
