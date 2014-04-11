#ifndef PILHA_H
#define PILHA_H
#include "stack.h"
#include <stdlib.h>

template <typename E>
class  Pilha: public  Stack<E> {

public:

    E * pilha;
    int top;
    Pilha ()
    {
        this->top=0;
        pilha = new E [10];

    }

    void  clear ()
    {
        this->top =0;
    }
    void push(const E& it){
        if (top < sizeof( pilha)){
            pilha[top] =it;
            this->top++;

        }
        else{
            pilha = (E *) realloc ( pilha, 1.25*sizeof(E));
            pilha[top] =it;
            this->top++;

        }

    }
    E pop()
    {
        E top = pilha [this->top -1];
        this->top--;
        return pilha [top];
    }

    int length()const {
        return top;
    }
    int & topValue() const
    {
        return pilha[top-1];
    }

};

#endif // PILHA_H
