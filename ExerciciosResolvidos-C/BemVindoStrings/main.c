#include <stdio.h>
#include <stdlib.h>

/*
Descri��o:
Voc� est� organizando um evento e deseja que os seus convidados se sintam importantes. Sendo assim,
quando cada convidado chega ao local voc� pergunta o nome dele e digita no computador. Ent�o o nome
dele � exibido em um painel luminoso na entrada do sal�o. A mensagem que aparece �:
"Seja muito bem-vindo Fulano de Tal, onde Fulano de Tal � o nome da pessoa que chegou.

Formato de entrada
O nome da pessoa, que pode conter at� 120 caracteres

Formato de sa�da
O programa deve imprimir a mensagem "Seja muito bem-vindo Fulano de Tal", seguido de um final de linha.
*/

int main()
{
    char nome[120];
    gets(nome);

    printf("Seja muito bem-vindo %s", nome);

    return 0;
}
