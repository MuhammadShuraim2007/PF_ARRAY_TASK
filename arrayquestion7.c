#include<stdio.h>
int main(){
	int sectionA[5] = {1,2,3,4,5};
	int sectionB[5] = {6,7,8,9,10};
	int i , j;
	int combine[10];
	
	for(i=0;i<5;i++){
		combine[i] = sectionA[i];
	}
	for(j=0;j<5;j++){
		combine[i+j] = sectionB[j];
	}
	
	printf("Combined array \n");
	for(i=0;i<10;i++){
		printf("%d  " , combine[i]);
	}
	
	return 0;
}