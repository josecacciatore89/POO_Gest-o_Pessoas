#include "pessoa.hpp"

#ifndef operario_hpp
#define operario_hpp


class Operario : public Pessoa
{
public:
    void pessoa();
    void setValorproducao(float vp);
    void setComissaovend(float comi);
    void setPagaro(float P);
private:
   float vendaproducao;
   float comissaovend;
   float pagaro;
   
};

#endif