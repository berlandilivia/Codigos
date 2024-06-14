#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra do alfabeto: ");
    scanf(" %c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("%c e uma vogal.\n", letra);
    } else if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
        printf("%c e uma consoante.\n", letra);
    } else {
        printf("Voce nao digitou uma letra do alfabeto.\n");
    }

    return 0;
}
