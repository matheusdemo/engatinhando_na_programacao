/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota1=0, nota2=2, media=0;
    int resposta;
    
    do{
        printf("Digite a primeira nota:");
        scanf("%f", &nota1);
        printf("Digite a segunda nota:");
        scanf("%f", &nota2);
        
        media = (nota1+nota2)/2;
        printf("A médida da aluno é  %.2f pontos\n", media);
        
        if(media>=6 && media<=10)
        {
            printf("aluno aprovado\n");
        }    
        else if(media>=0 && media<6)
        {
            printf("aluno reprovado\n");
        }
        else 
        {
            printf("Dados fornecidos incorreto.\n");
        }
        printf("Digite 1 para calcular outra medida ou 2 para saior do programa\n");
        scanf("%d", &resposta);
    }while(resposta==1);    
    return 0;
}
