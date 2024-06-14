#include <stdio.h>

int main(){
int idade,rendaMensal;

printf("Digite sua idade: ");
scanf("%i", &idade);

printf("Digite sua renda mensal: ");
scanf("%i", &rendaMensal);

if (idade>=21 && rendaMensal >= 1500){
printf("Voce podera solicitar o emprestimo!");
}
else{
printf("Voce nao podera solicitar emprestimo!");
}
return 0;
}
