#include<stdio.h>
 
// Function for finding maximum pieces
// with n cuts.
int findMaximumPieces(int n)
{
   return 1 + n*(n+1)/2;    
}
 
// Driver code
int main()
{
	int n;
	scanf("%d",&n);
   printf("%d\n",findMaximumPieces(n));
   return 0;
}