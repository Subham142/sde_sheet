class Solution
{
public:
 
    void fun(int index,int sum,vector<int> arr, int N,vector<int> &ans){
        if(index==N){
            ans.push_back(sum);
            return;
        }
        //include
        fun(index+1,sum+arr[index],arr,N,ans);
        
        //exclude
        fun(index+1,sum,arr,N,ans);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        fun(0,0,arr,N,ans);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};