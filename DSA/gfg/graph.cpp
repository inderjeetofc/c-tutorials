// #include <bits/stdc++.h>
// using namespace std;
// void addEdge(vector<int> v[], int x, int y)
// {
//     v[x].push_back(y);
//     v[y].push_back(x);
// }
// void addEdgeDirected(vector<int> v[], int x, int y)
// {
//     v[x].push_back(y);
// }
// void printGraph(vector<int> v[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (auto x : v[i])
//             cout << x << " ";
//         cout << endl;
//     }
// }
// void printNetworkInBFS(vector<int> v[], int n, int root)
// {
//     queue<int> q;
//     bool visited[n];
//     for (int i = 0; i < n; i++)
//         visited[i] = 0;
//     q.push(root);
//     visited[root] = 1;
//     while (!q.empty())
//     {
//         cout << q.front() << " ";
//         for (auto x : v[q.front()])
//         {
//             if (!visited[x])
//             {
//                 q.push(x);
//                 visited[x] = 1;
//             }
//         }
//         q.pop();
//     }

//     //---------Ssol is pending ------------do it again---- disconnected graph with no root given
//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (auto x : v[i])
//     //     {
//     //         if (!visited[x])
//     //         {
//     //             visited[x] = 1;
//     //             q.push(x);
//     //         }
//     //     }
//     // }
//     // while (!q.empty())
//     // {
//     //     cout << q.front() << " ";
//     //     q.pop();
//     // }
// }
// void printNetworkInDFS(vector<int> v[], int root, bool visited[])
// {
//     if (visited[root])
//         return;
//     visited[root] = true;
//     cout << root << " ";
//     for (auto i : v[root])
//     {
//         printNetworkInDFS(v, i, visited);
//     }
// }
// bool detectCycle(vector<int> v[], int root, bool visited[], int parent)
// {
//     visited[root] = true;
//     for (auto i : v[root])
//     {
//         if (!visited[i])
//         {
//             if (detectCycle(v, i, visited, root))
//                 return true;
//         }
//         else if (parent != i)
//             return true;
//     }
//     return false;
// }
// bool detectCycleDirected(vector<int> v[], int root, bool visited[], bool recStack[])
// {
//     visited[root] = true;
//     recStack[root] = true;
//     for (auto i : v[root])
//     {
//         if (!visited[i])
//         {
//             if (detectCycleDirected(v, i, visited, recStack))
//                 return true;
//         }
//         else if (recStack[i])
//             return true;
//     }
//     recStack[root] = false;
//     return false;
// }
// bool DFSVistited(vector<int> v[], int n)
// {
//     bool visited[n];
//     bool recStack[n]; // used for directed graph cycle detection
//     // int countComponents = 0;
//     for (int i = 0; i < n; i++)
//     {
//         visited[i] = 0;
//         recStack[i] = 0;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (!visited[i])
//         {
//             // countComponents++;
//             // printNetworkInDFS(v, i, visited);
//             // return detectCycle(v, i, visited, -1); //detect cycle undirected graph
//             if (detectCycleDirected(v, i, visited, recStack))
//                 return true;
//         }
//     }
//     return false;
//     // cout << "total components are - " << countComponents << endl;
// }
// void shortestPath(vector<int> v[], int n, int source)
// {
//     queue<int> q;
//     q.push(source);
//     int countPathLen = 1;
//     int lenArr[n];
//     for (int i = 0; i < n; i++)
//         lenArr[i] = -1; // initialise a negative array
//     lenArr[source] = 0;
//     while (!q.empty())
//     {
//         int curr = q.front();
//         for (auto i : v[curr])
//         {
//             if (lenArr[i] < 0)
//             {
//                 lenArr[i] = lenArr[curr] + 1;
//                 q.push(i);
//             }
//         }
//         q.pop();
//     }
//     for (int i = 0; i < n; i++)
//         cout << lenArr[i] << " ";
//     cout << endl;
// }
// int main()
// {
//     int n = 6;
//     vector<int> v[n];
//     // addEdge(v, 0, 1);
//     // addEdge(v, 0, 2);
//     // addEdge(v, 0, 5);
//     // addEdge(v, 1, 3);
//     // addEdge(v, 2, 4);
//     // addEdge(v, 3, 5);
//     // addEdge(v, 4, 5);
//     // printGraph(v, n);

//     // network for disconnected graph in printNetworkInOrder
//     // addEdge(v, 0, 1);
//     // addEdge(v, 1, 3);
//     // addEdge(v, 3, 2);
//     // addEdge(v, 2, 0);
//     // addEdge(v, 4, 5);
//     // addEdge(v, 5, 6);
//     // addEdge(v, 6, 4);

//     // depth first search algo
//     // addEdge(v, 0, 1);
//     // addEdge(v, 0, 4);
//     // addEdge(v, 1, 2);
//     // addEdge(v, 2, 3);
//     // addEdge(v, 4, 5);
//     // addEdge(v, 5, 6);
//     // addEdge(v, 6, 4);

//     // DFS graph 2
//     // addEdge(v, 0, 1);
//     // addEdge(v, 0, 2);
//     // addEdge(v, 1, 3);
//     // addEdge(v, 1, 4);
//     // addEdge(v, 2, 3);
//     // addEdge(v, 4, 5);

//     // DFS disconnected graph
//     // addEdge(v, 0, 1);
//     // addEdge(v, 0, 2);
//     // addEdge(v, 1, 2);
//     // addEdge(v, 3, 4);

//     // shortest path graph
//     // addEdge(v, 0, 1);
//     // addEdge(v, 0, 2);
//     // addEdge(v, 1, 2);
//     // addEdge(v, 1, 3);
//     // addEdge(v, 2, 3);

//     // shortest path graph 2
//     // addEdge(v, 0, 1);
//     // addEdge(v, 0, 2);
//     // addEdge(v, 0, 4);
//     // addEdge(v, 1, 3);
//     // addEdge(v, 2, 3);
//     // addEdge(v, 2, 4);
//     // addEdge(v, 3, 5);
//     // addEdge(v, 4, 5);

//     // cycle detetct problem
//     // addEdge(v, 0, 1);
//     // addEdge(v, 1, 3);
//     // addEdge(v, 1, 2);
//     // addEdge(v, 2, 3);
//     // printGraph(v, n);

//     // printNetworkInBFS(v, n, 0);
//     // DFSVistited(v, n);
//     // shortestPath(v, n, 0);
//     // cout << "cycle detected - " << DFSVistited(v, n) << endl;

//     // generate directed graph
//     addEdgeDirected(v, 0, 1);
//     addEdgeDirected(v, 2, 1);
//     addEdgeDirected(v, 2, 3);
//     addEdgeDirected(v, 3, 4);
//     addEdgeDirected(v, 4, 5);
//     addEdgeDirected(v, 5, 3);
//     // addEdgeDirected(v, 2, 3);
//     // addEdgeDirected(v, 3, 4);
//     // addEdgeDirected(v, 4, 5);
//     // addEdgeDirected(v, 5, 2);
//     // addEdgeDirected(v, 5, 3);
//     printGraph(v, n);
//     cout << "cycle detected - " << DFSVistited(v, n) << endl;
//     return 0;
// }

// next program kyunki kaafi lamba gogya tha ifrst waala
#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> v[], int x, int y)
{
    v[x].push_back(y);
    v[y].push_back(x);
}
void addEdgeDirected(vector<int> v[], int x, int y)
{
    v[x].push_back(y);
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
// topological sorting - print in order of dependency - only for acyclic graph
// kahn's algorithm
void topologicalSorting(vector<int> v[], int n)
{
    // note  kahn's algo only works for acyclic graph
    queue<int> q;
    int inDeg[n];
    for (int i = 0; i < n; i++)
        inDeg[i] = 0;
    for (int i = 0; i < n; i++)
    {
        for (auto j : v[i])
            inDeg[j]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (inDeg[i] == 0)
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int curr = q.front();
        cout << curr << " ";
        for (auto i : v[curr])
        {
            inDeg[i]--;
            if (inDeg[i] == 0)
                q.push(i);
        }
        q.pop();
    }
}
// note  kahn's algo only works for acyclic graph
//  for cyclic graph we need to add a count variable
//  - -------the count variable should be equal to vertices when queue is empty if not then there is cycle in graph
bool topologicalCycleDetect(vector<int> v[], int n)
{
    queue<int> q;
    int inDeg[n];
    int count = 0;
    for (int i = 0; i < n; i++)
        inDeg[i] = 0;
    for (int i = 0; i < n; i++)
    {
        for (auto j : v[i])
            inDeg[j]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (inDeg[i] == 0)
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int curr = q.front();
        for (auto i : v[curr])
        {
            inDeg[i]--;
            if (inDeg[i] == 0)
                q.push(i);
        }
        q.pop();
        count++;
    }
    return (count != n);
}
//------globally defined for follwing topological DFS
// bool visited[5];
// stack<int> s;
// void topologicalSortDFS(vector<int> v[], int root)
// {
//     visited[root] = 1;
//     for (auto i : v[root])
//     {
//         if (!visited[i])
//             topologicalSortDFS(v, i);
//     }
//     s.push(root);
//     return;
// }
// void DFSvisited(vector<int> v[], int n)
// {
//     for (int i = 0; i < n; i++)
//         visited[i] = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (!visited[i])
//             topologicalSortDFS(v, i);
//     }
//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
// }

void shortestPathDAGWeighted(int weightGraph[4][4], int source)
{
    int n = 4;
    queue<int> q;
    int inDeg[n];
    int count[n];
    for (int i = 0; i < n; i++)
    {
        inDeg[i] = 0;
        count[i] = INT_MAX;
    }
    count[source] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (weightGraph[i][j] > 0)
                inDeg[j]++;
        }
    }
    q.push(source);
    while (!q.empty())
    {
        int curr = q.front();
        for (int i = 0; i < n; i++)
        {
            if (weightGraph[curr][i] > 0)
            {
                inDeg[i]--;
                if (inDeg[i] == 0)
                    q.push(i);
                // calculate min distance
                count[i] = min(count[i], count[curr] + weightGraph[curr][i]);
            }
        }
        q.pop();
    }
    // algo for shortest dist weighted
    for (int i = 0; i < n; i++)
    {
        cout << count[i] << " ";
    }
}
// ---------pending...........firse krna wid prims algo
int minSpanningTree(int weightGraph[5][5], int source)
{
    int n = 5;
    vector<int> v;
    v.push_back(source);
    bool visited[n];
    for (int i = 0; i < n; i++)
        visited[i] = 0;
    visited[source] = 1;
    int minLenI = 1;
    int minLen = 0;
    int edges = n - 1;
    int flag = 0;
    while (edges > 0)
    {
        // v.push_back(source);
        for (auto i : v)
        {
            for (int j = 0; j < n; j++)
            {
                if (!visited[j] && weightGraph[i][j] > 0)
                {
                    if (flag == 0)
                    {
                        source = i;
                        minLenI = j;
                        flag = 1;
                    }
                    if (weightGraph[i][j] <= weightGraph[source][minLenI])
                    {
                        source = i;
                        minLenI = j;
                    }
                }
            }
        }
        visited[minLenI] = 1;
        minLen = minLen + weightGraph[source][minLenI];
        v.push_back(minLenI);
        // source = minLenI;
        flag = 0;
        edges--;
    }
    return minLen;
}
// algo for shortest distance
void dijkstraAlgo(vector<int> graph[], int n, int source)
{
    vector<int> dist(n, INT_MAX);
    vector<bool> visited(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && graph[source][i] != 0 && graph[source][i] < dist[i])
        {
            source = i;
        }
    }
}
int main()
{
    int n = 5;
    vector<int> v[n];
    // cyclic directed graph
    // addEdgeDirected(v, 0, 2);
    // addEdgeDirected(v, 0, 3);
    // addEdgeDirected(v, 1, 3);
    // addEdgeDirected(v, 3, 4);
    // addEdgeDirected(v, 4, 1);
    // graph for topological DFS
    addEdgeDirected(v, 0, 1);
    addEdgeDirected(v, 1, 3);
    addEdgeDirected(v, 2, 3);
    addEdgeDirected(v, 2, 4);
    addEdgeDirected(v, 3, 4);
    // printGraph(v, n);
    // topologicalSorting(v, n);
    // cout << "detect cycle with kahn's algo : - " << topologicalCycleDetect(v, n);
    // topological dfs
    // DFSvisited(v, n);
    //  weighted graph
    // int weightGraph[4][4] = {{0, 1, 0, 0},
    //                          {0, 0, 3, 2},
    //                          {0, 0, 0, 4},
    //                          {0, 0, 0, 0}};
    // int weightGraph[6][6] = {{0, 2, 0, 0, 1, 0},
    //                          {0, 0, 3, 0, 0, 0},
    //                          {0, 0, 0, 6, 0, 0},
    //                          {0, 0, 0, 0, 0, 0},
    //                          {0, 0, 2, 0, 0, 4},
    //                          {0, 0, 0, 1, 0, 0}};
    // shortestPathDAGWeighted(weightGraph, 1);
    // graph for min spanning tree
    int weightGraph[5][5] = {{0, 2, 0, 6, 0},
                             {2, 0, 3, 8, 5},
                             {0, 3, 0, 0, 7},
                             {6, 8, 0, 0, 9},
                             {0, 5, 7, 9, 0}};
    cout << "Min span is : - " << minSpanningTree(weightGraph, 0) << endl;
    return 0;
}