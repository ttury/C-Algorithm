#include <stdio.h>

int main() {
  int data[15] = {7, 5, 9, 0, 3, 1, 6, 2, 9, 1, 4, 8, 0, 5, 2};
  int count[10] = {0};
  
  for(int i = 0; i < 15; i++) {
    count[data[i]]++;
  }
  
  for(int j = 0; j < 10; j++) {
    for(int k = 0; k < count[j]; k++) {
      printf("%d ", j);
    }
  }
}