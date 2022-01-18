// #include <iostream>
// using namespace std;
// class shop
// {
//     int itemId[100];
//     int itemPrice[100];
//     int counter;

// public:
//     void initCounter()
//     {
//         counter = 0;
//     }
//     void getPrice(void);
//     void displayPrice(void);
// };
// void shop ::getPrice()
// {
//     cout << "Enter ID of your item - " << endl;
//     cin >> itemId[counter];
//     cout << "Enter price of your item - " << endl;
//     cin >> itemPrice[counter];
//     counter++;
// }
// void shop::displayPrice()
// {
//     for (int i = 0; i < counter; i++)
//     {
//         cout << "Price of your item with id " << itemId[i] << " is " << itemPrice[i] << endl;
//     }
// }
// int main()
// {
//     shop zara;
//     zara.initCounter();
//     zara.getPrice();
//     zara.getPrice();
//     zara.getPrice();
//     zara.getPrice();
//     zara.displayPrice();
//     return 0;
// }

//--------------------passing objects as arguments
// #include <iostream>
// using namespace std;
// class complex
// {
//     int re;
//     int img;

// public:
//     void setNum(int a, int b)
//     {
//         re = a;
//         img = b;
//     };
//     void getNum()
//     {
//         cout << "The complex number is " << re << "+" << img << "i" << endl;
//     }
//     void sumNum(complex a, complex b)
//     {
//         re = a.re + b.re;
//         img = a.img + b.img;
//     }
// };
// int main()
// {
//     complex x, y, z;
//     x.setNum(1, 2);
//     x.getNum();
//     y.setNum(3, 4);
//     y.getNum();
//     z.sumNum(x, y);
//     z.getNum();
//     return 0;
// }

//----------friend functions and friend class
// #include <iostream>
// using namespace std;
//forward declaration of class complex
//NOTE :if entire class is made friend then no need to specify class complex
// class complex;
// class calc
// {
// public:
//     int addReal(complex, complex); //cannot use function defination as complex is yet to be defined
//     int addImg(complex, complex);
// };
// class complex
// {
//     int re;
//     int img;
//     friend int calc::addReal(complex, complex);
//     friend int calc::addImg(complex, complex);

// public:
//     void setData(int a, int b)
//     {
//         re = a;
//         img = b;
//     }
//     void printData()
//     {
//         cout << "The complex number is " << re << "+" << img << "i" << endl;
//     }
// };
// int calc::addReal(complex a, complex b)
// {
//     int sum = a.re + b.re;
//     return sum;
// }
// int calc::addImg(complex a, complex b)
// {
//     int sum = a.img + b.img;
//     return sum;
// }
// int main()
// {
//     complex c1, c2;
//     c1.setData(6, 5);
//     c1.printData();
//     c2.setData(-7, 8);
//     c2.printData();
//     calc cal;
//     int sum = cal.addReal(c1, c2);
//     cout << "sum of the real parts of complex number is " << sum << endl;
//     sum = cal.addImg(c1, c2);
//     cout << "sum of the img parts of complex number is " << sum << endl;
//     return 0;
// }

// ----------friend functions and friend class
// // note - we cannot access class function with friend . for that the friended class need to be defind before main class and forward declaration of main class must be givenm.
// #include <iostream>
// using namespace std;
// // forward declaration of class complex
// // NOTE :if entire class is made friend then no need to specify class complex
// // class complex;
// class complex
// {
//     int re;
//     int img;
//     friend int addReal(complex, complex);
//     friend int addImg(complex, complex);

// public:
//     void setData(int a, int b)
//     {
//         re = a;
//         img = b;
//     }
//     void printData()
//     {
//         cout << "The complex number is " << re << "+" << img << "i" << endl;
//     }
// };
// // class calc
// // {
// // public:
// //     int addReal(complex, complex); //cannot use function defination as complex is yet to be defined
// //     int addImg(complex, complex);
// // };
// int addReal(complex a, complex b)
// {
//     int sum = a.re + b.re;
//     return sum;
// }
// int addImg(complex a, complex b)
// {
//     int sum = a.img + b.img;
//     return sum;
// }
// int main()
// {
//     complex c1, c2;
//     c1.setData(6, 5);
//     c1.printData();
//     c2.setData(-7, 8);
//     c2.printData();
//     // calc cal;
//     int sum = addReal(c1, c2);
//     cout << "sum of the real parts of complex number is " << sum << endl;
//     sum = addImg(c1, c2);
//     cout << "sum of the img parts of complex number is " << sum << endl;
//     return 0;
// }

//swaping values of class with friend function
// #include <iostream>
// using namespace std;
// class y;
// class x
// {
//     int val1;
//     friend void swap(x &, y &);

// public:
//     void setVal(int a)
//     {
//         val1 = a;
//     }
//     void display()
//     {
//         cout << val1;
//     }
// };
// class y
// {
//     friend void swap(x &, y &);
//     int val2;

// public:
//     void setVal(int b)
//     {
//         val2 = b;
//     }
//     void display()
//     {
//         cout << val2;
//     }
// };
// void swap(x &a, y &b)
// {
//     int temp = a.val1;
//     a.val1 = b.val2;
//     b.val2 = temp;
// }
// int main()
// {
//     x a;
//     y b;
//     a.setVal(52);
//     b.setVal(-89);
//     cout << "values before swaping are :a.val1 =  ";
//     a.display();
//     cout << " b.val2 = ";
//     b.display();
//     cout << endl;
//     swap(a, b);
//     cout << "values after swaping are :a.val1 =  ";
//     a.display();
//     cout << " b.val2 = ";
//     b.display();

//     return 0;
// }

//constrcutor . program to calculate distance between two points in x y plane
// #include <iostream>
// #include <cmath>
// using namespace std;
// class point
// {
//     int x;
//     int y;
//     friend float distance(point, point);

// public:
//     point(int a, int b) // parameterised constructor
//     {
//         x = a;
//         y = b;
//     }
//     void display()
//     {
//         cout << "point is (" << x << "," << y << ")" << endl;
//     }
// };
// float distance(point a, point b)
// {
//     float dist = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
//     return dist;
// }
// int main()
// {
//     point a1(0, 1), a2(0, 6);
//     a1.display();
//     a2.display();
//     cout << "Distance between point a and b is : " << distance(a1, a2) << " units";
//     return 0;
// }

//dynamic initialisation using constructor
#include <iostream>
using namespace std;
class compoundI
{
    int principal;
    float interest;
    int years;
    int returnVal;

public:
    compoundI() //default constructor
    {
    }
    compoundI(int p, float r, int y)
    {
        principal = p;
        interest = r;
        years = y;
        returnVal = principal;
        for (int i = 0; i < years; i++)
        {
            returnVal = returnVal * (1 + interest);
        }
    }
    compoundI(int p, int R, int y)
    {
        principal = p;
        interest = (float)R / 100;
        years = y;
        returnVal = principal;
        for (int i = 0; i < years; i++)
        {
            returnVal = returnVal * (1 + interest);
        }
    }
    void display()
    {
        cout << "The principal amount " << principal << " after " << years << " years at " << interest * 100 << "% interest will become " << returnVal << endl;
    }
};
int main()
{
    compoundI a, b;
    int p, y, R;
    float r;
    cout << "Enter p , r , y" << endl; //this will run the float r constructor by itself
    cin >> p >> r >> y;
    a = compoundI(p, r, y);
    a.display();
    cout << "Enter p , R , y" << endl; //THIS WILL RUN THE INT R constructor byitself
    cin >> p >> R >> y;
    b = compoundI(p, R, y);
    b.display();

    return 0;
}