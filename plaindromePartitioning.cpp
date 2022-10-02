#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> res;
    bool isPalindrome(string &s, int l, int r)
    {
        while (l <= r)
        {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }

    void generateSubstring(string &s, vector<string> &v, int idx)
    {
        if (idx==s.size())
        {
            res.push_back(v);
            return;
        }

        for(int i=idx; i<s.size(); i++)
        {
            if(isPalindrome(s,idx,i))
            {
                v.push_back(s.substr(idx,i-idx+1));
                generateSubstring(s,v,i+1);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s)
    {
        vector<string> v;
        generateSubstring(s,v,0);
        return res;
    }
};
https://lh5.googleusercontent.com/_HggDGd3RQxtGztkBl-RiWG1-30xybzsuKdwkFHD72hYudulc9gpcujvsMYRp0Rh6jTN7J_m-kM2hL7uV6vjMTICcy3MzHQQcu1kHHVlQCu9emq8YfRj5gsNfwDFBuVNqd4Md68u