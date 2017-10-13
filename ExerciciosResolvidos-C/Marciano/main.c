#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L, A, P, R;

    scanf("%d %d %d %d", &L, &A, &P, &R);

    if(R >= L )
    {
        printf("S");
    }
    else
    {
        printf("N");
    }

    return 0;
}
/*
Descri��o:
Estamos no ano 2048 e um dos sonhos da humanidade torna-se finalmente realidade: a coloniza��o do planeta Marte.
Nossos primeiros colonizadores acabam de chegar, e j� come�am a fazer as prepara��es (como a instala��o de c�pulas
de oxig�nio e tratamento do solo para agricultura) para que mais pessoas possam tentar uma nova vida no planeta vizinho.
Apesar dos avan�os tecnol�gicos e desafios vencidos, ainda resta um grande problema: os foguetes usados para ir a Marte
ainda s�o complicados e caros. Com isso, fica dif�cil enviar suprimentos para os nossos colonos (enquanto a agricultura
ainda n�o � poss�vel) por muito tempo. Assim, a ag�ncia espacial contratou o SBC (Servi�o Bal�stico C�smico), que
desenvolveu um canh�o super-potente que consegue disparar esferas at� Marte, sem precisar gastar milh�es de d�lares
em equipamento e combust�vel.
Agora, tudo o que � necess�rio fazer para enviar suprimentos a Marte � colocar uma caixa com as encomendas dentro de
uma esfera e disparar a mesma at� seu destino.
Dadas as dimens�es de uma caixa com suprimentos e o raio interno da esfera que � disparada pelo canh�o, seu programa
dever� dizer se � poss�vel enviar tal caixa para Marte usando tal esfera.

Formato de entrada
Cada entrada cont�m apenas uma linha com quatro inteiros L, A, P e R, (0 <= L, A, P, R <= 1000) que representam,
respectivamente, a largura, altura e profundidade da caixa, e o raio da esfera.

Formato de sa�da
Seu programa deve imprimir um �nico caractere: 'S' (sem aspas) se � poss�vel colocar a caixa dentro da esfera, ou 'N'
(sem aspas) caso contr�rio.

Exemplos de:
Entrada
10 20 30 30

Sa�da
S
*/
