#include "pessoa.hpp"

#ifndef vendedor_hpp
#define vendedor_hpp


class Vendedor : public Pessoa
{
public:
    void pessoa();
    void setVendas(float v);
    void setComissao(float k);
    void setPagar(float cp);
    
private:
   float vendas;
   float comissao;
   float pagar;
   
};

#endif