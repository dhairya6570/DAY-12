#include<stdio.h>

int main (){
	
	int n , i = 1 ;
	
		printf("Enter a value to find odd number from 1 to your value : ");
		scanf("%d",&n);
	
	while(i<=n){
		printf("%d\n",i);
		i=i+2;
	}
	
	return 0;
}
