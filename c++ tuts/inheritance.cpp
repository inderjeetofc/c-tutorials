
//deriving class in public mode

// #include <iostream>
// using namespace std;
// class base
// {
//     int data1;

// public:
//     int data2;
//     void setData(void);
//     int getData1(void);
// };
// void base::setData()
// {
//     data1 = 9;
//     data2 = 6;
// }
// int base::getData1()
// {
//     return data1;
// }
// class derived : public base
// {
//     int data3;

// public:
//     void multiply(void);
//     void display(void);
// };
// void derived::multiply()
// {
//     data3 = data2 * getData1();
// }
// void derived::display()
// {
//     cout << "data1 is " << getData1() << " data2 is " << data2 << " data3 is " << data3 << endl;
// }

// int main()
// {
//     derived der;
//     der.setData();
//     der.multiply();
//     der.display();
//     return 0;
// }

//deriving above class in private mode

// #include <iostream>
// using namespace std;
// class base
// {
//     int data1;

// public:
//     int data2;
//     void setData(void);
//     int getData1(void);
// };
// void base::setData()
// {
//     data1 = 8;
//     data2 = 6;
// }
// int base::getData1()
// {
//     return data1;
// }
// class derived : private base
// {
//     int data3;

// public:
//     void multiply(void);
//     void display(void);
// };
// void derived::multiply()
// {
//     setData();//can be called by public members of derived
//     data3 = data2 * getData1();
// }
// void derived::display()
// {
//     cout << "data1 is " << getData1() << " data2 is " << data2 << " data3 is " << data3 << endl;
// }

// int main()
// {
//     derived der;
//     // der.setData();//cannot directly call setData as it is inherited privatly
//     der.multiply();
//     der.display();
//     return 0;
// }

//multilevel inheritance
// #include <iostream>
// using namespace std;
// class student
// {
// protected:
//     int rollNum;

// public:
//     void setRoll(int);
//     void getRoll(void);
// };
// void student::setRoll(int roll)
// {
//     rollNum = roll;
// }
// void student::getRoll()
// {
//     cout << "Roll number of student is " << rollNum << endl;
// }
// class exam : public student
// {
// protected:
//     float maths;
//     float physics;

// public:
//     void setMarks(float, float);
//     void getMarks(void);
// };
// void exam::setMarks(float phy, float math)
// {
//     physics = phy;
//     maths = math;
// }
// void exam::getMarks()
// {
//     cout << "The marks of student with roll no. " << rollNum << " is "
//          << "physics = " << physics << " maths = " << maths << endl;
// }
// class result : public exam
// {
// protected:
//     float percentage;

// public:
//     void displayPer(void);
// };
// void result::displayPer()
// {
//     percentage = (maths + physics) / 2;
//     cout << "Your percentage is = " << percentage << "%" << endl;
// }
// int main()
// {
//     result inder;
//     inder.setRoll(15);
//     inder.getRoll();
//     inder.setMarks(85, 90);
//     inder.getMarks();
//     inder.displayPer();
//     return 0;
// }

//multiple class ques calculator

// #include <iostream>
// #include <cmath>
// #include <string>
// using namespace std;
// class simpleCal
// {
// protected:
//     float num1;
//     float num2;
//     float result;
//     char op;

// public:
//     float siCal(float a, float b, char ch)
//     {
//         num1 = a;
//         num2 = b;
//         op = ch;
//         if (op == '*')
//             result = num1 * num2;
//         else if (op == '+')
//             result = num1 + num2;
//         else if (op == '-')
//             result = num1 - num2;
//         else
//             result = num1 / num2;
//     }
// };
// class scientificCal
// {
// protected:
//     float numA;
//     float numB;
//     float res;
//     string func;

// public:
//     float sciCal(float a, float b, string str)
//     {
//         numA = a;
//         numB = b;
//         func = str;
//         if (func.compare("sin") == 0)
//             res = sin(numA);
//         else if (func.compare("log") == 0)
//             res = log(numA);
//         else if (func.compare("pow") == 0)
//             res = pow(numA, numB);
//         else if (func.compare("cos") == 0)
//             res = cos(numA);
//     }
// };
// class hybridCal : public simpleCal, public scientificCal
// {
//     float result;

// public:
//     void calHybrid(float numX, float numY, string type)
//     {
//         if (type.compare("sci") == 0)
//         {
//             string str;
//             cout << "Enter operation (sin,cos,log,pow)" << endl;
//             cin >> str;
//             result = sciCal(numX, numY, str);
//         }
//         else
//         {
//             char ch;
//             cout << "Enter operation (+,-,*,/)" << endl;
//             cin >> ch;
//             result = siCal(numX, numY, ch);
//         }

//         cout << "The result of the operation is = " << result;
//     }
// };
// int main()
// {
//     hybridCal obj;
//     obj.calHybrid(2.718, 10, "simple");
//     return 0;
// }

//birtual base class
// multiple class ques calculator

// #include <iostream>
// #include <cmath>
// #include <string>
// using namespace std;
// class simpleCal
// {
// protected:
//     float num1;
//     float num2;
//     char op;

// public:
//     float siCal(float a, float b, char ch)
//     {
//         num1 = a;
//         num2 = b;
//         op = ch;
//         if (op == '*')
//             return num1 * num2;
//         else if (op == '+')
//             return num1 + num2;
//         else if (op == '-')
//             return num1 - num2;
//         else
//             return num1 / num2;
//     }
// };
// class scientificCal
// {
// protected:
//     string func;
//     float num1;
//     float num2;

// public:
//     float sciCal(float a, float b, string str)
//     {
//         num1 = a;
//         num2 = b;
//         func = str;
//         if (func.compare("sin") == 0)
//             return sin(num1);
//         else if (func.compare("log") == 0)
//             return log(num1);
//         else if (func.compare("pow") == 0)
//             return pow(num1, num2);
//         else if (func.compare("cos") == 0)
//             return cos(num1);
//     }
// };
// class hybridCal : public scientificCal, public simpleCal
// {
//     float result;

// public:
//     void calHybrid(float numX, float numY, string type)
//     {
//         if (type.compare("sci") == 0)
//         {
//             string str;
//             cout << "Enter operation (sin,cos,log,pow)" << endl;
//             cin >> str;
//             result = sciCal(numX, numY, str);
//         }
//         else
//         {
//             char ch;
//             cout << "Enter operation (+,-,*,/)" << endl;
//             cin >> ch;
//             result = siCal(numX, numY, ch);
//         }

//         cout << "The result of the operation is = " << result;
//     }
// };
// int main()
// {
//     hybridCal obj;
//     obj.calHybrid(1, 10, "sci");
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int a=5;
    cout<<(a<<1);
    return 0;
}