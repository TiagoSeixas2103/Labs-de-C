#include <stdio.h>

void multiplo(n1,n2) {
    if (n2==0) {
        printf("Error\n");
    } else if (n2<0 || n2>0 && n1%n2==0) {
        printf("O primeiro é múltiplo do segundo\n");
    } else {
        printf("O primeiro não é múltiplo do segundo\n");
    }
}

int main(int argc, char *argv[]) {
  int numero1;
  int numero2;

  while (numero1 != 0 || numero2!= 0){
    printf("Digite um número: ");
    scanf("%d", &numero1);
    printf("Digite um número: ");
    scanf("%d", &numero2);

    multiplo(numero1, numero2);
  }

  return 0;
}
