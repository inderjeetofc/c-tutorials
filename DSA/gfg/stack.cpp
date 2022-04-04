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
// #include <bits/stdc++.h>
// using namespace std;
// bool parenthesisCheck(string str)
// {
//     stack<char> s;
//     for (char i : str)
//     {
//         if (i == '[' || i == '{' || i == '(')
//             s.push(i);
//         else
//         {
//             if (s.size() == 0)
//                 return 0;
//             if (i == ')' && s.top() == '(')
//                 s.pop();
//             else if (i == ']' && s.top() == '[')
//                 s.pop();
//             else if (i == '}' && s.top() == '{')
//                 s.pop();
//             else
//                 return 0;
//         }
//     }
//     return s.empty();
// }
// int main()
// {
//     string str = "[]{(]}]";
//     parenthesisCheck(str) ? cout << "Balanced!" << endl : cout << "Not Balanced!" << endl;
//     return 0;
// }

// q - stock span problem
// #include <bits/stdc++.h>
// using namespace std;
// void stockSpan(int arr[], int n)
// {
//     int span;
//     stack<int> s;
//     s.push(0);
//     cout << 1 << " ";
//     for (int i = 1; i < n; i++)
//     {
//         while (!s.empty() && arr[s.top()] <= arr[i])
//             s.pop();
//         span = s.empty() ? i + 1 : i - s.top();
//         s.push(i);
//         cout << span << " ";
//     }
// }
// int main()
// {
//     int arr[] = {60, 10, 20, 40, 35, 38, 50, 70, 65};
//     stockSpan(arr, 9);
//     return 0;
// }

// q- prev greater element
// #include <bits/stdc++.h>
// using namespace std;
// // big O(N) solution
// void prevGre(int arr[], int n)
// {
//     stack<int> s;
//     s.push(arr[0]);
//     cout << -1 << " ";
//     for (int i = 1; i < n; i++)
//     {
//         while (!s.empty() && s.top() <= arr[i])
//             s.pop();
//         int prev = s.empty() ? -1 : s.top();
//         s.push(arr[i]);
//         cout << prev << " ";
//     }
// }
// int main()
// {
//     int arr[] = {15, 10, 18, 12, 4, 6, 2, 8};
//     prevGre(arr, 8);
//     return 0;
// }
// q-next greater element . above prob
// #include <bits/stdc++.h>
// using namespace std;
// // big O(N) solution
// void nextGre(int arr[], int n)
// {
//     stack<int> s;
//     s.push(arr[n - 1]);
//     cout << -1 << " ";
//     for (int i = n - 2; i >= 0; i--)
//     {
//         while (!s.empty() && s.top() <= arr[i])
//             s.pop();
//         int next = s.empty() ? -1 : s.top();
//         s.push(arr[i]);
//         cout << next << " ";
//     }
// }
// int main()
// {
//     int arr[] = {5, 15, 10, 8, 6, 12, 9, 18};
//     nextGre(arr, 8);
//     return 0;
// }

// q- modify stack to get the min element also in O(1) aux space;
// sol-
// #include <bits/stdc++.h>
// using namespace std;
// // method-1 assuming all positive elements to be pushed
// struct myStack
// {
//     int min;
//     int *arr;
//     int top;
//     int capacity;
//     myStack(int cap)
//     {
//         capacity = cap;
//         arr = new int(cap);
//         top = -1;
//         min = INT_MAX;
//     }
//     bool isEmpty()
//     {
//         return top == -1;
//     }

//     // ----method-1 assuming all positive elements to be pushed

//     // void push(int data)
//     // {
//     //     top++;
//     //     if (isEmpty())
//     //     {
//     //         min = data;
//     //         arr[top] = data;
//     //     }
//     //     else
//     //     {
//     //         if (data <= min)
//     //         {
//     //             arr[top] = data - min;
//     //             min = data;
//     //         }
//     //         else
//     //             arr[top] = data;
//     //     }
//     // }
//     // int pop()
//     // {
//     //     if (isEmpty())
//     //         return 0;
//     //     else
//     //     {
//     //         int temp = arr[top];
//     //         if (arr[top] <= 0)
//     //         {
//     //             temp = min;
//     //             min = min - arr[top];
//     //         }
//     //         top--;
//     //         return temp;
//     //     }
//     // }

//     // method-2 assuming when negative elements are also there
//     // mathematics lga hai thoda sa.
//     void push(int data)
//     {
//         top++;
//         if (isEmpty())
//         {
//             arr[top] = data;
//         }
//         else
//         {
//             if (data <= min)
//             {
//                 arr[top] = 2 * data - min;
//                 min = data;
//             }
//             else
//                 arr[top] = data;
//         }
//     }
//     int pop()
//     {
//         if (isEmpty())
//             return 0;
//         else
//         {
//             int temp = arr[top];
//             if (arr[top] <= min)
//             {
//                 temp = min;
//                 min = 2 * min - arr[top];
//             }
//             top--;
//             return temp;
//         }
//     }
//     int getMin()
//     {
//         return min;
//     }
// };
// int main()
// {
//     myStack s1(5);
//     s1.push(5);
//     s1.push(-10);
//     s1.push(2);
//     s1.push(-20);
//     s1.push(1);
//     cout << "Min = " << s1.getMin() << endl;
//     cout << s1.pop() << endl;
//     cout << s1.pop() << endl;
//     cout << "Min = " << s1.getMin() << endl;
//     cout << s1.pop() << endl;
//     cout << s1.pop() << endl;
//     cout << "Min = " << s1.getMin() << endl;
//     cout << s1.pop() << endl;
//     cout << "Min = " << s1.getMin() << endl;
//     return 0;
// }

// q-infix to postfix
// #include <bits/stdc++.h>
// using namespace std;
// int isOperator(char ch)
// {
//     if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
//         return 1;
//     else if (ch == '(')
//         return 2;
//     else if (ch == ')')
//         return 3;
//     return 0; // for alphabets
// }
// int precedence(char ch)
// {
//     if (ch == '+' || ch == '-')
//         return 1;
//     if (ch == '*' || ch == '/')
//         return 2;
//     return 0;
// }
// void postfix(string str)
// {
//     // note:for prefix solution reverse the string and perform same operations and result would be reverse of that output
//     string postFix = "";
//     char temp;
//     stack<char> s;
//     for (char i : str)
//     {
//         if (isOperator(i) == 0)
//         {
//             postFix.push_back(i);
//         }
//         else if (isOperator(i) == 2)
//         {
//             s.push(i);
//         }
//         else if (isOperator(i) == 3)
//         {
//             while (!s.empty() && s.top() != '(')
//             {
//                 temp = s.top();
//                 postFix.push_back(temp);
//                 s.pop();
//             }
//             s.pop();
//         }
//         else
//         {
//             if (!s.empty() && precedence(i) > precedence(s.top()))
//                 s.push(i);
//             else
//             {
//                 while (!s.empty() && precedence(i) <= precedence(s.top()))
//                 {
//                     temp = s.top();
//                     postFix.push_back(temp);
//                     s.pop();
//                 }
//                 s.push(i);
//             }
//         }
//     }
//     while (!s.empty())
//     {
//         temp = s.top();
//         postFix.push_back(temp);
//         s.pop();
//     }
//     cout << postFix << endl;
// }
// int main()
// {
//     string str = "(a+b)/(c-d)*e";
//     postfix(str);
//     return 0;
// }