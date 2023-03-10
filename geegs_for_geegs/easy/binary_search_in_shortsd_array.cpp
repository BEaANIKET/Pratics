
#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int mid,low=0,high=n;
        while(low<=high){
mid=(low+high)/2;
if(k==arr[mid]){
    return mid;
}
else if (k<arr[mid]){
    high=mid-1;
}
else if (k>arr[mid]){
    low=mid+1;
}

        }
    return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends