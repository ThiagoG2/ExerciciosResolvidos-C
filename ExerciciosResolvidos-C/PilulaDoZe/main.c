#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora1, minuto1, valor1;

    scanf("%d %d", &hora1, &minuto1);

    if(hora1 <= 12 && hora1 >= 00)
    {
        if(hora1 == 12 && minuto1 > 0)
        {
            valor1 = 0;
        }
        else if( hora1 ==12 && minuto1 == 0)
        {
            valor1 = 1;
        }
        else if(hora1 < 12 && minuto1 >=0 && minuto1 <= 59)
        {
            valor1 = 1;
        }
        else
        {
            valor1 = 0;
        }
    }
    else
    {
        valor1 = 0;
    }

    int hora2, minuto2, valor2, contaMinuto, contaHora = 0;
    scanf("%d %d", &hora2, &minuto2);
    if(minuto1 <= 47)
    {
        contaMinuto = minuto1 + 12;
    }
    else
    {
        contaMinuto = (minuto1 + 12) % 60;
        contaHora = 1;
    }
    if(hora1 + 3 + contaHora == hora2 && contaMinuto == minuto2)
    {
        valor2 = 1;
    }
    else
    {
        valor2 = 0;
    }

    int hora3, minuto3, valor3;
    scanf("%d %d", &hora3, &minuto3);

    if((hora2 + 23) % 24 == hora3 && minuto3 == minuto2 )
    {
        valor3 = 1;
    }
    else
    {
        valor3 = 0;
    }


    if(valor1 == 1 && valor2 == 1 && valor3 == 1)
    {
        printf("v\nv\nv\nsucesso");
    }
    else if(valor1 = 0 && valor2 == 0 && valor3 == 0)
    {
        printf("f\nf\nf\nfalha");
    }
    else if(valor1 = 1 && valor2 == 0 && valor3 == 0)
    {
        printf("v\nf\nf\nfalha");
    }
    else if(valor1 = 1 && valor2 == 1 && valor3 == 0)
    {
        printf("v\nv\nf\nfalha");
    }
    else if(valor1 = 1 && valor2 == 0 && valor3 == 1)
    {
        printf("v\nf\nv\nfalha");
    }
    else
    {
        printf("f\nv\nv\nfalha");
    }

    return 0;
}
/*
Descri��o:
Z� � um rapaz muito esquecido, e ap�s esquecer dos l�pis, crach�, �culos e outras coisas, decidiu procurar um m�dico para
resolver a sua situa��o.
O M�dico receitou uma pilula, que se tomado 3x no horario correto resolveria o problema de Z�, o �nico desafio � que
esse rem�dio deveria ser tomado seguinto horarios expecificos, ent�o sabendo que Z� era monitor de IP e anotaria todos
os horarios das pilulas, o m�dico decidiu pedir aos calouros de IP que fizessem um programa em c para verificar se Z�
tomou as p�lulas nos hor�rios corretos.

O M�dico prescreveu o seguinte:
A primeira p�lula pode ser tomada apenas na primeira metade do dia;
A segunda p�lula deve ser tomada exatamente 3h12m ap�s a primeira;
A terceira p�lula deve ser tomada exatamente 1380m ap�s a segunda;

obs: o hor�rio � dado no sistema de 24h, e cada hora tem 60 minutos

Formato de entrada
Entrada: 6 inteiros representando os hor�rios que Z� tomou as p�lulas;
1  00
4  12
3  12

Formato de sa�da
Sa�da: 'v' para cada hor�rio certo, e 'f' para cada esquecimento, e no final a palavra sucesso, caso ele tomou todos
os rem�dios em tempo, e falha, caso contr�rio.

v
v
v
sucesso

Exemplos de:
Entrada
7 15
9 29
8 29

Sa�da
v
f
v
falha
*/
