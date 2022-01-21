#include <iostream>
using namespace std;
class base
{
public:
    int var1;
    virtual void display(void)
    {
        cout << "BASE :the value of var1 = " << var1 << endl;
    }
};
class derived : public base
{
public:
    int var2;
    void display(void)
    {
        cout << "DERIVED :the value of var 2 =" << var2 << endl;
    }
};
int main()
{
    base *ptr = new base;
    ptr->var1 = 84;
    ptr->display();
    derived obj_derived;
    ptr = &obj_derived;
    obj_derived.var2 = 97;
    ptr->display();
    return 0;
}