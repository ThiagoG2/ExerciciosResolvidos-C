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
Descrição:
Zé é um rapaz muito esquecido, e após esquecer dos lápis, crachá, óculos e outras coisas, decidiu procurar um médico para
resolver a sua situação.
O Médico receitou uma pilula, que se tomado 3x no horario correto resolveria o problema de Zé, o único desafio é que
esse remédio deveria ser tomado seguinto horarios expecificos, então sabendo que Zé era monitor de IP e anotaria todos
os horarios das pilulas, o médico decidiu pedir aos calouros de IP que fizessem um programa em c para verificar se Zé
tomou as pílulas nos horários corretos.

O Médico prescreveu o seguinte:
A primeira pílula pode ser tomada apenas na primeira metade do dia;
A segunda pílula deve ser tomada exatamente 3h12m após a primeira;
A terceira pílula deve ser tomada exatamente 1380m após a segunda;

obs: o horário é dado no sistema de 24h, e cada hora tem 60 minutos

Formato de entrada
Entrada: 6 inteiros representando os horários que Zé tomou as pílulas;
1  00
4  12
3  12

Formato de saída
Saída: 'v' para cada horário certo, e 'f' para cada esquecimento, e no final a palavra sucesso, caso ele tomou todos
os remédios em tempo, e falha, caso contrário.

v
v
v
sucesso

Exemplos de:
Entrada
7 15
9 29
8 29

Saída
v
f
v
falha
*/
