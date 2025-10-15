#include <stdio.h>

int main() {
    int marks[5];
    int highest=0;
    int i;
    
    for(i=0; i<5; i++){
    printf("Enter the marks: ");
    scanf("%d" , &marks[i]);
  }
  for(i=0; i<5; i++){
      if(marks[i]>highest){
         highest =  marks[i];
      }
  }
  printf("The highest marks among all is: %d" , highest);
    return 0;
}