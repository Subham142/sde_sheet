// Kadne's algo with max size also
// the idea is to chage the starting index sum<0
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod  1000000007
#define int int64_t
int32_t main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];

int sum=0,start=0,end=0,s=0;
int maxi=INT_MIN;

//for min sub array
int min_ending_here = INT_MAX;
int min_so_far = INT_MAX;
for(int i=0;i<n;i++){
    sum +=arr[i];
    
    if(sum>maxi){
        maxi=sum;
        start=s;
        end = i;
    }
    
    if(sum<0){
        sum=0;
        s=i+1;
    }

      if (min_ending_here > 0)
            min_ending_here = arr[i];
     else
            min_ending_here += arr[i];
         
        
        min_so_far = min(min_so_far, min_ending_here); 
}
cout<<maxi<<" "<<(end-start + 1)<<endl;
cout<<min_so_far<<" "<<endl;

return 0;
}