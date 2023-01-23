#include <stdio.h>

void insert_sorting(int arr[], int n){
  int key, i;
  for (size_t j = 1;j< n; j++ ){
    key = arr[j];
    i = j-1;
    while ((i>=0) && (arr[i]>=key)) {
      arr[i+1] = arr[i];
      i = i - 1;
    }
    arr[i+1] = key;
  }
}
