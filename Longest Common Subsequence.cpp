/* Dynamic Programming implementation of LCS problem */
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
void lcs(int X[], int Y[], int m, int n)
{
	int L[m + 1][n + 1];

	/* Following steps build L[m+1][n+1] in bottom up
	fashion. Note that L[i][j] contains length of LCS of
	X[0..i-1] and Y[0..j-1] */
	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			if (i == 0 || j == 0)
				L[i][j] = 0;
			else if (X[i - 1] == Y[j - 1])
				L[i][j] = L[i - 1][j - 1] + 1;
			else
				L[i][j] = max(L[i - 1][j], L[i][j - 1]);
		}
	}

	// Following code is used to print LCS
	int index = L[m][n];

	// Create a character array to store the lcs string
	int lcs[index + 1];
//	lcs[index] = '\0'; // Set the terminating character

	// Start from the right-most-bottom-most corner and
	// one by one store characters in lcs[]
	int i = m, j = n;
	while (i > 0 && j > 0) {
		// If current character in X[] and Y are same, then
		// current character is part of LCS
		if (X[i - 1] == Y[j - 1]) {
			lcs[index - 1]
				= X[i - 1]; // Put current character in result
			cout<<lcs[index-1]<<" , ";
			i--;
			j--;
			index--; // reduce values of i, j and index
		}

		// If not same, then find the larger of two and
		// go in the direction of larger value
		else if (L[i - 1][j] > L[i][j - 1])
			i--;
		else
			j--;
	}

	// Print the lcs
	cout<<endl;
}

/* Driver program to test above function */
int main()
{
	int X[] = {0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15};
	int Y[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int m = 16;
	int n = m;
	lcs(X, Y, m, n);
	return 0;
}
