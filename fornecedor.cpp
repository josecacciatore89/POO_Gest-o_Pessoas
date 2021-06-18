#include "fornecedor.hpp"



void Fornecedor::pessoa()
{
    cout << "###########################################\n";
    cout << "mostra o que foi cadastrado para este item\n";
    cout << "###########################################\n";
    cout << "###########################################\n";
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
    cout << "Crédito\n";
    cout << credito;
    cout << "\n";
    cout << "Dívida\n";
    cout << divida;
    cout << "\n";
     cout << "Saldo\n";
    cout << saldo;
    cout << "\n";
    cout << "###########################################\n";
}

void Fornecedor::setCredito(float c)
{
    cout << "Dados sobre o Fornecedor\n";
    cout << "Crédito do Fornecedor\n";
    credito = c;
    cout << c;
    cout << "\n";
}
void Fornecedor::setDivida(float d)
{
    divida = d;
    cout << "Dívida do Fornecedor\n";
    cout << d;
    cout << "\n";
}
void Fornecedor::setSaldo(float s)
{
    saldo = s;
    s=credito-divida;
    cout << "saldo do Fornecedor\n";
    cout << s;
    cout << "\n";
}

