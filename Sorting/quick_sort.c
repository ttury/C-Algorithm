#include <stdio.h>

void quick_sort(int *data, int start, int end) {
  if(start >= end) {
    return;
  }
  int pivot = start;
  int left = start + 1;
  int right = end;
  int temp;
  
  while(left <= right) {
    while(left <= end && data[left] <= data[pivot]) {
      left++;
    }
    while(right > start && data[right] >= data[pivot]) {
      right--;
    }
    if(left > right) {
      temp = data[right];
      data[right] = data[pivot];
      data[pivot] = temp;
    }
    else {
      temp = data[right];
      data[right] = data[left];
      data[left] = temp;
    }
  }
  
  quick_sort(data, start, right-1);
  quick_sort(data, right+1, end);
}

int main() {
  int data[10] = {5, 7, 9, 0, 3, 1, 6, 2, 4, 8};
  quick_sort(data, 0, 9);
  
  for(int i = 0; i < 10; i++) {
    printf("%d ", data[i]);
  }
}