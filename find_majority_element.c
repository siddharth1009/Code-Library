
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {

        // your code here
        int c=0;
        int elem=0;
        for(int i=0;i<size;i++)
        {
            if(c==0)
            {
                elem=a[i];
            }
            if(a[i]==elem)
            {
                c+=1;
            }
            else c-=1;
        }
        int x=elem;

        int count = 0;
        for (int i = 0; i < size; i++)
            if (a[i] == x)
                count++;

        if (count > size / 2)
        {
            int val= x;
            return val;

        }
        return -1;
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];

        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends
