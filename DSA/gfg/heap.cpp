// #include <bits/stdc++.h>
// using namespace std;
// class MinHeap
// {
// public:
//     int *arr;
//     int size;
//     int capacity;
//     MinHeap(int c)
//     {
//         this->capacity = c;
//         this->size = 0;
//         this->arr = new int[c];
//     }
//     int left(int i)
//     {
//         return 2 * i + 1;
//     }
//     int right(int i)
//     {
//         return 2 * i + 2;
//     }
//     int parent(int i)
//     {
//         return floor((i - 1) / 2);
//     }
//     int insert(int data)
//     {
//         size++;
//         arr[size - 1] = data;
//         int index = size - 1;
//         int pIndex = parent(index);
//         while (arr[pIndex] > data && index >= 0)
//         {
//             swap(arr[pIndex], arr[index]);
//             index = pIndex;
//             pIndex = parent(index);
//         }
//         return index;
//     }
//     void display()
//     {
//         for (int i = 0; i < size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
//     void heapify(int wIndex)
//     {
//         while (wIndex < size)
//         {
//             if (arr[wIndex] > arr[left(wIndex)])
//             {
//                 swap(arr[wIndex], arr[left(wIndex)]);
//                 wIndex = left(wIndex);
//             }
//             else if (arr[wIndex] > arr[right(wIndex)])
//             {
//                 swap(arr[wIndex], arr[right(wIndex)]);
//                 wIndex = right(wIndex);
//             }
//             else
//                 break;
//         }
//     }
// };
// int main()
// {
//     MinHeap m(15);
//     m.insert(10);
//     m.insert(11);
//     m.insert(12);
//     m.insert(25);
//     m.insert(45);
//     m.insert(20);
//     m.insert(65);
//     m.insert(13);
//     m.insert(8);
//     m.insert(14);
//     m.display();
//     return 0;
// }
// note heap k sorted elements ques is left to do
// ques buy max items with given sum
// #include <bits/stdc++.h>
// using namespace std;
// int buyMaxItems(int arr[], int n, int sum)
// {
//     priority_queue<int, vector<int>, greater<int>> pq(arr, arr + n);
//     int res = 0;
//     while (!pq.empty())
//     {
//         if (sum < pq.top())
//             return res;
//         res++;
//         sum -= pq.top();
//         pq.pop();
//     }
//     return res;
// }
// int main()
// {
//     int arr[] = {1, 12, 5, 111, 200};
//     cout << "max items that can be bought is " << buyMaxItems(arr, 5, 10) << endl;
//     return 0;
// }

// ques find largest k elements in the heap
// #include <bits/stdc++.h>
// using namespace std;
// void kLargestElement(int arr[], int n, int k)
// {
//     // approach 1 - max heap
//     // time complexity is O(k*log(n))
//     //  priority_queue<int> pq(arr, arr + n); // max heap
//     //  while (k != 0)
//     //  {
//     //      cout << pq.top() << " ";
//     //      pq.pop();
//     //      k--;
//     //  }

//     // approach 2 -  with min heap
//     // time complexity is O(n-k)*log(k)
//     //  this has better time complexity
//     priority_queue<int, vector<int>, greater<int>> pq(arr, arr + k); // min heap
//     for (int i = k; i < n; i++)
//     {
//         if (arr[i] > pq.top())
//         {
//             pq.pop();
//             pq.push(arr[i]);
//         }
//     }
//     while (!pq.empty())
//     {
//         cout << pq.top() << " ";
//         pq.pop();
//     }
// }
// int main()
// {
//     int arr[] = {5, 15, 10, 20, 8, 25, 18};
//     kLargestElement(arr, 7, 3);
//     return 0;
// }
// ques find k closest element
#include <bits/stdc++.h>
using namespace std;
void kClosestElement(int arr[], int n, int x, int k)
{
    priority_queue<int> pq; // max heap
    int j = 0;
    while (j != k)
    {
        pq.push(arr[j]);
        j++;
    }
    for (int i = k; i < n; i++)
    {
        if (abs(arr[i] - x) < abs(pq.top() - x))
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}
int main()
{
    int arr[] = {100, 80, 10, 5, 70};
    kClosestElement(arr, 5, 2, 3);
    return 0;
}