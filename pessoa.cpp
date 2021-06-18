#include "pessoa.hpp"



void Pessoa::pessoa()
{
    
}

void Pessoa::setLado(string n)
{
    nome = n;
}

void Pessoa::setEndereco(string e)
{
    endereco = e;
}

void Pessoa::setTelefone(string t)
{
    telefone = t;
}

void Pessoa::setEmail(string y)
{
    email = y;
}

void Pessoa::setCpf(string z)
{
    cpf = z;
}

void Pessoa::setCargo(string q)
{
    cargo = q;
}
void Pessoa::setCodigosetor(int cs)
{
    cout << "Código do setor de trabalho do funcionário\n";
    codigosetor = cs;
    cout << cs;
    cout << "\n";
}

void Pessoa::setSalariobase(float sb)
{
    cout << "Salário base do funcionário\n";
    salariobase = sb;
    cout << sb;
    cout << "\n";
}

void Pessoa::setImpostos(float x)
{ 
    impostos = x;
    cout << "\n";
}

void Pessoa::toString()
{

}
