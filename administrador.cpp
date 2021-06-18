#include "administrador.hpp"



void Administrador::pessoa()
{
    cout << "###########################################\n";
    cout << "mostra o que foi cadastrado para este item\n";
    cout << "###########################################\n";
    cout << "###########################################\n";
    cout << "Dados pessoais cadastrados pelo Administrador\n";
    cout << "\n";
    cout << "Nome do Administrador\n";
    cout << nome;
    cout << "\n";
    cout << "Endereço do Administrador\n";
    cout << endereco;
    cout << "\n";
    cout << "Telefone do Administrador\n";
    cout << telefone;
    cout << "\n";
    cout << "email cadastrado\n";
    cout << email;
    cout << "\n";
    cout << "CPF cadastrado\n";
    cout << cpf;
    cout << "\n";
    cout << "cargo cadastrado\n";
    cout << cargo;
    cout << "\n";
    cout << "setor de trabalho cadastrado\n";
    cout << codigosetor;
    cout << "\n";
    cout << "salariobase\n";
    cout << salariobase;
    cout << "\n";
    cout << "Diárias\n";
    cout << diaria;
    cout << "\n";
    cout << "Salário final\n";
    cout << ((diaria*ajudadecusto)+salariobase);
    cout << "\n";
    cout << "###########################################\n";
}

void Administrador::setDiaria(float D)
{
    cout << "quantidade de diárias a serem pagas para o Administrador\n";
    diaria = D;
    cout << D;
    cout << "\n";
}

void Administrador::setAjudadecusto(float ac)
{
    cout << "Valor das diárias a serem pagas para o Administrador\n";
    ajudadecusto = ac;
    cout << ac;
    cout << "\n";
}

void Administrador::setAjudadecustopaga(float P)
{
    cout << "Valor da Ajuda de Custo fornecida para o Administrador perante as\n";
    ajudadecustopaga = P;
    P=((diaria*ajudadecusto)+salariobase);
    cout << "Valor do salário final do administrador\n";
    cout << P;
    cout << "\n";
    cout << "Valor do imposto pago a partir do Salário base do funcionário mais as suas gradificações\n";
    cout << (P*impostos);
    cout << "\n";
}