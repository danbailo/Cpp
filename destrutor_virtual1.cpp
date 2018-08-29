#include <iostream>
 
class base 
{
    int* ptr;
public:
    base()
    {
        ptr = new int;
    }
     
    ~base() 
    {
        delete ptr;
        std::cout << "'destruindo' base\n";   
    }
};
 
class derivada: public base
{
    int* dptr;
public:
    derivada() {
        dptr = new int;
    }
    ~derivada()
    {
        delete dptr;
        std::cout << "'destruindo' derivada\n";
    }
};
 
int main()
{
    base* pt = new derivada;
    delete pt;
}