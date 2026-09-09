#include <stdio.h>

int soma(int valor1, int valor2) { 
    printf("Endereço da variável da função: %d\n\n", &valor1); // saída: Endereço da variável da função: 6422272 
    valor1 = 10; // altera o valor da variável apenas DENRTO DA FUNÇÃO
    printf("Valor da primeira variável na função: %d\n", valor1); // saída: Valor da primeira variável na função: 10
    printf("Valor da segunda variável na função: %d\n\n", valor2); // saída: Valor da segunda variável na função: 3
    return valor1 + valor2; 
} 
int main(void) { 
    int valor1 = 5, valor2 = 3;  
    int resultado = soma(valor1, valor2); // passagem de parâmetros por VALOR
    printf("Endereço da variável da main: %d\n\n", &valor1); // saída: Endereço da variável da main: 6422292
    printf("Valor da primeira variável na main: %d\n", valor1); // saída: Valor da primeira variável na main: 5
    printf("Valor da segunda variável na main: %d\n", valor2); // saída: Valor da segunda variável na main: 3
    printf("Resultado da soma: %d + %d = %d", valor1, valor2, resultado); // saída: Resultado da soma: 5 + 3 = 13
}
