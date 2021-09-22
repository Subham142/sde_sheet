int solve(int arr[],int m){
    unordered_map<int,int> mp;
    int count=0, xorr=0;
    for(auto it: arr){
        xorr ^= it;
        if(xorr==m)
            count++;
        
        if(mp.find(xorr^m)!= mp.end()){
            count+= mp[xorr^m];
        }

        mp[xorr]++;
    }
    return count;
}