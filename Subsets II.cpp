class Solution {
public:
    void rec(int ind, vector<int> &num, vector<int> &s, vector<vector<int>> &ans){
        ans.push_back(s);
        for(int i=ind;i<num.size();i++){
            if(i!= ind && num[i] ==num[i-1]) continue;
            s.push_back(num[i]);
            rec(i+1,num,s,ans);
            s.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> s;
        sort( nums.begin(), nums.end());
        rec(0,nums,s,ans);
        return ans;
    }
};