#include <stdio.h>
int main() {
  int n;
  scanf("%d" , &n);
  int arr[n];
  int count = 0;
  for(int i = 0 ;i < n ; i++ ) {
    scanf("%d" , &arr[i]);
  }
  for(int j = 0 ; j <n ; j++) {
    int count1 = 0;
    if(arr[j] != 1 && arr[j] != 0 ) {
    for(int k = 2 ; k < arr[j]*arr[j] ; k++) {
    if((arr[j] % k ==0 && arr[j] != k)) {
      count1 = 1;
      break;
    }
  }
} else {count1 = 1;}
  if(count1 == 0) {
    count++;
  }
}
printf("%d" , count);
  return 0;

}