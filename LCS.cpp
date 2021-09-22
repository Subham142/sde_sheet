class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hash;
        for(int i : nums){
            hash.insert(i);
        }
        
        int lcs =0;
        for(int i :nums){
          if(!hash.count(i-1)){
              int cur= i;
              int len=1;
              while(hash.count(cur+1)){
                  cur++;
                  len++;
              }
              lcs =max(lcs,len);
          }  
        }
        return lcs;
    }
};