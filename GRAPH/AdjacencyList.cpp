#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int v, e;
    cin >> v >> e;
    vector<int> arr[v + 1];
    while (e--)
    {
        int e1, e2;
        cin >> e1 >> e2;
        arr[e1].push_back(e2);
        arr[e2].push_back(e1);
    }
    for (int i = 0; i <= v; i++)
    {
        cout << i << "->";
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << "->";
        }
        cout << endl;
    }

    return 0;
}