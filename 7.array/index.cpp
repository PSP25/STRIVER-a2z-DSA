// Recursive C++ program to find minimum 

#include <bits/stdc++.h> 
using namespace std; 

// function to print Minimum element using recursion 
int findMaxRec(int A[], int n) 
{ 
	// if size = 0 means whole array has been traversed 
	if (n == 1) 
		return A[0]; 
	return max(A[n-1], findMaxRec(A, n-1)); 
} 

// driver code to test above function 
int main() 
{ 
	int A[] = {1, 4, 45, 6, -50, 10, 2}; 
	int n = sizeof(A)/sizeof(A[0]); 
	cout << findMaxRec(A, n); 
	return 0; 
} 
