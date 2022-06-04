#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int quadrado, num;
    float raiz;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if(num % 2 == 0)
    {
        raiz = sqrt(num);
        printf("O número e par: ");
        printf("\n A raiz quadrada é: %.3f", raiz);
        }
        else
        {
            quadrado = num * num;
            printf("O número é impar: ");
            printf("\n O número ao quadrado é: %d", quadrado);
        }
        
    return 0;
}
