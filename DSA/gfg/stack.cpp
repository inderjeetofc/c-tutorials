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

// qlinked list implementation of stack
// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// struct stackLL
// {
//     node *head;
//     int size;
//     stackLL()
//     {
//         this->head = NULL;
//         this->size = 0;
//     }
//     void push(int data)
//     {
//         node *temp = new node(data);
//         temp->next = head;
//         head = temp;
//         this->size++;
//     }
//     int pop()
//     {
//         node *temp = head;
//         int res = temp->data;
//         head = head->next;
//         this->size--;
//         delete temp;
//         return res;
//     }
//     int sizeF()
//     {
//         return size;
//     }
//     int peek()
//     {
//         return head->data;
//     }
//     bool isEmpty()
//     {
//         return head == NULL;
//     }
// };
// int main()
// {
//     stackLL s1;
//     s1.push(89);
//     s1.push(9);
//     s1.push(2);
//     s1.push(20);
//     s1.push(-4);
//     cout << s1.sizeF() << endl;
//     cout << s1.peek() << endl;
//     cout << s1.pop() << endl;
//     cout << s1.pop() << endl;
//     cout << s1.pop() << endl;
//     cout << s1.pop() << endl;
//     cout << s1.pop() << endl;
//     cout << s1.isEmpty() << endl;
//     return 0;
// }

// q balanced parenthesis problem with stack
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
// bool checkParenthesis(char arr[], int n)
// {
//     myStack s1(n);
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == '(' || arr[i] == '[' || arr[i] == '{')
//             s1.push(arr[i]);
//         else
//         {
//             if (arr[i] == ')' && s1.peek() == '(')
//                 s1.pop();
//             else if (arr[i] == ']' && s1.peek() == '[')
//                 s1.pop();
//             else if (arr[i] == '}' && s1.peek() == '{')
//                 s1.pop();
//             else
//                 return 0;
//         }
//     }
//     return s1.isEmpty();
// }
// int main()
// {
//     // myStack s1(5);
//     char arr[10] = {'[', ']', '{', '[', ']', '}'};
//     checkParenthesis(arr, 6) ? cout << "Balanced!" << endl : cout << "Not Balanced !" << endl;
//     return 0;
// }

// q parenthesis prob with STL;
#include <bits/stdc++.h>
using namespace std;
bool parenthesisCheck(string str)
{
    stack<char> s;
    for (char i : str)
    {
        if (i == '[' || i == '{' || i == '(')
            s.push(i);
        else
        {
            if (s.size() == 0)
                return 0;
            if (i == ')' && s.top() == '(')
                s.pop();
            else if (i == ']' && s.top() == '[')
                s.pop();
            else if (i == '}' && s.top() == '{')
                s.pop();
            else
                return 0;
        }
    }
    return s.empty();
}
int main()
{
    string str = "[]{(]}]";
    parenthesisCheck(str) ? cout << "Balanced!" << endl : cout << "Not Balanced!" << endl;
    return 0;
}