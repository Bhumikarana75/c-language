// WAP to find the largest element from a given 2D array.

#include<stdio.h>

main(){
	int a,b;
	
	printf("Enter the size of 2D array's Rows: ");
	scanf("%d",&a);
	printf("ENter the size of 2D array's Columns: ");
	scanf("%d",&b);
	
	int arr[a][b];
	int i, j;
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("Arr[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\n\nThe Elements are: \n");
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(arr[0][0]<arr[i][j]){
				arr[0][0]=arr[i][j];
			}
		}
	}
	printf("The Largest Elements is :- %d",arr[0][0]);
}
