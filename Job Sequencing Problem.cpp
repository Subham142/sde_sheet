static bool comp(Job a, Job b){
        return (a.profit> b.profit);
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,comp);
        int max1 = arr[0].dead;
        for(int i=1;i<n;i++)
            max1= max(max1,arr[i].dead);
            
        int slot[max1 +1];
        for(int i=0;i<=max1;i++)
            slot[i]=-1;
        
        int cnt=0,profit=0;
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead;j>0;j--){
                if(slot[j]==-1){
                    slot[j]=i;
                    cnt++;
                    profit +=arr[i].profit;
                    break;
                }
            }
        }
        vector<int> ans;
        ans.push_back(cnt);
        ans.push_back(profit);
        return ans;
        
    } 