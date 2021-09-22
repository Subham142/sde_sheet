class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mp(256,-1);
        int len=0,right=0,left=0;
        int n=s.size();
        while(right<n){
            if(mp[s[right]]!= -1){
                left=max(mp[s[right]]+1,left);//chage it in the map but don'tchange left until its valid
            }
            mp[s[right]]=right;
            
            len=max(len,right-left+1);
            right++;
        }
        return len;
    }
};