#include <bits/stdc++.h>
using namespace std;
// undirected graph
void createAdjList(vector<int> v[], int x, int y)
{
    v[x].push_back(y);
    v[y].push_back(x);
}
void createAdjListDirected(vector<int> v[], int x, int y)
{
    v[x].push_back(y);
}
void printBFS(vector<int> v[], bool visited[], int root)
{
    // solution using queue
    queue<int> q;
    q.push(root);
    visited[root] = true;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        for (auto x : v[curr])
        {
            if (!visited[x])
            {
                visited[x] = true;
                q.push(x);
            }
        }
    }
    //  following would work but not a good approach as youare hardcoding vertices
    //  for (int i = 0; i < n; i++)
    //  {
    //      if (!visited[i])
    //          cout << i << " ";
    //      visited[i] = 1;
    //      for (auto itr = v[i].begin(); itr != v[i].end(); itr++)
    //      {
    //          if (!visited[*itr])
    //          {
    //              cout << *itr << " ";
    //              visited[*itr] = 1;
    //          }
    //      }
    //  }
    return;
}
void printDFS(vector<int> v[], bool visited[], int root)
{
    // if (visited[root])
    //     return;
    visited[root] = true;
    cout << root << " ";
    for (auto x : v[root])
    {
        if (!visited[x])
            printDFS(v, visited, x);
    }
    return;
}
// void shortestPath(vector<int> v[], bool visited[], int root)
void shortestPath(vector<int> v[], int root, int n)
{
    // shortest path method 1- not effective as you are not printing the length in order of index
    // queue<int> q;
    // q.push(root);
    // q.push(-1);
    // visited[root] = true;
    // int length = 0;
    // while (q.size() > 1)
    // {
    //     if (q.front() == -1)
    //     {
    //         q.push(-1);
    //         length++;
    //     }
    //     else
    //     {
    //         cout << length << " ";
    //         int curr = q.front();
    //         for (auto x : v[curr])
    //         {
    //             if (!visited[x])
    //             {
    //                 q.push(x);
    //                 visited[x] = true;
    //             }
    //         }
    //     }
    //     q.pop();
    // }
    // shortest path method 2 with length array
    int length[n];
    for (int i = 0; i < n; i++)
        length[i] = -1;
    queue<int> q;
    q.push(root);
    length[root] = 0;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        for (auto x : v[curr])
        {
            if (length[x] < 0)
            {
                q.push(x);
                length[x] = length[curr] + 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << length[i] << " ";
}
bool detectCycle(vector<int> v[], bool visited[], int root, int parent)
{
    visited[root] = true;
    for (auto x : v[root])
    {
        if (!visited[x])
        {
            if (detectCycle(v, visited, x, root))
                return true;
        }
        else if (parent != x)
            return true;
    }
    return false;
}
bool detectCycleDirected(vector<int> v[], bool visited[], int root, bool parent[])
{
    visited[root] = true;
    parent[root] = true;
    for (auto x : v[root])
    {
        if (!visited[x])
        {
            if (detectCycleDirected(v, visited, x, parent))
                return true;
        }
        else if (parent[x])
        {
            return true;
        }
    }
    parent[root] = false;
    return false;
}
bool detectCycleBFS(vector<int> v[], bool visited[], int root, int n)
{
    queue<int> q;
    q.push(root);
    int parent[n];
    visited[root] = true;
    parent[root] = 1;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        for (auto x : v[curr])
        {
            if (!visited[x])
            {
                visited[x] = true;
                parent[x] = curr;
                q.push(x);
            }
            else if (x != parent[curr])
                return true;
        }
    }
    return false;
}
// min spanning tree prob - self solution not prims algo
int minSpanningTree(vector<int> v[], bool visited[], int weight[][5], int root, int n, int minLen)
{
    visited[root] = true;
    queue<int> q;
    q.push(root);
    int check[n];
    int flag = false;
    for (int i = 0; i < n; i++)
        check[i] = INT_MAX;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        minLen += check[curr];
        int minIn;
        int minWt = INT_MAX;
        for (auto x : v[curr])
        {
            if (!visited[x])
            {
                flag = true;
                if (check[x] > weight[curr][x])
                    check[x] = weight[curr][x];
                if (minWt > check[x])
                {
                    minWt = check[x];
                    minIn = x;
                }
            }
        }
        cout << minIn << endl;
        // if (!visited[minIn])
        // {
        // minLen += minWt;
        if (flag)
        {
            visited[minIn] = true;
            q.push(minIn);
            minWt = INT_MAX;
        }
        flag = false;
        // }
        // if (minWt != INT_MAX)
        // else
        // minLen += check[minIn];
    }
    return minLen;
}
int minSpanningTreeDijkstra(vector<int> v[], int n, bool visited[], int root, int distance[], int weight[][4])
{
    queue<int> q;
    q.push(root);
    int minLen = 0;
    visited[root] = true;
    int minWt;
    if (distance[root] == INT_MAX)
    {
        distance[root] = 0;
        minWt = INT_MAX;
    }
    while (!q.empty())
    {
        int curr = q.front();
        int minIn;
        q.pop();
        minLen += distance[curr];
        for (auto x : v[curr])
        {
            if (!visited[x])
            {
                visited[x] = true;
                if (distance[x] > distance[curr] + weight[curr][x])
                    distance[x] = distance[curr] + weight[curr][x];
                if (minWt > distance[x])
                {
                    minWt = distance[x];
                    minIn = x;
                }
                q.push(x);
            }
            else if (x != parent[curr])
                return true;
        }
    }
    return false;
}
// visited array create function
// void createVisited(vector<int> v[], int n)//defination for all other cases
void createVisited(vector<int> v[], int n, int weight[][5]) // defination for min spanning tree problem
{
    bool visited[n];
    int minLen = 0; // only used for min spanning tree prob
    // for detecting cycle in directed graph only use parent array
    // bool parent[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
        // parent[i] = false; // for detecting cycle in directed graph only use parent array
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            // count++; // to count total diconnecte graphs
            //         // printBFS(v, visited, i);   //for BFS traversal
            //         // printDFS(v, visited, i); // for DFS traversal
            //         // shortestPath(v, visited, i);    // shortest path methid 1
            //         // method 2 for shortest path doesnt require visited array . hence called from main func directly
            //         //----to detect cycle DFS---
            //         // cout << "the graph has cycle : " << detectCycle(v, visited, i, i) << endl;
            //         // break;
            //         // detect cycle BFS
            //         // cout << "the graph has cycle : " << detectCycleBFS(v, visited, i, n) << endl;
            //         // break;
            //         //----to detect cycle DFS directed--
            //         // cout << "the graph has cycle : " << detectCycleDirected(v, visited, i, parent) << endl;
            //         //-----min spanning tree call prims algo ---pending
            // minLen = minLen + minSpanningTree(v, visited, weight, i, n, 0);
            // cout << "Min length of spanning tree is - " << minLen << endl;
        }
    }
    // cout << "Number of connected graphs are - " << count << endl;
    return;
}
// minimum distance in weighted graph
void minDistWeightedGraph(vector<int> v[], int n, int root, int weight[][6])
{
    int length[n];
    for (int i = 0; i < n; i++)
        length[i] = INT_MAX;
    queue<int> q;
    q.push(root);
    length[root] = 0;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        for (auto x : v[curr])
        {
            if (length[x] > length[curr] + weight[curr][x])
            {
                length[x] = length[curr] + weight[curr][x];
                q.push(x);
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << length[i] << " ";
    cout << endl;
}
int main()
{
    // int n = 4;
    // vector<int> v[n];
    // graph for BFS
    // createAdjList(v, 0, 1);
    // createAdjList(v, 0, 2);
    // createAdjList(v, 1, 2);
    // createAdjList(v, 1, 3);
    // createAdjList(v, 2, 3);
    // createAdjList(v, 2, 4);
    // createAdjList(v, 3, 4);
    // createAdjList(v, 5, 6);
    // createAdjList(v, 5, 7);
    // createAdjList(v, 6, 7);

    // graph for DFS eg-1
    // createAdjList(v, 0, 1);
    // createAdjList(v, 0, 2);
    // createAdjList(v, 1, 3);
    // createAdjList(v, 2, 3);
    // createAdjList(v, 1, 4);
    // createAdjList(v, 4, 5);

    // graph for DFS eg-1
    // createAdjList(v, 0, 1);
    // createAdjList(v, 0, 4);
    // createAdjList(v, 1, 2);
    // createAdjList(v, 2, 3);
    // createAdjList(v, 4, 5);
    // createAdjList(v, 5, 6);

    // graph for DFS eg-3 2 disconnected graph
    // createAdjList(v, 0, 3);
    // createAdjList(v, 0, 1);
    // createAdjList(v, 1, 3);
    // createAdjList(v, 2, 4);

    // graph for shortest path
    // createAdjList(v, 0, 1);
    // createAdjList(v, 0, 2);
    // createAdjList(v, 1, 2);
    // createAdjList(v, 1, 3);
    // createAdjList(v, 2, 3);

    // graph for shortest path eg -2
    // createAdjList(v, 0, 1);
    // createAdjList(v, 0, 2);
    // createAdjList(v, 0, 4);
    // createAdjList(v, 1, 3);
    // createAdjList(v, 2, 3);
    // createAdjList(v, 2, 4);
    // createAdjList(v, 3, 5);
    // createAdjList(v, 4, 5);
    // shortestPath(v, 0, n); // shortest path methid 2

    // graph to detect cycle
    // createAdjList(v, 0, 1);
    // createAdjList(v, 0, 3);
    // createAdjList(v, 1, 2);
    // createAdjList(v, 1, 3);
    // createAdjList(v, 2, 3);

    int n = 5;
    vector<int> v[n];
    // detect cycle directed graph
    // createAdjListDirected(v, 0, 1);
    // createAdjListDirected(v, 2, 1);
    // createAdjListDirected(v, 2, 3);
    // createAdjListDirected(v, 3, 4);
    // createAdjListDirected(v, 4, 5);
    // createAdjListDirected(v, 5, 3);

    // detect cycle directed graph eg-2
    // createAdjListDirected(v, 0, 1);
    // createAdjListDirected(v, 2, 1);

    // detect cycle directed graph eg-3
    // createAdjListDirected(v, 0, 1);
    // createAdjListDirected(v, 1, 2);
    // createAdjListDirected(v, 2, 3);
    // createAdjListDirected(v, 3, 1);
    // createVisited(v, n);

    // minimum distance in weighted graph
    // int weight[][4] = {
    //     {0, 1, 0, 0},
    //     {0, 0, 3, 2},
    //     {0, 0, 0, 4},
    //     {0, 0, 0, 0},
    // };
    // groph for min weighted dist prob
    // createAdjListDirected(v, 0, 1);
    // createAdjListDirected(v, 1, 2);
    // createAdjListDirected(v, 2, 3);
    // createAdjListDirected(v, 1, 3);

    // groph for min weighted dist prob graph eg- 2
    // createAdjListDirected(v, 0, 1);
    // createAdjListDirected(v, 1, 2);
    // createAdjListDirected(v, 2, 3);
    // createAdjListDirected(v, 0, 4);
    // createAdjListDirected(v, 4, 2);
    // createAdjListDirected(v, 4, 5);
    // createAdjListDirected(v, 5, 3);
    // int weight[][6] = {
    //     {0, 2, 0, 0, 1, 0},
    //     {0, 0, 3, 0, 0, 0},
    //     {0, 0, 0, 6, 0, 0},
    //     {0, 0, 0, 0, 0, 0},
    //     {0, 0, 2, 0, 0, 4},
    //     {0, 0, 0, 1, 0, 0},
    // };
    // minDistWeightedGraph(v, n, 0, weight);

    // min spanning tree prob controller
    // createAdjList(v, 0, 1);
    // createAdjList(v, 0, 2);
    // createAdjList(v, 1, 3);
    // createAdjList(v, 1, 2);
    // createAdjList(v, 2, 3);
    // int weight[][4] = {
    //     {0, 5, 8, 0},
    //     {5, 0, 10, 15},
    //     {8, 10, 0, 20},
    //     {0, 15, 20, 0},
    // };
    // min spanning tree prob controller eg-2
    createAdjList(v, 0, 1);
    createAdjList(v, 0, 2);
    createAdjList(v, 1, 3);
    createAdjList(v, 1, 4);
    createAdjList(v, 2, 4);
    createAdjList(v, 3, 4);
    int weight[][5] = {
        {0, 8, 9, 0, 0},
        {8, 0, 0, 10, 3},
        {9, 0, 0, 0, 5},
        {0, 10, 0, 0, 6},
        {0, 3, 5, 6, 0},
    };
    createVisited(v, n, weight);
    return 0;
}
