#include <iostream>
using namespace std;

#ifndef pessoa_hpp
#define pessoa_hpp


class Pessoa{
public:
    
  
    virtual void pessoa(); 
    void setLado(string n);
    void setEndereco(string e);
    void setTelefone(string t);
    void setEmail(string y);
    void setCpf(string z);
    void setCargo(string q);
    void setCodigosetor(int cs);
    void setSalariobase(float sb);
    void setImpostos(float x);
    void toString();

    
protected:
    
    string nome;
    string endereco;
    string telefone;
    string email;
    string cpf;
    string cargo;
    int codigosetor;
    float salariobase;
    float impostos;
    
};

#endif 