#include <iostream>

class IntArray
{
    int* vett;
    int lung;

    public:
    IntArray(int dim);
    ~IntArray(){delete[] vett;};
    int& operator[](int index);
};

IntArray::IntArray(int dim)
{
    if(dim > 0) {vett = new int[dim]; lung = dim;}
    else{vett = NULL; lung = 0;}
};

int& IntArray::operator[](int index)
{
    if(index >= 0 && index < lung){return vett[index];}
    else{std::cout << "Errore: indice fuori range\n"; return;}
};

int main ()
{
    IntArray num(10);
    int i;
    for(i = 0; i < 10; i++) num[i] = i;
    for(i = 0; i < 10; i++) std::cout << num[i] << '\n';
    return 0;
};