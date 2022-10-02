#include<bits/stdc++.h>
using namespace std;
class Solution {
    vector<vector<int>> ans;
    void combo(vector<int>&a, int i, int n, int target, vector<int>&ds)
{
    if(!target)
    {
        ans.push_back(ds);
        return;
    }
    for(int j=i;j<n;j++)
    {
        if(j>i && a[j]==a[j-1])continue;
        if(a[j]>target)    break;
        ds.push_back(a[j]);
        combo(a,j+1,n,target-a[j],ds);
        ds.pop_back();
    }
}

public:
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
      vector<int>ds;
    sort(candidates.begin(),candidates.end());
    combo(candidates,0,candidates.size(),target,ds);
    return ans;   
    }
};
https://lh6.googleusercontent.com/xsb46oCfbNclHzkzuOZqiGDcST0giAlFSAjWC-FcXA4oYidD7n6DHq3qj4oJ4_qqSk4dzrozFM1V1yF5N237h5oo2rbQo3Y752QRDtZhyTGsEAz0_cEafV0V5uVF6kZmRpQbgetd