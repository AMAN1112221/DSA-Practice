class Solution {
    public void rotate(int[] arr, int k) {
        int n=arr.length;
         k=k%n;
        n=n-1;
        int i=0;
        int j=n-k;
        while(i<j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
        i=n-k+1;
        j=n;
        while(i<j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
        i=0;
        j=n;
        while(i<j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }




        
    }
}