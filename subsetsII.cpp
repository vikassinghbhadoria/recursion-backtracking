#include<bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> temp;
    void makeallsubset(set<vector<int>>& ans,vector<int>& result,vector<int>&nums,int ind)
    {
        temp=result;
        sort(temp.begin(),temp.end());
        ans.insert(temp);
        for(int i=ind;i<nums.size();i++)
        {
            result.push_back(nums[i]);
            makeallsubset(ans,result,nums,i+1);
            result.pop_back();
        }
        return ;
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        
        vector<int> result;
        
        makeallsubset(ans,result,nums,0);
        vector<vector<int>> ans1(ans.begin(),ans.end());
        return ans1;
        
    }
};
https://lh6.googleusercontent.com/0MkLF-E2sJeZl76MJeOmrZNrR8mp6hW8Rusu2705vDbfpkScaw92cRPlhqWe_r8zMLLpftrJxteoKmuE9CBAJuqY3MheJlxe8rVZ6Lrk4aC31x2ulkk7fXI8IIHp3VAKa2GySMbQ