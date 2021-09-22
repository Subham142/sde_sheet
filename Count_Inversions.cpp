// recheck the code varosa nhi ho reha ispr

int merge(int arr[], int temp[], int start, int end, int mid){
    int i,j,k,cnt_inv=0;
    i=start;
    j= mid;
    k=0;

    while((i<=mid-1) && (j<=end)){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }else{
            temp[k++]=arr[j++];

            //count the inversion
            cnt_inv += (mid-i);
        }
    }

    while(i<=mid-1)
        temp[k++] =arr[i++];

    while(j<=end)
        temp[k++]= arr[j++]

    for(int x=start;x<=right;x++)
        arr[x] = temp[x];

    return cnt_inv;
}

int mergesort(int arr[],int temp[], int start, int end){
    int cnt_inv;
    if(end>start){
        int mid =(start+end)/2;
        cnt_inv += mergesort(arr,temp,start,mid);
        cnt_inv += mergesort(arr,temp,mid+1,end);

        cnt_inv += merge(arr, temp, start,end ,mid+1);

    }
    return cnt_inv;
}