#include <stdio.h>
int main(){

int x= 25;      // armazena o valor de 25 em x
int*y=&x;      //define o y pra puxar do endereço de x
*y=30;       //muda o valor da variavel do endereço(x)
printf("valor atual de x:%i\n", x);      //x è igual a 30
printf(*y);
return 0;

}
