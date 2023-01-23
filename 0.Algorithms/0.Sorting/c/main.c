#include <stdio.h>
#include "insert_sort.h"
// printf array
void printf_array(int arr[], int n);
int main() {
  int array[] = {9,2,1,5,6,7,8,1,2};
  int n = 9;
  printf_array(array, n);
  insert_sorting(array, n);
  printf_array(array, n);

  return 0;
}


void printf_array(int arr[], int n) {
  for (size_t i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
