// #include <iostream>
// using namespace std;
// template <class T> // application in 2nd comment

// // class without stl
// // class vector
// // {
// //     int size;

// // public:
// //     int *arr;
// //     vector(int size)
// //     {
// //         this->size = size;
// //         this->arr = new int[size];
// //     }
// //     int dotPdt(vector &obj)
// //     {
// //         int dP = 0;
// //         for (int i = 0; i < size; i++)
// //         {
// //             dP += this->arr[i] * obj.arr[i];
// //         }
// //         return dP;
// //     }
// // };

// //class with stl application
// class vector
// {
//     int size;

// public:
//     T *arr; // making arr data type as varible T
//     vector(int size)
//     {
//         this->size = size;
//         this->arr = new T[size];
//     }
//     T dotPdt(vector &obj) //returning dP as variable data type T
//     {
//         T dP = 0;
//         for (int i = 0; i < size; i++)
//         {
//             dP += this->arr[i] * obj.arr[i];
//         }
//         return dP;
//     }
// };
// int main()
// {
//     //1 - without std template lib even though input is float output will still be int
//     // vector v1(3);
//     // v1.arr[0] = 4.1;
//     // v1.arr[1] = -2.36;
//     // v1.arr[2] = 5.12;
//     // vector v2 = vector(3);
//     // v2.arr[0] = 1.6;
//     // v2.arr[1] = 3.4;
//     // v2.arr[2] = 0;

//     // 2 - using stl making data type as variable
//     //following will give float output
//     vector<float> v1(3);
//     v1.arr[0] = 4.1;
//     v1.arr[1] = -2.86;
//     v1.arr[2] = 5.12;
//     vector<float> v2 = vector<float>(3);
//     v2.arr[0] = 1.6;
//     v2.arr[1] = 3.4;
//     v2.arr[2] = 0;
//     cout << "dot product is = " << v1.dotPdt(v2) << endl;

//     //following will give int output
//     vector<int> v3(3);
//     v3.arr[0] = 4.1;
//     v3.arr[1] = -2.86;
//     v3.arr[2] = 5.12;
//     vector<int> v4 = vector<int>(3);
//     v4.arr[0] = 1.6;
//     v4.arr[1] = 3.4;
//     v4.arr[2] = 0;
//     cout << "dot product is = " << v3.dotPdt(v4) << endl;
//     return 0;
// }

//programs to demonstrate default paramters in template class

// #include <iostream>
// using namespace std;
// template <class a = int, class b = char, class c = string>
// class myClass
// {
// public:
//     a var1;
//     b var2;
//     c var3;
//     myClass(a var1, b var2, c var3)
//     {
//         this->var1 = var1;
//         this->var2 = var2;
//         this->var3 = var3;
//     }
//     void display()
//     {
//         cout << "I am the variables " << endl
//              << "var1 = " << var1 << endl
//              << "var2 = " << var2 << endl
//              << "var3 = " << var3 << endl;
//         cout << endl;
//     }
// };

// int main()
// {
//     myClass<> obj1(82, 'o', "hello world");
//     obj1.display();
//     myClass<string, float, int> obj2("ok this is second obj", 78.9563, 2356);
//     obj2.display();
//     return 0;
// }

//implementation of STL

//1-vector - linear containers
#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;
template <class t1> //-------------------NOTE : a template is defined right before a function , class
void display(vector<t1> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i) << " ";
    }
    cout << endl;
}
//display list
template <class t2> //-------------------NOTE : a template is defined right before a function , class
void dispList(list<t2> &li)
{
    list<int>::iterator itr;
    for (itr = li.begin(); itr != li.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}

//display map
void dispMap(map<int, string> &stuMap)
{
    map<int, string>::iterator itr;
    for (itr = stuMap.begin(); itr != stuMap.end(); itr++)
    {
        cout << itr->first << " " << itr->second << " " << endl;
    }
    cout << endl;
}
template <class t1>
void getData(vector<t1> &arr)
{
    t1 a;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element no. " << i + 1 << " ";
        cin >> a;
        arr.push_back(a);
    }
}
int main()
{
    //---------vector defination and function

    // vector<int> arr;
    // vector<int>::iterator it1;
    // it1 = arr.begin();
    // vector<int> anothervector(4, 859);
    // arr.insert(it1, 200);
    // arr.push_back(10);
    // arr.push_back(98);
    // display(arr);
    // it1 = arr.begin() + 2;
    // arr.insert(it1, anothervector.begin(), anothervector.end());
    // display(arr);
    // it1 = arr.end() - 2;
    // int array[] = {87, 745, 123};
    // arr.insert(it1, array, array + 3);
    // display(arr);
    // it1 = arr.begin();
    // cout << *it1 << endl;
    // arr.insert(it1, 3, 389);
    // display(arr);
    // arr.erase(arr.begin(), arr.begin() + 2);
    // display(arr);
    // // arr.clear();
    // arr.swap(anothervector);
    // display(arr);
    // display(anothervector);

    // // cout << arr.front();
    // // cout << arr.back();
    // cout << arr.capacity();

    //--------------list defination and functions
    // list<int> list1;
    // list<int> list2(5, -15);
    // vector<int> arr(3, 751);
    // // vector<int>::iterator it = arr.begin();
    // list<int>::iterator itr = list1.begin();
    // list1.insert(itr, 3, 50);
    // itr = list1.begin();
    // list1.push_back(82); // adding element in back
    // dispList(list1);
    // list1.insert(itr, arr.begin(), arr.end()); //merging list and vector
    // dispList(list1);
    // list1.sort(); //sorting list
    // dispList(list1);
    // dispList(list2);
    // list1.merge(list2); //merging two list
    // dispList(list1);
    // list1.reverse(); //reversing list
    // dispList(list1);
    // list1.remove(-15); //removing specific element from list
    // dispList(list1);

    //map defination and function
    map<int, string> studentMarks; //can only have key and value and not more then 2 elements
    studentMarks[1] = "sonu";
    dispMap(studentMarks);
    return 0;
}