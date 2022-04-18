// ques - queue implementation with array
// sol - all operations O(1) except dequeue is big O(n)
//  #include <bits/stdc++.h>
//  using namespace std;
//  struct queueDS
//  {
//      int capacity;
//      int size;
//      int *arr;
//      queueDS(int cap)
//      {
//          capacity = cap;
//          arr = new int[cap];
//          size = 0;
//      }
//      void enqueue(int data)
//      {
//          arr[size] = data;
//          size++;
//      }
//      int dequeue()
//      {
//          int temp = arr[0];
//          for (int i = 0; i < size - 1; i++)
//          {
//              arr[i] = arr[i + 1];
//          }
//          size--;
//          return temp;
//      }
//      int getFront()
//      {
//          return arr[0];
//      }
//      int getRear()
//      {
//          return arr[size - 1];
//      }
//      int isEmpty()
//      {
//          return (size == 0);
//      }
//      int isFull()
//      {
//          return (size == capacity);
//      }
//  };
//  void display(queueDS p)
//  {
//      for (int i = 0; i < p.size; i++)
//      {
//          cout << p.arr[i] << endl;
//      }
//  }
//  int main()
//  {
//      queueDS q(7);
//      q.enqueue(5);
//      q.enqueue(95);
//      q.enqueue(8);
//      q.enqueue(-1);
//      q.enqueue(6);
//      display(q);
//      cout << "popped - " << q.dequeue() << endl;
//      cout << "popped - " << q.dequeue() << endl;
//      cout << "popped - " << q.dequeue() << endl;
//      cout << "front - " << q.getFront() << endl;
//      cout << "popped - " << q.dequeue() << endl;
//      cout << "front - " << q.getFront() << endl;
//      cout << "rear - " << q.getRear() << endl;
//      q.enqueue(41);
//      cout << "rear - " << q.getRear() << endl;
//      return 0;
//  }

// ques - //ques - queue implementation with circular array
// sol - all operations will be big O(1)
// Note with this logic one slot will alwyas be empty

// Note : ghar jaake sir ka implementation karna usme size and rear use kia hai

// #include <bits/stdc++.h>
// using namespace std;
// struct queueDS
// {
//     int capacity;
//     int size;
//     int front;
//     int *arr;
//     queueDS(int cap)
//     {
//         capacity = cap;
//         arr = new int[cap];
//         size = 0;
//         front = 0;
//     }
//     int enqueue(int data)
//     {
//         if (!isFull())
//         {
//             arr[size] = data;
//             size = (size + 1) % capacity;
//             return 1;
//         }
//         return -1;
//     }
//     int dequeue()
//     {
//         if (!isEmpty())
//         {
//             int temp = arr[front];
//             front = (front + 1) % capacity;
//             return temp;
//         }
//         return -1;
//     }
//     int getFront()
//     {
//         return arr[front];
//     }
//     int getRear()
//     {
//         return arr[size - 1];
//     }
//     bool isEmpty()
//     {
//         return (front == size);
//     }
//     bool isFull()
//     {
//         return ((size + 1) % capacity == front);
//     }
// };
// void display(queueDS p)
// {
//     for (int i = p.front; i != p.size; i = (i + 1) % p.capacity)
//     {
//         cout << p.arr[i] << endl;
//     }
// }
// int main()
// {
//     queueDS q(7);
//     cout << "is empty - " << q.isEmpty() << endl;
//     cout << "is full - " << q.isFull() << endl;
//     q.enqueue(5);
//     q.enqueue(95);
//     q.enqueue(8);
//     q.enqueue(-1);
//     q.enqueue(6);
//     q.enqueue(7);
//     q.enqueue(19);
//     q.enqueue(85);
//     // q.enqueue(74);
//     display(q);
//     cout << "is empty - " << q.isEmpty() << endl;
//     cout << "is full - " << q.isFull() << endl;
//     // q.enqueue(19);
//     // cout << "is empty - " << q.isEmpty() << endl;
//     // cout << "is full - " << q.isFull() << endl;
//     cout << "popped - " << q.dequeue() << endl;
//     cout << "popped - " << q.dequeue() << endl;
//     cout << "popped - " << q.dequeue() << endl;
//     cout << "popped - " << q.dequeue() << endl;
//     cout << "popped - " << q.dequeue() << endl;
//     // display(q);
//     q.enqueue(8);
//     q.enqueue(-1);
//     q.enqueue(6);
//     q.enqueue(85);
//     q.enqueue(74);
//     display(q);

//     cout << "front - " << q.getFront() << endl;
//     cout << "popped - " << q.dequeue() << endl;
//     cout << "front - " << q.getFront() << endl;
//     cout << "rear - " << q.getRear() << endl;
//     q.enqueue(41);
//     cout << "rear - " << q.getRear() << endl;
//     return 0;
// }

// que implement queue with linked list
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
// struct queueDS
// {
//     node *front, *rear;
//     queueDS(int data)
//     {
//         rear = NULL;
//         front = NULL;
//     }
//     void enqueue(int data)
//     {
//         node *dummy = new node(data);
//         if (front == NULL)
//         {
//             front = rear = dummy;
//             return;
//         }
//         rear->next = dummy;
//         rear = dummy;
//     }
//     int dequeue()
//     {
//         if (front == NULL)
//             return -1;
//         node *temp = front;
//         int value = temp->data;
//         front = front->next;
//         if (front == NULL)
//             rear = NULL;
//         delete temp;
//         return value;
//     }
//     int getFront()
//     {
//         return front->data;
//     }
//     int getRear()
//     {
//         return rear->data;
//     }
//     bool isEmpty()
//     {
//         return (front == rear);
//     }
// };
// void display(queueDS p)
// {
//     node *ptr = p.front;
//     while (ptr != NULL)
//     {
//         cout << ptr->data << endl;
//         ptr = ptr->next;
//     }
// }
// int main()
// {
//     queueDS q(7);
//     cout << "is empty - " << q.isEmpty() << endl;
//     q.enqueue(5);
//     q.enqueue(95);
//     q.enqueue(8);
//     q.enqueue(-1);
//     q.enqueue(6);
//     q.enqueue(7);
//     q.enqueue(19);
//     q.enqueue(85);
//     q.enqueue(74);
//     display(q);
//     cout << "is empty - " << q.isEmpty() << endl;
//     q.enqueue(19);
//     cout << "is empty - " << q.isEmpty() << endl;
//     cout << "popped - " << q.dequeue() << endl;
//     cout << "popped - " << q.dequeue() << endl;
//     cout << "popped - " << q.dequeue() << endl;
//     cout << "popped - " << q.dequeue() << endl;
//     cout << "popped - " << q.dequeue() << endl;
//     cout << "popped - " << q.dequeue() << endl;
//     cout << "popped - " << q.dequeue() << endl;
//     cout << "popped - " << q.dequeue() << endl;
//     cout << "popped - " << q.dequeue() << endl;
//     cout << "popped - " << q.dequeue() << endl;
//     cout << "popped - " << q.dequeue() << endl;
//     cout << "popped - " << q.dequeue() << endl;
//     display(q);
//     q.enqueue(8);
//     q.enqueue(-1);
//     q.enqueue(6);
//     q.enqueue(85);
//     q.enqueue(74);
//     display(q);

//     cout << "front - " << q.getFront() << endl;
//     cout << "popped - " << q.dequeue() << endl;
//     cout << "front - " << q.getFront() << endl;
//     cout << "rear - " << q.getRear() << endl;
//     q.enqueue(41);
//     cout << "rear - " << q.getRear() << endl;
//     return 0;
// }

// ques-  implement stack with queue library
// #include <bits/stdc++.h>
// using namespace std;
// struct stackDS
// {
//     queue<int> q1;
//     int popF()
//     {
//         int temp = q1.front();
//         q1.pop();
//         return temp;
//     }
//     void pushF(int data)
//     {
//         queue<int> q2;
//         while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         q1.push(data);
//         while (!q2.empty())
//         {
//             q1.push(q2.front());
//             q2.pop();
//         }
//     }
//     int top()
//     {
//         return (q1.back());
//     }
//     int size()
//     {
//         return (q1.size());
//     }
// };
// int main()
// {
//     stackDS sQ;
//     sQ.pushF(17);
//     sQ.pushF(5);
//     sQ.pushF(9);
//     sQ.pushF(-4);
//     cout << sQ.size() << endl;
//     cout << sQ.top() << endl;
//     cout << sQ.popF() << endl;
//     cout << sQ.popF() << endl;
//     cout << sQ.popF() << endl;
//     cout << sQ.top() << endl;
//     return 0;
// }

// ques - reverse a queue
#include <bits/stdc++.h>
using namespace std;
queue<int> reverseQ(queue<int> q)
{
    stack<int> s;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    return q;
}
// recursive solution
void reverseRecursively(queue<int> &q)
{
    if (q.empty())
        return;
    int temp = q.front();
    q.pop();
    reverseRecursively(q);
    q.push(temp);
}
void display(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
int main()
{
    queue<int> q;
    q.push(15);
    q.push(5);
    q.push(10);
    q.push(9);
    q.push(2);
    display(q);
    // q = reverseQ(q);
    reverseRecursively(q);
    cout << "REVERSED !" << endl;
    display(q);
    return 0;
}