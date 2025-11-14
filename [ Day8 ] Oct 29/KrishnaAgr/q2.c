#include <stdio.h>
void addElement(int n , int index , int arr[] ,int size);
int main() {
  int arr[] = {1,2,3,4,5,6};
  int size = sizeof(arr) / sizeof(arr[0]);
  int n , index;
  scanf("%d %d" , &n , &index);
  addElement(n,index,arr,size);


  return 0;
}
void addElement(int n , int index ,int arr[] ,int size) {
  int newSize = size + 1;
  int newarr[newSize];
  for(int i = 0 ; i < index;i++) {
    newarr[i] = arr[i];
  }
  newarr[index] = n;
  for(int k = index ; k<size ; k++) {
    newarr[k+1] = arr[k];
  }
  
  for(int j = 0;j<newSize;j++) {
    printf("%d" , newarr[j]);
  }
}