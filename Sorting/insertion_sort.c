#include <stdio.h>

int main() {
  int data[10] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8};
  int temp;
  
  for(int i = 1; i < 10; i++) {
    for(int j = i; j > 0; j--) {
      if(data[j] < data[j-1]) {
        temp = data[j];
        data[j] = data[j-1];
        data[j-1] = temp;
      }
      else{
        break;
      }
    }
  }
  
  for(int k = 0; k < 10; k++) {
    printf("%d ", data[k]);
  }
}