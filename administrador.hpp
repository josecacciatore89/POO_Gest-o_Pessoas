#include "pessoa.hpp"

#ifndef administrador_hpp
#define administrador_hpp


class Administrador : public Pessoa
{
public:
    void pessoa();
    void setDiaria(float D);
    void setAjudadecusto(float ac);
    void setAjudadecustopaga(float P);
    
private:
  float diaria; 
  float ajudadecusto;
  float  ajudadecustopaga;  
};

#endif