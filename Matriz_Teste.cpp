

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>




int main()
{
    setlocale(LC_ALL,"");
    //Criação das variáveis de linha(i) e colunas(j)
    int i = 0;
    int j = 0;
    //Criação da variável de tamanho da matriz
    int t;
    //Criação da variável de validação do valor de cada elemento
    char validacao[30];
    char pausa[5];
    char tamanho[30];
    int c, k = 0;
    int l = 0;
    int valido = 0;
    int valida_tam = 0;
    //Mostra Cabeçalho
    printf("*****************************************\n* Fatec: Santana de Parnaíba            *\n* Curso: Ciência de Dados               *\n* Disciplina: Algebra Linear            *\n* Aluno: Rodrigo Brito Rodrigues        *\n* Professor(a): Janaína Stella de Souza *\n*****************************************\n");
    //Mostra mensagem de solicitação do tamanho da matriz
    while(1)
    {
        printf("\nInforme o tamanho da matriz = ");
        //Recebe o valor do teclado e atribui a variável tamanho
        scanf("%s", tamanho);
        valida_tam = strlen(tamanho);
        //Laço de validação dos dados de entrada, só é permitido valores inteiros positivos diferentes de 0
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
    //Criação de matriz(m) com base no tamanho(t) válido
    t = atoi(tamanho);
    int m[t][t];
    //Laço de repetição para inserção dos elementos (0)zeros na matriz

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
    /*Inicializa as variáveis de linha(i) e colunas(j) para inserção de novos dados
    apenas na matriz triangular superior */

    i = 0;
    j = 0;
    //Laço de repetição para inserção dos elementos do teclado na matriz
    while(i < t)
    {
        printf("Informe o elemento %d x %d = ",i+1 ,j+1);
        scanf("%s", validacao);
        c = strlen(validacao);
        valido = 0;
        k = 0;

        //Validação dos dados de entrada, onde eu verifico se é negativo ou não o valor
        if(validacao[0]=='-' && c>1)
        {
            valido++;
            k++;
        }
        //Laço para validação dos demais dados de entrada, onde eu verifico se são inteiros ou não.
        while(validacao[k] != '\0')
        {

            if(validacao[k]< '0' || validacao[k]> '9')
            {
                valido--;
            }
            k++;
         }

        //Se o digitado for válido eu converto em inteiro e insiro na matriz triangular superior.
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
    /*Inicializo as váriaveis de linhas(i) e colunas(j) para o laço de repetiçao
    responsável por mostrar a matriz*/
    i = 0;
    j = 0;

    printf("\nA matriz triangular superior ficará dessa forma:\n");
    // Laço de repeticão para mostrar a matriz

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
    //Mostro essa mensagem, apenas para parar o programa e permitir a visualiação da matriz.
    printf("\n\nDigite 1 para sair: ");
    scanf("%s", pausa);

    return 0;
}

