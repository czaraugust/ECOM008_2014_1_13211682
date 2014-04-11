#ifndef CASA_H
#define CASA_H

template <typename T> class casa
{
public:
    T elemento;
    casa *prox;
    casa(T element, casa *prox=0)
    {
        this->elemento=elemento;
        this->prox=prox;
    }
    casa(casa *prox=0)
    {
        this->prox=prox;
    }

};

#endif // CASA_H
