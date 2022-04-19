// ques deque - double ended queue using array
// #include <bits/stdc++.h>
// using namespace std;
// struct dequeDS
// {
//     int capacity;
//     int *arr;
//     int rear;
//     int front;
//     dequeDS(int cap)
//     {
//         capacity = cap;
//         front = 0;
//         rear = 0;
//         arr = new int[capacity];
//     }
//     void insertRear(int data)
//     {
//         if (!isFull())
//         {
//             arr[rear] = data;
//             rear++;
//         }
//         else
//             cout << "queue is full !" << endl;
//     }
//     int deleteRear()
//     {
//         int temp = arr[rear];
//         rear--;
//         return temp;
//     }
//     void insertFront(int data)
//     {
//         if (!isFull())
//         {
//             for (int i = rear; i >= 0; i--)
//             {
//                 arr[i + 1] = arr[i];
//             }
//             rear++;
//             arr[front] = data;
//         }
//         else
//             cout << "queue is full !" << endl;
//     }
//     int deleteFront()
//     {
//         int temp = arr[front];
//         for (int i = 1; i < rear; i++)
//         {
//             arr[i - 1] = arr[i];
//         }
//         rear--;
//         return temp;
//     }
//     void insertFrontCircular(int data)
//     {
//         if (!isFullCircular())
//         {
//             front = (capacity + front - 1) % capacity;
//             arr[front] = data;
//         }
//         else
//             cout << "queue is full !" << endl;
//     }
//     void insertRearCircular(int data)
//     {
//         if (!isFullCircular())
//         {
//             arr[rear] = data;
//             rear = (rear + 1) % capacity;
//         }
//         else
//             cout << "queue is full !" << endl;
//     }
//     int deleteFrontCircular()
//     {
//         int temp = arr[front];
//         front = (front + 1) % capacity;
//         return temp;
//     }
//     int deleteRearCircular()
//     {
//         int temp = arr[rear - 1];
//         rear--;
//         return temp;
//     }
//     int getSize()
//     {
//         return rear - front;
//     }
//     int getFront()
//     {
//         return arr[front];
//     }
//     int getRear()
//     {
//         return arr[rear];
//     }
//     int isEmpty()
//     {
//         return (front == rear);
//     }
//     int isFull()
//     {
//         return (rear - front >= capacity);
//     }
//     int isFullCircular()
//     {
//         if ((rear + 1) % capacity == front || ((front + capacity - 1) % capacity == rear))
//             return true;
//         return false;
//     }
//     bool isEmptyCircular()
//     {
//         if (front == rear)
//             return true;
//         return false;
//     }
// };
// void display(dequeDS dq)
// {
//     for (int i = 0; i < dq.getSize(); i++)
//         cout << dq.arr[i] << " ";
//     cout << endl;
// }
// void displayCircular(dequeDS dq)
// {
//     for (int i = dq.front; i != dq.rear; i = (i + 1) % dq.capacity)
//         cout << dq.arr[i] << " ";
//     cout << endl;
// }
// int main()
// {
//     dequeDS dq(7);
//     // linear queries
//     //  cout << dq.isEmpty() << endl;
//     //  dq.insertFront(15);
//     //  dq.insertFront(24);
//     //  dq.insertFront(78);
//     //  dq.insertFront(1);
//     //  dq.insertRear(2);
//     //  dq.insertRear(89);
//     //  dq.insertRear(99);
//     //  dq.insertRear(-26);
//     //  cout << dq.getSize() << endl;
//     //  cout << dq.isFull() << endl;
//     //  display(dq);
//     //  dq.deleteFront();
//     //  dq.deleteRear();
//     //  display(dq);
//     //  cout << dq.isFull() << endl;
//     // circular queries
//     cout << dq.isEmptyCircular() << endl;
//     dq.insertFrontCircular(47);
//     dq.insertFrontCircular(4);
//     dq.insertFrontCircular(9);
//     dq.insertRearCircular(-7);
//     dq.insertRearCircular(-8);
//     dq.insertRearCircular(94);
//     dq.insertFrontCircular(7);
//     cout << dq.isFullCircular() << endl;
//     displayCircular(dq);
//     cout << dq.deleteFrontCircular() << endl;
//     cout << dq.deleteFrontCircular() << endl;
//     cout << dq.deleteRearCircular() << endl;
//     cout << dq.deleteFrontCircular() << endl;
//     cout << dq.deleteFrontCircular() << endl;
//     cout << dq.isEmptyCircular() << endl;
//     dq.insertFrontCircular(8);
//     dq.insertFrontCircular(14);
//     dq.insertFrontCircular(63);
//     displayCircular(dq);

//     cout << dq.deleteFrontCircular() << endl;
//     cout << dq.deleteFrontCircular() << endl;
//     cout << dq.deleteFrontCircular() << endl;
//     cout << dq.deleteFrontCircular() << endl;
//     cout << dq.isEmptyCircular() << endl;
//     cout << dq.isFullCircular() << endl;

//     // displayCircular(dq);

//     return 0;
// }

// QUE - CREATE A DATA STRUTURE TO INSERT MIN AND INSERT MAX ELEMENTS
// #include <bits/stdc++.h>
// using namespace std;
// struct dequeDS
// {
//     deque<int> dq;
//     //---- insert min elements in front front ----
//     void insertMin(int data)
//     {
//         dq.push_front(data);
//     }
//     //---- insert max elements in front front ----
//     void insertMax(int data)
//     {
//         dq.push_back(data);
//     }
//     int extractMin()
//     {
//         int temp = dq.front();
//         dq.pop_front();
//         return temp;
//     }
//     int extractMax()
//     {
//         int temp = dq.back();
//         dq.pop_back();
//         return temp;
//     }
//     int getMin()
//     {
//         return dq.front();
//     }
//     int getMax()
//     {
//         return dq.back();
//     }
// };
// void display(dequeDS dq)
// {
//     for (auto i : dq.dq)
//         cout << i << " ";
//     cout << endl;
// }
// int main()
// {
//     dequeDS dq;
//     dq.insertMin(9);
//     dq.insertMin(7);
//     dq.insertMin(4);
//     dq.insertMax(12);
//     dq.insertMax(15);
//     dq.insertMax(20);
//     display(dq);
//     cout << dq.getMin() << endl;
//     cout << dq.getMax() << endl;
//     dq.extractMax();
//     dq.extractMin();
//     cout << dq.getMin() << endl;
//     cout << dq.getMax() << endl;
//     return 0;
// }

// que - max in all subarray of size k
// firse krna nhi smjh aaya mujhe
// #include <bits/stdc++.h>
// using namespace std;
// void maxSubArray(int arr[], int n, int k)
// {
//     deque<int> q;
//     // q.push(0);
//     int count = 1;
//     for (int i = 0; i <= n; i++)
//     {
//         if (count > 2)
//             cout << arr[q.front()] << " ";
//         if (arr[q.front()] > arr[i])
//             q.push_back(i);
//         else
//         {
//             while (!q.empty())
//                 q.pop_back();
//             q.push_back(i);
//         }
//         count++;
//     }
// }
// int main()
// {
//     // int arr[] = {10, 8, 5, 12, 15, 7, 6};
//     int arr[] = {20, 40, 30, 10, 60};
//     maxSubArray(arr, 5, 3);
//     return 0;
// }