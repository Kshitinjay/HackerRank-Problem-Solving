// { Driver Code Starts
//Initial Template for C++
#include <iostream>
using namespace std;

// Function prototype
void swapElements(int[], int);


 // } Driver Code Ends


//User function Template for C++

/*Function to swap array elements
* arr : array input
* sizeof_array : number of elements in array
*/
void swapElements(int arr[], int sizeof_array){
    long temp;
    for(int i=0;i<(sizeof_array)-2;i++){
        // element = arr[i+2];
        // arr[i]=element;
        temp = arr[i];
        arr[i]=arr[i+2];
        arr[i+2]=temp;
    }
}

// { Driver Code Starts.

// Driver code to test swapElements
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int sizeof_array;
	    cin >> sizeof_array;
	    
	    int arr[sizeof_array];
	    
	    for(int i = 0;i<sizeof_array;i++){
	        cin >> arr[i];
	    }
        
        // calling function to swap the array swap elements
	    swapElements(arr, sizeof_array);
	    
	    // Printing the modified array
	    for(int i = 0;i<sizeof_array;i++){
            cout << arr[i] << " ";
        }
	    
	    cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends