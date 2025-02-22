#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long T;
    cin >> T;
    while (T--)
    {
        long long rows, cols;
        cin >> rows >> cols;

        vector<vector<long long>> matrix(rows, vector<long long>(cols));
        for (auto &row : matrix)
        {
            for (auto &val : row)
            {
                cin >> val;
            }
        }

        // Compute row-wise sum
        vector<long long> rowSums(rows, 0);
        for (long long i = 0; i < rows; i++)
        {
            rowSums[i] = accumulate(matrix[i].begin(), matrix[i].end(), 0LL);
        }

        // Sort row indices by sum in descending order
        vector<long long> indices(rows);
        iota(indices.begin(), indices.end(), 0);
        sort(indices.begin(), indices.end(), [&](long long a, long long b)
             { return rowSums[a] > rowSums[b]; });

        // Calculate answer based on sorted order
        long long result = 0;
        for (long long i = 0; i < rows; i++)
        {
            result += rowSums[indices[i]] * (rows - 1 - i) * cols;
        }

        // Additional computation based on column position
        for (const auto &row : matrix)
        {
            for (long long i = 0; i < cols; i++)
            {
                result += row[i] * (cols - i);
            }
        }

        cout << result << '\n';
    }

    return 0;
}
