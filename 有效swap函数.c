void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}
#include <stdio.h>
int main(){
  int a = 10;
  int b = 20;
  swap(&a, &b);
  printf("a = %d, b = %d\n", a, b); 
  return 0;
}