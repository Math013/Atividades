

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>




int main()
{
    setlocale(LC_ALL,"");
    //Cria��o das vari�veis de linha(i) e colunas(j)
    int i = 0;
    int j = 0;
    //Cria��o da vari�vel de tamanho da matriz
    int t;
    //Cria��o da vari�vel de valida��o do valor de cada elemento
    char validacao[30];
    char pausa[5];
    char tamanho[30];
    int c, k = 0;
    int l = 0;
    int valido = 0;
    int valida_tam = 0;
    //Mostra Cabe�alho
    printf("*****************************************\n* Fatec: Santana de Parna�ba            *\n* Curso: Ci�ncia de Dados               *\n* Disciplina: Algebra Linear            *\n* Aluno: Rodrigo Brito Rodrigues        *\n* Professor(a): Jana�na Stella de Souza *\n*****************************************\n");
    //Mostra mensagem de solicita��o do tamanho da matriz
    while(1)
    {
        printf("\nInforme o tamanho da matriz = ");
        //Recebe o valor do teclado e atribui a vari�vel tamanho
        scanf("%s", tamanho);
        valida_tam = strlen(tamanho);
        //La�o de valida��o dos dados de entrada, s� � permitido valores inteiros positivos diferentes de 0
        while(tamanho[l] != '\0')
        {
            if(tamanho[l] <'1' || tamanho[l] > '9')
            {

                break;
            }
            l++;
        }

        if(l == valida_tam)
        {
            break;
        }
    }

    //Imprime um salto de linha
    printf("\n");
    //Cria��o de matriz(m) com base no tamanho(t) v�lido
    t = atoi(tamanho);
    int m[t][t];
    //La�o de repeti��o para inser��o dos elementos (0)zeros na matriz

    while(i < t)
    {
        m[i][j]= 0;
        j++;
        if (j==t)
        { 
            j=0;
            i++;
        }
    }
    /*Inicializa as vari�veis de linha(i) e colunas(j) para inser��o de novos dados
    apenas na matriz triangular superior */

    i = 0;
    j = 0;
    //La�o de repeti��o para inser��o dos elementos do teclado na matriz
    while(i < t)
    {
        printf("Informe o elemento %d x %d = ",i+1 ,j+1);
        scanf("%s", validacao);
        c = strlen(validacao);
        valido = 0;
        k = 0;

        //Valida��o dos dados de entrada, onde eu verifico se � negativo ou n�o o valor
        if(validacao[0]=='-' && c>1)
        {
            valido++;
            k++;
        }
        //La�o para valida��o dos demais dados de entrada, onde eu verifico se s�o inteiros ou n�o.
        while(validacao[k] != '\0')
        {

            if(validacao[k]< '0' || validacao[k]> '9')
            {
                valido--;
            }
            k++;
         }

        //Se o digitado for v�lido eu converto em inteiro e insiro na matriz triangular superior.
        if( valido >= 0 && valido <= 1 )
        {
            m[i][j]= atoi(validacao);
            j++;
            if (j==t)
            {
               i++;
               j=i;
            }
            //valido = 0;
        }
        else
        {
            continue;
        }

    }
    /*Inicializo as v�riaveis de linhas(i) e colunas(j) para o la�o de repeti�ao
    respons�vel por mostrar a matriz*/
    i = 0;
    j = 0;

    printf("\nA matriz triangular superior ficar� dessa forma:\n");
    // La�o de repetic�o para mostrar a matriz

    while(i < t)
    {
        if(j==0)
        {
            printf("\n|");
        }
        //Usamos o %5d para alinhar e centralizar os dados da matriz
        printf("%5d", m[i][j]);
        j++;
        if (j==t)
        {
            printf("   |");
            j=0;
            i++;
        }

    }
    //Mostro essa mensagem, apenas para parar o programa e permitir a visualia��o da matriz.
    printf("\n\nDigite 1 para sair: ");
    scanf("%s", pausa);

    return 0;
}

