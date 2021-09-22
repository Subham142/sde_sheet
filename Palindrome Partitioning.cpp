class Solution {
public:
    bool isPal(string s,int start,int e){
        while(start<=e){
            if(s[start++] != s[e--]){
                return false;
            }
        }
        return true;
    }
    
    void func(int ind, string s, vector<string>& res, vector<vector<string>>& ans){
        if(ind==s.size())
        {
            ans.push_back(res);
            return;
        }
        for(int i=ind;i<s.size();i++){
            if(isPal(s,ind,i)){
                res.push_back(s.substr(ind,i-ind+1));
                func(i+1,s,res,ans);
                res.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> res;
        func(0,s,res,ans);
        return ans;
    }
};