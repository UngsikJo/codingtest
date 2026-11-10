#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    int count = 1;

    for (int diagonal = 0; diagonal < n + m - 1; diagonal++) {
        int firstRow = max(0, diagonal - (m - 1));
        int lastRow = min(n - 1, diagonal);

        for (int row = firstRow; row <= lastRow; row++) {
            int col = diagonal - row;
            a[row][col] = count++;
        }
    }

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            cout << a[row][col] << ' ';
        }
        cout << '\n';
    }

    return 0;
}