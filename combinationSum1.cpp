#include<bits/stdc++.h>
using namespace std;
class Solution
{
    void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
    {
        if (ind == arr.size())
        {
            if (target == 0)
            {
                ans.push_back(ds);
            }
            return;
        }
        // pick up the element
        if (arr[ind] <= target)
        {
            ds.push_back(arr[ind]);
            findCombination(ind, target - arr[ind], arr, ans, ds);
            ds.pop_back();
        }

        findCombination(ind + 1, target, arr, ans, ds);
    }

public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
          vector < vector < int >> ans;
          vector < int > ds;
          findCombination(0, target, candidates, ans, ds);
          return ans;
    }
};
https://lh6.googleusercontent.com/0MkLF-E2sJeZl76MJeOmrZNrR8mp6hW8Rusu2705vDbfpkScaw92cRPlhqWe_r8zMLLpftrJxteoKmuE9CBAJuqY3MheJlxe8rVZ6Lrk4aC31x2ulkk7fXI8IIHp3VAKa2GySMbQ

https://lh4.googleusercontent.com/U5JtSW7Y521CQwZ88XkFdkY10h6uWeLVGNt9p6qTE4YpAWUwZhSzrThEg5iGs6EMVCgpE00Q0ilJY_Plu8CIalZ33zwu1hS0645TIE70h4LTKGisF9dx2lA6jzMykPG5NbD6SPmo