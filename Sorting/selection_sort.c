#include <stdio.h>

int main() {
  int data[10] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8};
  int min_index;
  int temp;
  
  for(int i = 0; i < 10; i++) {
    min_index = i;
    
    for(int j = i+1; j < 10; j++) {
      if(data[min_index] > data[j]) {
        min_index = j;
      }
    }
    
    temp = data[i];
    data[i] = data[min_index];
    data[min_index] = temp;
  }
  
  for(int k = 0; k < 10; k++) {
      printf("%d ", data[k]);
    }
}