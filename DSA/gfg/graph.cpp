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
void printNetworkInBFS(vector<int> v[], int n, int root)
{
    queue<int> q;
    bool visited[n];
    for (int i = 0; i < n; i++)
        visited[i] = 0;
    q.push(root);
    visited[root] = 1;
    while (!q.empty())
    {
        cout << q.front() << " ";
        for (auto x : v[q.front()])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = 1;
            }
        }
        q.pop();
    }

    //---------Ssol is pending ------------do it again---- disconnected graph with no root given
    // for (int i = 0; i < n; i++)
    // {
    //     for (auto x : v[i])
    //     {
    //         if (!visited[x])
    //         {
    //             visited[x] = 1;
    //             q.push(x);
    //         }
    //     }
    // }
    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }
}
void printNetworkInDFS(vector<int> v[], int root, bool visited[])
{
    if (visited[root])
        return;
    visited[root] = true;
    cout << root << " ";
    for (auto i : v[root])
    {
        printNetworkInDFS(v, i, visited);
    }
}
bool detectCycle(vector<int> v[], int root, bool visited[], int parent)
{
    visited[root] = true;
    for (auto i : v[root])
    {
        if (!visited[i])
        {
            if (detectCycle(v, i, visited, root))
                return true;
        }
        else if (parent != i)
            return true;
    }
    return false;
}
bool DFSVistited(vector<int> v[], int n)
{
    bool visited[n];
    // int countComponents = 0;
    for (int i = 0; i < n; i++)
        visited[i] = 0;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            // countComponents++;
            // printNetworkInDFS(v, i, visited);
            return detectCycle(v, i, visited, -1);
        }
    }
    // cout << "total components are - " << countComponents << endl;
}
void shortestPath(vector<int> v[], int n, int source)
{
    queue<int> q;
    q.push(source);
    int countPathLen = 1;
    int lenArr[n];
    for (int i = 0; i < n; i++)
        lenArr[i] = -1; // initialise a negative array
    lenArr[source] = 0;
    while (!q.empty())
    {
        int curr = q.front();
        for (auto i : v[curr])
        {
            if (lenArr[i] < 0)
            {
                lenArr[i] = lenArr[curr] + 1;
                q.push(i);
            }
        }
        q.pop();
    }
    for (int i = 0; i < n; i++)
        cout << lenArr[i] << " ";
    cout << endl;
}
int main()
{
    int n = 6;
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
    // addEdge(v, 0, 1);
    // addEdge(v, 1, 3);
    // addEdge(v, 3, 2);
    // addEdge(v, 2, 0);
    // addEdge(v, 4, 5);
    // addEdge(v, 5, 6);
    // addEdge(v, 6, 4);

    // depth first search algo
    // addEdge(v, 0, 1);
    // addEdge(v, 0, 4);
    // addEdge(v, 1, 2);
    // addEdge(v, 2, 3);
    // addEdge(v, 4, 5);
    // addEdge(v, 5, 6);
    // addEdge(v, 6, 4);

    // DFS graph 2
    // addEdge(v, 0, 1);
    // addEdge(v, 0, 2);
    // addEdge(v, 1, 3);
    // addEdge(v, 1, 4);
    // addEdge(v, 2, 3);
    // addEdge(v, 4, 5);

    // DFS disconnected graph
    // addEdge(v, 0, 1);
    // addEdge(v, 0, 2);
    // addEdge(v, 1, 2);
    // addEdge(v, 3, 4);
    // shortest path graph
    addEdge(v, 0, 1);
    addEdge(v, 0, 2);
    // addEdge(v, 1, 2);
    addEdge(v, 1, 3);
    // addEdge(v, 2, 3);
    // shortest path graph 2
    // addEdge(v, 0, 1);
    // addEdge(v, 0, 2);
    // addEdge(v, 0, 4);
    // addEdge(v, 1, 3);
    // addEdge(v, 2, 3);
    // addEdge(v, 2, 4);
    // addEdge(v, 3, 5);
    // addEdge(v, 4, 5);
    // cycle detetct problem
    // addEdge(v, 0, 1);
    // addEdge(v, 1, 3);
    // addEdge(v, 1, 2);
    // addEdge(v, 2, 3);
    printGraph(v, n);
    // printNetworkInBFS(v, n, 0);
    DFSVistited(v, n);
    shortestPath(v, n, 0);
    cout << "cycle detected - " << DFSVistited(v, n) << endl;
    return 0;
}