/*
Um vendedor de autom�veis armazena os seguintes dados de um ve�culo:
fabricante, modelo, ano, placa, cor, tipo de combust�vel (A � �lcool e G �
gasolina), pre�o e valor do IPVA. Escreva a declara��o de um registro para estes
dados.
*/

#include <stdio.h>

struct veiculo
{
    char fabricante[30];
    char modelo[30];
    int ano;
    char placa[9];
    char cor[20];
    char tipoCombustvel;
    float preco;
    float valorIpva;
}

int main()
{
    struct veiculo corsa;
    corsa.fabricante = "Chevrolet";
    corsa.modelo = "corsa sport";
    corsa.ano = 2012;
    corsa.placa = "DJA3T94a";
    corsa.cor = "Azul";
    corsa.tipoCombustvel = "a";
    corsa.preco = 12000.15;
    corsa.valorIpva = 250.50;
    
    return 0;
}
