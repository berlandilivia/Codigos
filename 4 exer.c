#include <stdio.h>

int main(){
int idade;

printf("Digite sua idade: ");
scanf("%i", &idade);

if (idade>=18){
printf("Voce podera entrar no bar!");
}
else{
printf("Voce e menor de idade e nao podera entrar no bar!");
}
return 0;
}

