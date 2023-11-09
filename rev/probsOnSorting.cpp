// replace with 0 to n-1

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {19, 12, 23, 8, 16};
    int n = 5;
    vector<int> v(n, 0); // 0 means not visited
    for (int i = 0; i < n; i++)
    {
        int min = INT_MAX;
        int mindx = -1;
        int x = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j] == 1)
                continue;
            else
            {
                if (min > arr[i])
                {
                    mindx = j;
                }
            }
        }
        arr[mindx] = x;
        x++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}