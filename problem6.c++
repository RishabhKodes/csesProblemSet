#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int isSubsetSum(int set[], int n, int sum) 
{ 
	int subset[n + 1][sum + 1]; 

	for (int i = 0; i <= n; i++) 
		subset[i][0] = 1; 

	for (int i = 1; i <= sum; i++) 
		subset[0][i] = 0; 

	for (int i = 1; i <= n; i++) { 
	    
		for (int j = 1; j <= sum; j++) {
			if (j >= set[i - 1]){
				subset[i][j] = subset[i-1][j] + subset[i][j - set[i - 1]]; 
		}else{
		        subset[i][j] = subset[i-1][j];
		}
		    
		    
		} 
	} 

	return subset[n][sum]; 
} 

// Driver program to test above function 
int main() 
{ 
    int a,b, temp;
    cin>>a>>b;

	int set[a];

    for(int i=0;i<a;i++){
        cin>>temp;
        set[i] = temp;
    }
	int n = sizeof(set)/sizeof(set[0]);


	// int sum;
	// cin>>sum;
	
	// int set[] = { 1, 2, 3, 4, 5, 6 };  
	// int n = sizeof(set) / sizeof(set[0]);
 
	cout<<isSubsetSum(set, n, b);
} 
