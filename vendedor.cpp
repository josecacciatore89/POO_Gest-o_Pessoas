#include "vendedor.hpp"



void Vendedor::pessoa()
{
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
    cout << "Valor das vendas\n";
    cout << vendas;
    cout << "\n";
    cout << "Comisão\n";
    cout << comissao;
    cout << "\n";
    cout << "Salário final\n";
    cout << ((vendas*comissao)+salariobase);
    cout << "\n";
}

void Vendedor::setVendas(float v)
{
    cout << "Dados sobre o Vendedor\n";
    cout << "Valor das vendas realizadas pelo Vendedor\n";
    vendas = v;
    cout << v;
    cout << "\n";
}
void Vendedor::setComissao(float k)
{
    comissao = k;
    cout << "comissão do vendedor\n";
    cout << k;
    cout << "\n";
}

void Vendedor::setPagar(float cp)
{
    pagar = cp;
    cp=(vendas*comissao);
    cout << "comissão do vendedor\n";
    cout << cp;
    cout << "\n";
    cout << "Valor do salário final do vendedor\n";
    cout << (cp+salariobase);
    cout << "\n";
    cout << "Valor do imposto pago a partir do Salário base do funcionário mais as suas gradificações\n";
    cout << (cp+salariobase)*impostos;
    cout << "\n";
}