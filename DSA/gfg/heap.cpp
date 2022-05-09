#include <bits/stdc++.h>
using namespace std;
class MinHeap
{
public:
    int *arr;
    int size;
    int capacity;
    MinHeap(int c)
    {
        this->capacity = c;
        this->size = 0;
        this->arr = new int[c];
    }
    int left(int i)
    {
        return 2 * i + 1;
    }
    int right(int i)
    {
        return 2 * i + 2;
    }
    int parent(int i)
    {
        return floor((i - 1) / 2);
    }
    int insert(int data)
    {
        size++;
        arr[size - 1] = data;
        int index = size - 1;
        int pIndex = parent(index);
        while (arr[pIndex] > data && index >= 0)
        {
            swap(arr[pIndex], arr[index]);
            index = pIndex;
            pIndex = parent(index);
        }
        return index;
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void heapify(int wIndex)
    {
        while (wIndex < size)
        {
            if (arr[wIndex] > arr[left(wIndex)])
            {
                swap(arr[wIndex], arr[left(wIndex)]);
                wIndex = left(wIndex);
            }
            else if (arr[wIndex] > arr[right(wIndex)])
            {
                swap(arr[wIndex], arr[right(wIndex)]);
                wIndex = right(wIndex);
            }
            else
                break;
        }
    }
};
int main()
{
    MinHeap m(15);
    m.insert(10);
    m.insert(11);
    m.insert(12);
    m.insert(25);
    m.insert(45);
    m.insert(20);
    m.insert(65);
    m.insert(13);
    m.insert(8);
    m.insert(14);
    m.display();
    return 0;
}