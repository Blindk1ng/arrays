#include <iostream>

using namespace std;

int main() 
{
    int array = a[5][5], n, m;
        cin >> n >> m;

    for (int i = 0; i < n; i++)
       for (int j = 0; j < m; j++)
            cin >> array[i][j];
    int max = array[0][0];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (array[i][j] > max)
            {
                max = array[i][j];
            }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Max is = " << max;
}
