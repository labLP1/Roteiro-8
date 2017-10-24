#ifndef ICONTA_H
#define ICONTA_H
#include <iostream>

class IConta{
    private:
    double valor;
    
    public:
    virtual void sacar(double valor);
    virtual void depositar(double valor);
    
    double getsacar();  
    double getdepositar();
    
    void setsacar(double valor);
    void setdepositar(double valor);
    
};

#endif
    
