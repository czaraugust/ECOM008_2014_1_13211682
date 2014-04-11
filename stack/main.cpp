#include "pilha.h"

#include <iostream>

using namespace std;


int main()
{

    Pilha  <int> *teste =new Pilha <int>() ;

    teste->push(2);
    cout << "Top: " << teste->topValue() << endl;
    cout << "Size: " << teste->length() << endl;

}
