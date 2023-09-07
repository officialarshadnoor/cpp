// String

// #include <iostream>
// using namespace std;

// removing same adjacent characer from string
// ex - abbaca  - > ca

// class Solution
// {
// public:
//     string removeDuplicates(string s)
//     {
//         string ans = "";
//         int i = 0;

//         while (i < s.length())
//         {
//             if (ans.length() >= 0)
//             {
//                 if (ans[ans.length() - 1] == s[i])
//                 {
//                     ans.pop_back();
//                 }
//                 else
//                 {
//                     ans.push_back(s[i]);
//                 }
//             }
//             else
//             {
//                 ans.pop_back(s[i]);
//             }
//             i++;
//         }
//         return ans;
//     }
// };

// Remove all adjacent duplicates in string
// class Solution
// {
// public:
//     string removeOccurences(string s, string part)
//     {
//         int pos = s.find(part);
//         while (pos != string::npos)
//         {
//             s.erase(pos, part.length());
//         }
//         return s;
//     }
// };

// Program to reverse a string
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string str;
//     cout << "Enter a string: ";
//     cin >> str;

//     int len = str.length();
//     for (int i = 0; i < len / 2; i++)
//     {
//         char temp = str[i];
//         str[i] = str[len - i - 1];
//         str[len - i - 1] = temp;
//     }

//     cout << "Reversed string: " << str << endl;
//     return 0;
// }

// Program to count vowels and consonants
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string str;
//     cout << "Enter a string: ";
//     cin >> str;

//     int vowels = 0, consonants = 0;
//     int len = str.length();

// // This is simple method
//     for (int i = 0; i < len; i++)
//     {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' | str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
//         {
//             vowels++;
//         }
//         else
//         {
//             consonants++;
//         }
//     }

// This is another method for the same
// for (char ch : str)
// {
//     if (isalpha(ch))
//     {
//         char lowerCh = tolower(ch);
//         if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u')
//         {
//             vowels++;
//         }
//         else
//         {
//             consonants++;
//         }
//     }
// }
//     cout << "Vovels: " << vowels << endl;
//     cout << "Consonants: " << consonants << endl;
//     return 0;
// }

// New method to check pelindrome
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string str;
//     cout << "Enter a string: ";
//     cin >> str;

//     bool isPalindrome = true;
//     int len = str.length();

//     for (int i = 0; i < len - i - 1; i++)
//     {
//         if (str[i] != str[len - i - 1])
//         {
//             isPalindrome = false;
//             break;
//         }
//     }

//     if (isPalindrome)
//     {
//         cout << "It's a palindrome" << endl;
//     }
//     else
//     {
//         cout << "It's not a palindrome" << endl;
//     }
//     return 0;
// }

// Problem : Finding the substring in a sentence
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string text, substring;
//     cout << "Enter a text: ";
//     getline(cin, text); // we've used getline to get lines with space
//     cout << "\nEnter a substring to find: ";
//     cin >> substring;

//     size_t found = text.find(substring);
//     size_t pos = 0;

//     while (found != string::npos)
//     {
//         cout << "Found at position: " << found << endl;
//         pos = found + 1;
//         found = text.find(substring, pos);
//     }
//     return 0;
// }

// Problem :  Replace substring in any sentence
// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     string text, oldSubstr, newSubstr;
//     cout << "Enter a text: ";
//     getline(cin, text);
//     cout << "\nEnter the substring to replace: " << endl;
//     cin >> oldSubstr;
//     cout << "\nEnter the new substring: ";
//     cin >> newSubstr;

//     size_t found = text.find(oldSubstr);
//     while (found != string::npos)
//     {
//         text.replace(found, oldSubstr.length(), newSubstr);
//         found = text.find(oldSubstr, found + newSubstr.length());
//     }
//     cout << "Modified text: " << text << endl;

//     return 0;
// }

// Problem : Counting the words in any sentance
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int wordCount = 0;
    bool inWord = false;

    for (char c : sentence)
    {
        if (isspace(c))
        {
            inWord = false;
        }
        else if (!inWord)
        {
            wordCount++;
            inWord = true;
        }
    }

    cout << "Number of words: " << wordCount << endl;

    return 0;
}
