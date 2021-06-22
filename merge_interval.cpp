class Solution {
public:
    

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> interval;
        if(intervals.size()==0)
            return interval;
         sort(intervals.begin(), intervals.end());
        vector<int> temp= intervals[0];
        
        for(auto it:intervals){
            //if EndTime of Ith Interval is greate than start of i+1th Interval
            //We'll merge the interval The End Time of merged interval Will be  
            //Max of end time of both the ith and i+1th interval
            if(temp[1]>=it[0])
            {
                temp[1]=max(temp[1],it[1]);
                
            }
            //If Merging is not possible we'll put the i+1th interval in ans
            //And we'll update the temp with i+1th interval and repeat the process for next
            else
            {
                interval.push_back(temp);
                temp=it;
            }
        }
        
         interval.push_back(temp);
         return interval;

    }
};