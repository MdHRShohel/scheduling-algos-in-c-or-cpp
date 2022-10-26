// Java implementation of recursive
// Binary Search
 
class BinarySearch {
 
    // Function that returns index of
    // x if it is present in arr[l, r]
    int binarySearch(int arr[], int l,
                     int r, int x)
    {
        if (r >= l) {
            int mid = l + (r - l) / 2;
 
            // If the element is present
            // at the middle itself
            if (arr[mid] == x)
                return mid;
 
            // If element is smaller than
            // mid, then it can only be
            // present in left subarray
            if (arr[mid] > x)
                return binarySearch(arr, l,
                                    mid - 1, x);
 
            // Else the element can only be
            // present in right subarray
            return binarySearch(arr, mid + 1,
                                r, x);
        }
 
        // Reach here when element is
        // not present in array
        return -1;
    }
 
    // Driver Code
    public static void main(String args[])
    {
 
        // Create object of this class
        BinarySearch ob = new BinarySearch();
 
        // Given array arr[]
        int arr[] = { 2, 3, 4, 10, 40 };
        int n = arr.length;
        int x = 10;
 
        // Function Call
        int result = ob.binarySearch(arr, 0,
                                     n - 1, x);
 
        if (result == -1)
            System.out.println("Element "
                               + "not present");
        else
            System.out.println("Element found"
                               + " at index "
                               + result);
    }
}
