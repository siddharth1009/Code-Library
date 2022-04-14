
class Solution{


	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    sort(arr,arr+n);
	    long long count=0;
	    for(long long i=0;i<n-2;i++)
	    {
	        long long l=i+1;
	        long long r=n-1;
	        while(l<r)
	        {
	            if(arr[i]+arr[l]+arr[r] < sum) {count+=(r-l);
	            l++;
	            }
	            else r--;
	        }
	    }
	    return count;
	}


};

// { Driver Code Starts.

int main()
{


   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }




        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;


	    cout << "\n";

    }
    return 0;
}

  // } Driver Code Ends
