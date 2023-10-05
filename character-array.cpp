// Character Arrays

#include <iostream>
#include <cstring>
using namespace std;
// int main()
// {
// cout << "What is your name?" << endl;
// char name[100];
// cin >> name;
// // Printing a greeting message
// cout << "Hello " << name << ", Great to see you!" << endl;

// char name[100];
// cin >> name;
// for (int i = 0; i < 6; i++)
// {
//     cout << name[i] << " ";
// }

// }

// for calculating the length
int getLength(char name[])
{
    int length = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}
// int main()
// {
//     // Length of string

//     char name[100];
//     cin >> name;

//     cout << "Length of input value is " << getLength(name) << endl;

//     return 0;
// }

// Reverse a string
// Arshad
// Reverse - > dahsrA

// void reverseCharArray(char name[])
// {
//     int i = 0;
//     int n = getLength(name);
//     int j = n - 1;

//     while (i <= j)
//     {
//         swap(name[i], name[j]);
//         i++; // have to increase ith index value
//         j--; // have to decrease jth index value
//     }
// }

// int main()
// {
//     char name[100];
//     cout << "Enter your name\n";
//     cin >> name;
//     cout << "Before reverse: " << name << endl;
//     reverseCharArray(name);
//     cout << "After reverse: " << name << endl;
// }

// Replace spaces by @ in any sentence
// #include <cstring>
// void replaceSpace(char sentence[])
// {
//     int i = 0;
//     int n = strlen(sentence);

//     for (int i = 0; i < n; i++)
//     {
//         if (sentence[i] == ' ')
//         {
//             sentence[i] = '@';
//         }
//     }
// }

// int main()
// {
//     char sentence[100];
//     cin.getline(sentence, 100); // to get input with spaces

//     replaceSpace(sentence);
//     cout << "Result: " << sentence << endl;
// }

// Pelindrome check
bool checkPelindrome(char word[])
{
    int i = 0;
    int n = strlen(word);
    int j = n - 1;

    while (i <= j)
    {
        if (word[i] != word[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
        return true;
    }
}

int main()
{
    char word[100];
    cin >> word;
    cout << "Pelindrome check: ";
    if (checkPelindrome(word))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}