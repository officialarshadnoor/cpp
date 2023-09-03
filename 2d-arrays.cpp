// Getting start with 2d arrays

#include <iostream>
using namespace std;
main()
{
    int arr[4][2] = {
        {10, 11},
        {20, 21},
        {30, 31},
        {40, 41}};

    int i, j;

    cout << "Printing a 2D Array:\n";
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "\t" << arr[i][j];
        }
        cout << endl;
    }
}

// 2d arrays according to user input
#include <iostream>
using namespace std;
main()
{
    int s[2][2];
    int i, j;
    cout << "\n2D Array Input:\n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "\ns[" << i << "][" << j << "]=  ";
            cin >> s[i][j]; // we are taking input from user
        }
    }

    cout << "\nThe 2-D Array is:\n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "\t" << s[i][j];
        }
        cout << endl;
    }
}

// C program to print elements of Three-Dimensional Array

#include <stdio.h>

int main(void)
{
    // initializing the 3-dimensional array
    int x[2][3][2] = {{{0, 1}, {2, 3}, {4, 5}},
                      {{6, 7}, {8, 9}, {10, 11}}};

    // output each element's value
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                printf("Element at x[%i][%i][%i] = %d\n", i,
                       j, k, x[i][j][k]);
            }
        }
    }
    return (0);
}

// Use of nested loop in arrays

// C++ Program to display all elements
// of an initialised two dimensional array

#include <iostream>
using namespace std;

int main()
{
    int test[3][2] = {{2, -5}, {4, 0}, {9, 1}};

    // use of nested for loop
    // access rows of the array
    for (int i = 0; i < 3; ++i)
    {

        // access columns of the array
        for (int j = 0; j < 2; ++j)
        {
            cout << "test[" << i << "][" << j << "] = " << test[i][j] << endl;
        }
    }

    return 0;
}
