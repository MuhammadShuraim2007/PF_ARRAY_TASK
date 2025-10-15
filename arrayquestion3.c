// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int id[5]={1,2,3,4,5};
    int even[5];
    int odd[5];
    int evencount = 0;
    int oddCount = 0;
    int i;
    
   printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &id[i]);
    }
  for(i=0; i<5; i++){
      if(id[i]%2==0){
          even[evencount] = id[i];
          evencount++;
      } else {
          odd[oddCount] = id[i];
          oddCount++;
      }
  }
  for(i=0; i<evencount; i++){
      printf("even IDs: %d\n" , even[i]);
  }
  
  for(i=0; i<oddCount; i++){
      printf("odd IDs: %d\n" , odd[i]);
  }
}