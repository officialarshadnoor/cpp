// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v(5);
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> v[i];
//     }
//     sort(v.begin(), v.end());
//     for (int i = 0; i < 5; i++)
//     {
//         cout << v[i] << " ";
//     }
// }

// bubble sort code

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int arr[6] = {5, 4, 6, 3, 2, 1};
//     int n = 6;

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     // sorting starts
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; i < n - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
//     cout << endl;
//     // printing sorted array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// sort string
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "AZYZXBDXJK";
    string str;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'X')
        {
            str.push_back(s[i]);
        }
    }
    // sorting with bubble sort
    for (int i = 0; i < str.length() - 1; i++)
    {
        for (int j = 0; j < str.length() - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                swap(str[j], str[j + 1]);
            }
        }
    }
    cout << endl;
    cout << str;
}