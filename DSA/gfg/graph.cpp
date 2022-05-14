#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> v[], int x, int y)
{
    v[x].push_back(y);
    v[y].push_back(x);
}
void printGraph(vector<int> v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (auto x : v[i])
            cout << x << " ";
        cout << endl;
    }
}
void printNetworkInOrder(vector<int> v[], int n, int root)
{
    queue<int> q;
    bool visited[n];
    for (int i = 0; i < n; i++)
        visited[i] = 0;
    // q.push(root);
    // visited[root] = 1;
    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     for (auto x : v[q.front()])
    //     {
    //         if (!visited[x])
    //         {
    //             q.push(x);
    //             visited[x] = 1;
    //         }
    //     }
    //     q.pop();
    // }

    //---------Ssol is pending ------------do it again---- disconnected graph with no root given
    for (int i = 0; i < n; i++)
    {
        for (auto x : v[i])
        {
            if (!visited[x])
            {
                visited[x] = 1;
                q.push(x);
            }
        }
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}
int main()
{
    int n = 7;
    vector<int> v[n];
    // addEdge(v, 0, 1);
    // addEdge(v, 0, 2);
    // addEdge(v, 0, 5);
    // addEdge(v, 1, 3);
    // addEdge(v, 2, 4);
    // addEdge(v, 3, 5);
    // addEdge(v, 4, 5);
    // printGraph(v, n);

    // network for disconnected graph in printNetworkInOrder
    addEdge(v, 0, 1);
    addEdge(v, 1, 3);
    addEdge(v, 3, 2);
    addEdge(v, 2, 0);
    addEdge(v, 4, 5);
    addEdge(v, 5, 6);
    addEdge(v, 6, 4);
    printGraph(v, n);
    printNetworkInOrder(v, n, 0);
    return 0;
}