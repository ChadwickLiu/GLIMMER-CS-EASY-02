#include <stdio.h>
int main(){



int x = 10;
int* p = &x;
*p = 20;

int arr[3] = {3, 6, 9};
int *q = arr;
int y = ++*arr  +  *++q;

printf("%d %d", x, y);
return 0;
}