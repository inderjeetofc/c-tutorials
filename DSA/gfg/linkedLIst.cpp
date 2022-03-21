
// basic implementation linkedlist in cpp
// #include <bits/stdc++.h>
// using namespace std;
// typedef struct linkedList
// {
//     int data;
//     linkedList *next;
//     // defining constructor in struct is allowed .
//     linkedList(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// } node;
// int main()
// {
//     node *head = new node(89.36);
//     head->next = new node(745);
//     head->next->next = new node(54);
//     cout << head->next->data << "\n";
//     return 0;
// }

// q - traversal of linked list

// #include <bits/stdc++.h>
// using namespace std;
// typedef struct linkedList
// {
//     int data;
//     linkedList *next;
//     // defining constructor in struct is allowed .
//     linkedList(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// } node;
// //by reference
// // void llTraversal(node **head)
// // {
// //     while (*head != NULL)
// //     {
// //         cout << (*head)->data << " ";
// //         *head = (*head)->next;
// //     }
// // }
// //call by value
// void llTraversal(node *head)
// {
//     while (head != NULL)
//     {
//         cout << (head)->data << " ";
//         head = (head)->next;
//     }
// }
// int main()
// {
//     node *head = new node(89.36);
//     head->next = new node(745);
//     head->next->next = new node(54);
//     llTraversal(head);
//     llTraversal(head);
//     return 0;
// }

// // q - traversal of LL by recursion
// #include <bits/stdc++.h>
// using namespace std;
// typedef struct linkedList
// {
//     int data;
//     linkedList *next;
//     // defining constructor in struct is allowed .
//     linkedList(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// } node;
// void llTraversal(node *head)
// {
//     if (head == NULL)
//         return;
//     cout << head->data << " ";
//     llTraversal(head->next);
// }
// int main()
// {
//     node *head = new node(89.36);
//     head->next = new node(745);
//     head->next->next = new node(54);
//     llTraversal(head);
//     return 0;
// }
// q - operation on linked list
// #include <bits/stdc++.h>
// using namespace std;
// typedef struct linkedList
// {
//     int data;
//     linkedList *next;
//     // defining constructor in struct is allowed .
//     linkedList(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// } node;
// node *insertBegin(node *head, int data)
// {
//     node *dummy = new node(data);
//     dummy->next = head;
//     return dummy;
// }
// node *insertEnd(node *head, int data)
// {
//     node *dummy = new node(data);
//     node *ptr = head;
//     if (head == NULL)
//         return dummy;
//     while (ptr->next != NULL)
//         ptr = ptr->next;
//     ptr->next = dummy;
//     return ptr;
// }
// void llTraversal(node *head)
// {
//     if (head == NULL)
//         return;
//     cout << head->data << " ";
//     llTraversal(head->next);
// }
// int main()
// {
//     // node *head = new node(89.36);
//     // head->next = new node(745);
//     // head->next->next = new node(54);
//     // head = insertBegin(head, 46);
//     // head = insertBegin(head, 12);
//     // head = insertBegin(head, 96);
//     head = insertEnd(head, 52);
//     head = insertEnd(head, 13);
//     llTraversal(head);
//     return 0;
// }
// q -  delete head node and return new head
// corner cases are not handled in this program,
// #include <bits/stdc++.h>
// using namespace std;
// typedef struct linkedList
// {
//     int data;
//     linkedList *next;
//     // defining constructor in struct is allowed .
//     linkedList(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// } node;
// node *insertBegin(node *head, int data)
// {
//     node *dummy = new node(data);
//     dummy->next = head;
//     return dummy;
// }
// node *insertEnd(node *head, int data)
// {
//     node *dummy = new node(data);
//     node *ptr = head;
//     if (head == NULL)
//         return dummy;
//     while (ptr->next != NULL)
//         ptr = ptr->next;
//     ptr->next = dummy;
//     return head;
// }
// void insertMiddle(node *ptr, int data, int pos)
// {
//     node *dummy = new node(data);
//     for (int i = 0; i < pos - 2; i++)
//     {
//         ptr = ptr->next;
//     }
//     dummy->next = ptr->next;
//     ptr->next = dummy;
// }
// node *deleteBegin(node *head)
// {
//     if (head == NULL)
//         return NULL;
//     else
//     {
//         node *temp = head->next;
//         delete head; // deallocating is important
//         return temp;
//     }
// }
// void deleteEnd(node *ptr)
// {
//     while (ptr->next->next != NULL)
//         ptr = ptr->next;
//     delete ptr->next;
//     ptr->next = NULL;
// }
// void llTraversal(node *head)
// {
//     if (head == NULL)
//         return;
//     cout << head->data << " ";
//     llTraversal(head->next);
// }
// int searchLL(node *ptr, int key)
// {
//     // recursive sol
//     static int pos = 1;
//     if (ptr == NULL)
//         return -1;
//     if (ptr->data == key)
//         return pos;
//     pos++;
//     searchLL(ptr->next, key);
//     // int pos = 1;
//     // while (ptr != NULL)
//     // {
//     //     if (ptr->data == key)
//     //         return pos;
//     //     ptr = ptr->next;
//     //     pos++;
//     // }
//     // return -1;
// }
// int main()
// {
//     node *head = new node(89.36);
//     head->next = new node(745);
//     head->next->next = new node(54);
//     head = insertBegin(head, 46);
//     head = insertBegin(head, 12);
//     head = insertBegin(head, 96);
//     head = insertEnd(head, 52);
//     head = insertEnd(head, 13);
//     llTraversal(head);
//     head = deleteBegin(head);
//     head = deleteBegin(head);
//     cout << endl;
//     llTraversal(head);
//     deleteEnd(head);
//     deleteEnd(head);
//     cout << endl;
//     llTraversal(head);
//     insertMiddle(head, 3, 2);
//     cout << endl;
//     llTraversal(head);
//     cout << endl;
//     cout << searchLL(head, 745);
//     return 0;
// }

// q- doubly linked list implementatin
// #include <bits/stdc++.h>
// using namespace std;
// typedef struct linkedList
// {
//     int data;
//     linkedList *next;
//     linkedList *prev;
//     // defining constructor in struct is allowed .
//     linkedList(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// } node;
// node *insertEnd(node *head, int data)
// {
//     node *dummy = new node(data);
//     node *ptr = head;
//     if (head == NULL)
//         return dummy;
//     while (ptr->next != NULL)
//         ptr = ptr->next;
//     ptr->next = dummy;
//     dummy->prev = ptr;
//     return head;
// }
// void llTraversal(node *head)
// {
//     if (head == NULL)
//         return;
//     cout << head->data << " ";
//     llTraversal(head->next);
// }
// int main()
// {
//     node *head = new node(89.36);
//     head = insertEnd(head, 72);
//     head = insertEnd(head, 5);
//     head = insertEnd(head, -96);
//     llTraversal(head);
//     return 0;
// }

// q-reverse a doubly linked list
// #include <bits/stdc++.h>
// using namespace std;
// typedef struct linkedList
// {
//     int data;
//     linkedList *next;
//     linkedList *prev;
//     // defining constructor in struct is allowed .
//     linkedList(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// } node;
// node *insertEnd(node *head, int data)
// {
//     node *dummy = new node(data);
//     node *ptr = head;
//     if (head == NULL)
//         return dummy;
//     while (ptr->next != NULL)
//         ptr = ptr->next;
//     ptr->next = dummy;
//     dummy->prev = ptr;
//     return head;
// }
// node *reverse(node *ptr)
// {
//     node *temp;
//     while (ptr != NULL)
//     {
//         temp = ptr->prev;
//         ptr->prev = ptr->next;
//         ptr->next = temp;
//         ptr = ptr->prev;
//     }
//     return temp->prev;
// }
// node *deleteBegin(node *ptr)
// {
//     node *temp = ptr;
//     ptr->next->prev = NULL;
//     ptr = ptr->next;
//     delete temp;
//     return ptr;
// }
// void deleteLast(node *ptr)
// {
//     while (ptr->next != NULL)
//         ptr = ptr->next;
//     ptr->prev->next = NULL;
//     delete ptr;
// }
// void llTraversal(node *head)
// {
//     if (head == NULL)
//         return;
//     cout << head->data << " ";
//     llTraversal(head->next);
// }
// int main()
// {
//     node *head = new node(89.36);
//     head = insertEnd(head, 72);
//     head = insertEnd(head, 5);
//     head = insertEnd(head, -96);
//     llTraversal(head);
//     cout << endl;
//     head = reverse(head);
//     llTraversal(head);
//     cout << endl;
//     // head = deleteBegin(head);
//     // llTraversal(head);
//     // cout << endl;
//     // head = deleteBegin(head);
//     // llTraversal(head);
//     // cout << endl;
//     deleteLast(head);
//     llTraversal(head);
//     cout << endl;
//     return 0;
// }

// q-circular linked list
#include <bits/stdc++.h>
using namespace std;
typedef struct linkedList
{
    int data;
    linkedList *next;
    // defining constructor in struct is allowed .
    linkedList(int data)
    {
        this->data = data;
        this->next = NULL;
    }
} node;
node *insertEnd(node *head, int data)
{
    node *dummy = new node(data);
    node *ptr = head;
    if (head == NULL)
        return dummy;
    if (head->next == NULL)
    {
        head->next = dummy;
        dummy->next = head;
        return head;
    }
    while (ptr->next != head)
        ptr = ptr->next;
    ptr->next = dummy;
    dummy->next = head;
    return head;
}
void llTraversal(node *ptr)
{
    node *start = ptr;
    while (ptr->next != start)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << ptr->data << " ";
}
int main()
{
    node *head = new node(89.36);
    head = insertEnd(head, 72);
    head = insertEnd(head, 5);
    head = insertEnd(head, -96);
    llTraversal(head);
    cout << endl;
    return 0;
}