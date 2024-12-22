#include <stdio.h>
/*
    Buffer overFlow em C

    Buffers em C são cruciais para otimizar o fluxo de dados entre diferentes componentes, contribui para o desempenho geral do sistema, e são essenciais para gerenciar comunicação assincrona, balanceamento de carga, manipulação de erro, e utilização de recursos. mas desde então fornece gerenciamento geral de alocação de memória para usuários, isso também representa riscos potenciais como buffer overflow.

    em C Buffer overflow ocorre quando os dados excedem o tamanho alocado pelo buffer, levando a sobrescrever a memória adjacente que pode resultar em sérios problemas de segurança. nosso sistema pode ser solicitado para ações maliciosas, pois o invasor pode explorar essa fraqueza para injetar códigos maliciosos or manipular o comportamento dos nossos programas.

    C é mais propenso a exploração de buffer, pois é flexível em termos de gerenciamento de memória que é operado diretamente pelo usuário e não tem checagem de exceder o limite na maioria das funções como scanf(), gets(), etc.
*/
int main (void) 
{
    // exemplo de overflow de buffer in C

    char str1[10];
    char str2[25] = "Something meaningful";

    printf("Enter the str1:");
    scanf("%[^\n]s", str1);

    //exibindo as strings

    printf("str1 : %s \n str2 : %s \n", str1, str2);

    // nós podemos que ver que o dados depois de 10 caracteres foram armazenados dentro da memória adjacente para a str1 que nesse caso é str2. então os dados previamente armazenados dentro str2 foram sobrescritos.
    
    return 0;
}