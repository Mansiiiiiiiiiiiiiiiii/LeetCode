class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        for(int i=1; i<n; i++){
            for(int j=0; j<n-1; j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }
};