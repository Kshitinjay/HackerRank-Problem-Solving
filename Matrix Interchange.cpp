// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

int arr[1000][1000];

void interchange(int ,int );

 // } Driver Code Ends


//User function Template for C++

//Back-end complete function Template for C++
//Complete this function
//The array arr is globally declared
void interchange(int r,int c)
{
    //Your code here
  int temp=0;
  //Printing the modified matrix
    for(int i=0;i<r;i++)
	   { 
	       for(int j=0;j<1;j++)
    	    {
    	        temp = arr[i][0];
    	        arr[i][0]=arr[i][c-1];
    	        arr[i][c-1]= temp;
    	        
    	    }
	   }
	   for(int i=0;i<r;i++)
	   { 
	       for(int j=0;j<c;j++)
    	    {
    	       cout<<arr[i][j]<<" ";
    	        
    	    }
    	 cout<<endl;
	   }
}


// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int r,c;
	    cin>>r>>c;
	    for(int i=0;i<r;i++)
	    for(int j=0;j<c;j++)
	    cin>>arr[i][j];
	    
	    
	    interchange( r, c);
	}
	return 0;
}

  // } Driver Code Ends