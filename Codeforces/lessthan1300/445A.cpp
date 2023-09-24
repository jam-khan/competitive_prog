#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<char> >& graphMap, int i, int j, char piece) {

    if (i < 0 or j < 0 or i >= graphMap.size() or j >= graphMap[0].size())
        return;
    


    if (graphMap[i][j] != '.')
        return;
    
    graphMap[i][j] = piece;

    dfs(graphMap, i - 1, j, (piece == 'W') ? 'B': 'W');
    dfs(graphMap, i + 1, j, (piece == 'W') ? 'B': 'W');
    dfs(graphMap, i, j - 1, (piece == 'W') ? 'B': 'W');
    dfs(graphMap, i, j + 1, (piece == 'W') ? 'B': 'W');

    return;
}

int main() {
    int n, m;
    cin >> n;
    cin >> m;

    vector<vector<char> > graph(n, vector<char>(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> graph[i][j];

    // Now, you can use the 'graph' vector in your code.

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (graph[i][j] == '.')
                dfs(graph, i, j, 'B');

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << graph[i][j];
        cout << endl;
    }    

    return 0;
}
