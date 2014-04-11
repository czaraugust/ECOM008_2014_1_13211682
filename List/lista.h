#include "list.h"
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
template <typename T>

class Lista : public List<T>{
  public:
    casa<T> *cursor;
    int tam;
    casa <T> *head;
    casa <T> *tail;
    Lista ()
    {
        this->tam=0;
        this -> cursor =0;
        this->head=0;
        this -> tail=0;

    }
    Lista(const Lista&)
    {
        this->tam=0;
        this->cursor=0;
        this->head=0;
        this->tail=0;
    }
    void moveToStart ()                 //Mover por início
    {
        this ->cursor =0;
    }
    void moveToEnd ()                   //Mover pro fim
    {
        this -> cursor = this->tam -1;

    }
    void prev()                             //Mover pra esquerda
    {
        if(this->cursor > 0)
        {
            this->cursor-- ;
        }
    }
    int length ()
    {
        return tam;                       //Tamanho da lista
    }

    int currPos()                       //Posição do cursor
    {
        return cursor;
    }

     void moveToPos (int pos)           //Move o cursor para uma posição dada
     {
         this->cursor =pos;
     }

    void next()                        // Mover pra direita
    {
        if(this->cursor < this->tam-1)
        {
            this->cursor ++;
        }
    }


    void clear ()
    {
        casa<T> * aux = this->head;
        for (int i=0; i<this->tam; i++)
        {
            casa<T> remover = aux;
            aux = aux->prox;
            delete(remover);

        }
        this->cursor=0;
        this->tam =0;

    }




};
