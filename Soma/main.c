/**
 * @file 4 operações matemáticas
 * @author 21138_Rosário Silva
 * @brief 
 * @version 0.1
 * @date 2020-11-03
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h> 
    
int main()
{
    int num1, num2, soma, subtracao, produto;
    scanf("%d", &num1);
    scanf("%d", &num2);

    soma = num1 + num2;
    printf("Somar num1 com num2: %d\n", soma);
    

    subtracao = num1 - num2;
    printf("Subtrair num1 com num2: %d\n", subtracao);
    

    produto = num1 * num2;
    printf("Multiplicar num1 com num2:%d\n", produto);
    

    
    printf("Dividir num1 com num2: %.2f\n",(float)num1 / num2);
    

    getchar();
    getchar();
    return 0;
}