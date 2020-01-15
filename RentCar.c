#include <stdio.h>

int main()
{
    char categoria;
    int tarifa;
    int seguro;
    int dias;
    float soma;
    int kilometros = 100;
    float seguro2;
    float ilimitadoA;
    float ilimitadoB;
    float ilimitadoC;
    float ilimitadoD;

    //input dos users
    printf("Bem vindo a Rent a car fraga\n");
    printf("Quantos dias quer ficar\n");
    scanf(" %d", &dias);
    printf("Qual categoria quer escolher (DISPONIVEIS: A, B, C, D)\n");
    scanf(" %c", &categoria);
    printf("Qual a tarifa que vai querer?\n");
    printf("1- KMS ilimitados\n");
    printf("2- Diaria + km\n");
    scanf(" %d", &tarifa);
    printf("1- Pretende adicionar seguro?\n");
    printf("2- Nao quer seguro\n");
    scanf(" %d", &seguro);

    //calcula o preço sem o seguro atraves da classe da tarifa
    if (categoria == 'A' && tarifa == 1)
    {
        soma = dias * 27.50;
        ilimitadoA = (dias * 14.00) + (kilometros * 0.17);
        
    }
    else if (categoria == 'A' && tarifa == 2)
    {
        soma = (dias * 14.00) + (kilometros * 0.17);
        ilimitadoA = dias * 27.50;
        
    }
    else if (categoria == 'B' && tarifa == 1)
    {
        soma = dias * 32.50;
        ilimitadoB = (dias * 17.00) + (kilometros * 0.20);
        
    }
    else if (categoria == 'B' && tarifa == 2)
    {
        soma = (dias * 17.00) + (kilometros * 0.20);
        ilimitadoB = dias * 32.50;
        
    }
    else if (categoria == 'C' && tarifa == 1)
    {
        soma = dias * 37.50;
        ilimitadoC = (dias * 20.00) + (kilometros * 0.25);
    }
    else if (categoria == 'C' && tarifa == 2)
    {
        soma = (dias * 20.00) + (kilometros * 0.25);
        ilimitadoC = dias * 37.50;
        
    }
    else if (categoria == 'D' && tarifa == 1)
    {
        soma = dias * 40.00;
        ilimitadoD = (dias * 14.00) + (kilometros * 0.17);
        
    }
    else if (categoria == 'D' && tarifa == 2)
    {
        soma = (dias * 22.00) + (kilometros * 0.30);
        ilimitadoD = dias * 40.00;
        
    }




    // preço do seguro
    if (seguro == 1 && categoria == 'A')
    {
        seguro2 = 6.50;
        seguro2 = dias * seguro2;
        soma = soma + seguro2;
    }
    else if (seguro == 2 && categoria == 'A')
    {
        soma = soma;
    }
    
    else if (seguro == 1 && categoria == 'B')
    {
        seguro2 = 7.50;
        seguro2 = dias * seguro2;
        soma = soma + seguro2;
    }
    else if (seguro == 2 && categoria == 'B')
    {
        soma = soma;
    }
    
    else if (seguro == 1 && categoria == 'C')
    {
        seguro2 = 8.50;
        seguro2 = dias * seguro2;
        soma = soma + seguro2;
    }
    else if (seguro == 2 && categoria == 'C')
    {
        soma = soma;
    }
    
    else if (seguro == 1 && categoria == 'D')
    {
        seguro2 = 10.00;
        seguro2 = dias * seguro2;
        soma = soma + seguro2;
    }
    else if (seguro == 2 && categoria == 'D')
    {
        soma = soma;
    }
    



    



    //print tarifa
    if (tarifa == 1)
    {
        printf("O total a pagar sera %f", soma);
        
    }
    else if (tarifa == 2)
    {
        printf("O preço com uma estimativa de 100 km percorridos custara %f", soma);
    }
    

    
    
}