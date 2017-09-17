#include<stdio.h>
#include<stdlib.h>

void main(){

	int n;
	int m;
	scanf("%d%d",&n,&m);
	
	int sum1=0,sum2=0;
	int temp;
	while(n!=0){
		sum1=sum1+(n%10);
		n=n/10;
	}
	while(m!=0){
		sum2=sum2+(m%10);
		m=m/10;
	}
	
	if(sum1 == sum2){
		printf("similar\n");
	else
		printf("not similar\n");
}
