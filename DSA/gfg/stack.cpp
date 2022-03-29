// // q -implementation of stack with arrays
// #include <bits/stdc++.h>
// using namespace std;
// struct myStack
// {
//     int capacity;
//     int top;
//     int *arr;
//     myStack(int cap)
//     {
//         capacity = cap;
//         top = -1;
//         arr = new int[cap];
//     }
//     int push(int data)
//     {
//         if (top == capacity - 1)
//             return 0;
//         top++;
//         arr[top] = data;
//         return 1;
//     }
//     int pop()
//     {
//         if (top == -1)
//             return 0;
//         int res = this->arr[top];
//         this->top--;
//         return res;
//     }
//     int peek()
//     {
//         return arr[top];
//     }
//     int size()
//     {
//         return top + 1;
//     }
//     int isEmpty()
//     {
//         return (top == -1);
//     }
//     int isFull()
//     {
//         return (top == capacity - 1);
//     }
// };
// int main()
// {
//     myStack s1(5);
//     s1.push(72);
//     s1.push(5);
//     s1.push(4);
//     s1.push(-9);
//     s1.push(35);
//     s1.push(84); // not inserted as stack was full
//     cout << s1.isEmpty() << endl;
//     cout << s1.isFull() << endl;
//     cout << s1.pop() << endl;
//     cout << s1.pop() << endl;
//     cout << s1.pop() << endl;
//     cout << s1.peek() << endl;
//     cout << s1.size();
//     return 0;
// }

// q-implementation of stack with STL vector
// #include <bits/stdc++.h>
// using namespace std;
// struct myStack
// {
//     vector<int> v;
//     int push(int data)
//     {
//         v.push_back(data);
//     }
//     int pop()
//     {
//         int last = v.back();
//         v.pop_back();
//         return last;
//     }
//     int peek()
//     {
//         return v.back();
//     }
//     int size()
//     {
//         return v.size();
//     }
//     int isEmpty()
//     {
//         return v.empty();
//     }
// };
// int main()
// {
//     myStack s1;
//     s1.push(72);
//     s1.push(5);
//     s1.push(4);
//     s1.push(-9);
//     s1.push(35);
//     s1.push(84); // not inserted as stack was full
//     cout << s1.isEmpty() << endl;
//     cout << s1.pop() << endl;
//     cout << s1.pop() << endl;
//     cout << s1.pop() << endl;
//     cout << s1.peek() << endl;
//     cout << s1.size();
//     return 0;
// }