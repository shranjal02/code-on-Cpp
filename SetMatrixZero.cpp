#include <bits/stdc++.h>
using namespace std;

void setMatrix(vector<vector<int>> &matrix)
{
    int rows = matrix.size(), cols = matrix[0].size();
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {

                int index = i - 1;
                while (index >= 0)
                {
                    if (matrix[index][j] != 0)
                    {
                        matrix[index][j] = -1;
                    }
                    index--;
                }
                index = i + 1;
                while (index < rows)
                {
                    if (matrix[index][j] != 0)
                    {
                        matrix[index][j] = -1;
                    }
                    index++;
                }
                index = j - 1;
                while (index >= 0)
                {
                    if (matrix[i][index] != 0)
                    {
                        matrix[i][index] = -1;
                    }
                    index--;
                }
                index = j + 1;
                while (index < cols)
                {
                    if (matrix[i][index] != 0)
                    {
                        matrix[i][index] = -1;
                    }
                    index++;
                }
            }
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] <= 0)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {2, 0, 4}, {2, 5, 7}};
    setMatrix(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
