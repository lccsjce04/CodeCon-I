#include <stdio.h>

int main() {

    int n, max, count;
    int arr[1001];

    scanf("%d", &max);

    for(int i=1; i<=max; i++)
        arr[i] = 1;

    n = 2;
    count = 0;

    while(n <= max)
    {
       for(int j=1; j<=max; j++)
       {
           if(arr[j] == 1)
                count++;
           if(count == n)
           {
               count = 0;
               arr[j] = 0;
           }
       }
       count = 0;
       n++;
    }
    if(arr[max] == 1)
        printf("survives\n");
    else 
        printf("dies\n");


    for(int i=1; i<=max; i++)
        if(arr[i] == 1)
            printf("%d ", i);

    return 0;
}