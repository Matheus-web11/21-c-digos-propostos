#include <stdio.h>

int main(){
 int x, y, x1, x2, soma1, soma2, dividir;
 //faça um codigo onde receba dois numeros inteiros e somar estes dois numeros, 
 //apos isso escrever mais dois numeros e somar eles e dividir o primeiro resultado pelo o segundo

printf("digite seu primeiro valor: \n", x);
scanf("%d", &x);

printf("digite seu segundo valor: \n", y);
scanf("%d", &y);

soma1=x+y;

printf("a soma1 deu:%d\n", soma1);

printf("digite seu terceiro valor: \n", x1);
scanf("%d", &x1);

printf("digite seu quarto valor: \n", x2);
scanf("%d", &x2);

soma2=x1+x2;

printf("a soma2 deu:%d\n", soma2);

dividir=soma1/soma2;

printf("a divisão das duas somas dá:%d", dividir);


return 0;

}
