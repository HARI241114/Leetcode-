int findDuplicate(int* arr, int n){
    int dupe;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
              dupe= arr[i];
        }
    }
    return dupe;
}
