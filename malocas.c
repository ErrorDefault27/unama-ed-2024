#include <stdio.h>
#include <malloc.h>
int main(){

int* y;
y= (int*) malloc (sizeof(int)); // sizeoff maloc =4
*y = 20;
int z = sizeof(int);
printf("y=%i z =%i\n", *y, z);
return 0;
}