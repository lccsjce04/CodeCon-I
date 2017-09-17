/*SITTING ARRANGEMENT :
	representation:
	1 -> girl
	0 -> boy */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int n,i,j=0,prev=0,girls=0,f=0;
	int *a;
	scanf("%d",&n);  //number of students
	a = (int *)malloc(sizeof(int)*n);
        for(i=0; i<n; i++)
        {
            scanf("%d",(a+i));	//scanning each value(0 or 1)
            if(*(a+i))
			{
                if(f)		
                prev = (i-girls) > (prev+1) ? (i-girls) : (prev+1);
                girls++;
            } else f=1;
        }
	printf("%d",prev);
	return 0;
}
