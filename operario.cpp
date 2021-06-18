#include "operario.hpp"



void Operario::pessoa()
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
    cout << "Valor da produção\n";
    cout << vendaproducao;
    cout << "\n";
    cout << "comisão\n";
    cout << comissaovend;
    cout << "\n";
    cout << "Salário final\n";
    cout << ((vendaproducao*comissaovend)+salariobase);
    cout << "\n";
    cout << "###########################################\n";
}

void Operario::setValorproducao(float vp)
{
    cout << "Dados sobre o Operario\n";
    cout << "Valor das vendas realizadas pelo Operario\n";
    vendaproducao = vp;
    cout << vp;
    cout << "\n";
}
void Operario::setComissaovend(float comi)
{
    comissaovend = comi;
    cout << "comissão do Operario\n";
    cout << comi;
    cout << "\n";
}

void Operario::setPagaro(float P)
{
    pagaro = P;
    P=(vendaproducao*comissaovend);
    cout << "comissão do vendedor\n";
    cout << P;
    cout << "\n";
    cout << "Valor do salário final ao operario\n";
    cout << (P+salariobase);
    cout << "\n";
    cout << "Valor do imposto pago a partir do Salário base do funcionário mais as suas gradificações\n";
    cout << (pagaro+salariobase)*impostos;
    cout << "\n";
}
