// getting started with stacks
// it stores data in LIFO order (last in first out)

// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {
//     // creation
//     stack<int> st;

//     // insertion
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);

//     // remove
//     st.pop();

//     // check element on top
//     cout << "Element on top is : " << st.top() << endl;

//     // size
//     cout << "size of stack is: " << st.size() << endl;

//     // check element is empty
//     if (st.empty())
//         cout << "Stack is empty";
//     else
//         cout << "Stack is not empty";

//     return 0;
// }

//

// #include <iostream>
// #include <stack>
// using namespace std;

// class Stack
// {
// public:
//     int *arr;
//     int top;
//     int size;

//     Stack(int size)
//     {
//         arr = new int[size];
//         this->size = size;
//         top = -1;
//     }

//     // functions

//     void push(int data)
//     {
//         if (top < size - 1)
//         {
//             // space available
//             // now we can insert
//             top++;
//             arr[top] = data;
//         }
//         else
//         {
//             // when space is not available
//             cout << "Stack overflow" << endl;
//         }
//     }

//     void pop()
//     {
//         if (top == -1)
//         {
//             // it means the stack is empty
//             cout << "Stack underflow, can't delete element" << endl;
//         }
//         else
//         {
//             // stack is not empty
//             top--;
//         }
//     }

//     int getTop()
//     {
//         if (top == -1)
//         {
//             cout << "There is no element in the stack" << endl;
//             return -1; // or any suitable value to indicate an empty stack
//         }
//         else
//         {
//             return arr[top];
//         }
//     }

//     int getSize()
//     {
//         return size;
//     }

//     bool isEmpty()
//     {
//         return top == -1;
//     }
// };

// int main()
// {
//     Stack s(10);

//     // insertion
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);

//     while (!s.isEmpty())
//     {
//         cout << s.getTop() << " ";
//         s.pop();
//     }

//     return 0;
// }

//

// #include <iostream>
// #include <stack>
// using namespace std;

// class Stack
// {
// public:
//     int *arr;
//     int size;
//     int top1;
//     int top2;

//     Stack(int size)
//     {
//         arr = new int[size];
//         this->size = size;
//         top1 = -1;
//         top2 = size;
//     }

//     // functions

//     void push1(int data)
//     {
//         if (top2 - top1 == 1)
//         {
//             // space is not available
//             cout << "Overflow" << endl;
//         }
//         else
//         {
//             // space available
//             top1++;
//             arr[top1] = data;
//         }
//     }

//     void push2(int data)
//     {
//         if (top2 - top1 == 1)
//         {
//             // space is not available
//             cout << "Overflow" << endl;
//         }
//         else
//         {
//             top2--;
//             arr[top2] = data;
//         }
//     }

//     void pop1(int data)
//     {
//         if (top1 == -1)
//         {
//             // stack empty
//             cout << "Underflow in stack 1" << endl;
//         }
//         else
//         {
//             // stack not empty
//             top1--;
//         }
//     }

//     void pop2(int data)
//     {
//         if (top2 == size)
//         {
//             // stack 2 is empty
//             cout << "Underflow in stack 2" << endl;
//         }
//         else
//         {
//             // stack 2 is not empty
//             top2++;
//         }
//     }

//     void print()
//     {

//         cout << endl;
//         cout << "top1: " << top1 << endl;
//         cout << "top2: " << top2 << endl;
//         for (int i = 0; i < size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//     Stack s(10);

//     s.push1(10);
//     s.print();
//     s.push1(20);
//     s.print();
//     s.push1(30);
//     s.print();
//     s.push1(40);
//     s.print();
//     s.push1(50);
//     s.print();

//     s.push2(100);
//     s.print();
//     s.push2(110);
//     s.print();
//     s.push2(120);
//     s.print();

//     // Note: it is giving garbage value
//     return 0;
// }

// ------------ Day 2 ---------------------//

// Insert at bottom

// #include <iostream>
// #include <stack>
// using namespace std;

// void solve(stack<int> &s, int target)
// {
//     // base case
//     if (s.empty())
//     {
//         s.push(target);
//         return;
//     }
//     int topElement = s.top();
//     s.pop();
//     // rec cal
//     solve(s, target);

//     // BT
//     s.push(topElement);
// }

// void insertAtBottom(stack<int> &s)
// {
//     if (s.empty())
//     {
//         cout << "Stack is empty, cant insert at bottom" << endl;
//         return;
//     }

//     int target = s.top();
//     s.pop();
//     solve(s, target);
// }

// int main()
// {
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     insertAtBottom(s);

//     cout << "Printing" << endl;
//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;

//     return 0;
// }

// Reverse a stack
// we'll use recursion method for this
// Hint : Insert at bottom and recursion

// #include <iostream>
// #include <stack>
// using namespace std;

// void insertAtBottom(stack<int> &s, int target)
// {
//     // base case
//     if (s.empty())
//     {
//         s.push(target);
//         return;
//     }
//     int topElement = s.top();
//     s.pop();
//     // recursively insert the target at the bottom
//     insertAtBottom(s, target);
//     // Bring the topElement back to the top
//     s.push(topElement);
// }

// void reverseStack(stack<int> &s)
// {
//     // base case
//     if (s.empty())
//     {
//         return;
//     }

//     int target = s.top();
//     s.pop();

//     // reverse the rest of the stack
//     reverseStack(s);

//     // Insert the target at the bottom of the reversed stack
//     insertAtBottom(s, target);
// }

// int main()
// {
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     reverseStack(s);

//     cout << "Printing" << endl;
//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;
//     return 0;
// }

/* ----------- Day 3 ----------------- */

// Remove all adjacent string in stacks

// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;

// void removeAdjacentStrings(stack<string> &s)
// {
//     stack<string> tempStack;
//     while (!s.empty())
//     {
//         if (tempStack.empty() || s.top() != tempStack.top())
//         {
//             tempStack.push(s.top());
//         }
//         s.pop();
//     }

//     // Now, the tempStack contains the strings with adjacent duplicates removed.
//     // You can copy the contents back to the original stack if needed.
//     while (!tempStack.empty())
//     {
//         s.push(tempStack.top());
//         tempStack.pop();
//     }
// }

// int main()
// {
//     stack<string> stackOfStrings;
//     stackOfStrings.push("hello");
//     stackOfStrings.push("hello");
//     stackOfStrings.push("Arshad");
//     stackOfStrings.push("Arshad");
//     stackOfStrings.push("Noor");
//     stackOfStrings.push("Noor");
//     stackOfStrings.push("Noor");

//     removeAdjacentStrings(stackOfStrings);

//     cout << "Stack after removing adjacent duplicates:\n";
//     while (!stackOfStrings.empty())
//     {
//         cout << stackOfStrings.top() << endl;
//         stackOfStrings.pop();
//     }

//     return 0;
// }

// Minimum Bracket Reversal Program

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int minimumBracketReversals(const string &expression)
{
    int len = expression.length();

    // If the length of the expression is odd, it's not possible to balance.
    if (len % 2 != 0)
    {
        return -1;
    }

    stack<char> s;
    for (char c : expression)
    {
        if (c == '{')
        {
            s.push(c);
        }
        else if (c == '}' && !s.empty() && s.top() == '{')
        {
            s.pop();
        }
        else
        {
            s.push(c);
        }
    }

    int open_brackets = 0;   // Count of open brackets remaining in the stack.
    int closed_brackets = 0; // Count of closed brackets remaining in the stack.

    while (!s.empty())
    {
        if (s.top() == '{')
        {
            open_brackets++;
        }
        else
        {
            closed_brackets++;
        }
        s.pop();
    }

    // Calculate the minimum reversals required to balance the expression.
    int min_reversals = (open_brackets + 1) / 2 + (closed_brackets + 1) / 2;

    return min_reversals;
}

int main()
{
    string expression;
    cout << "Enter the expression: ";
    cin >> expression;

    int minReversals = minimumBracketReversals(expression);

    if (minReversals == -1)
    {
        cout << "The expression cannot be balanced." << endl;
    }
    else
    {
        cout << "Minimum bracket reversals required: " << minReversals << endl;
    }

    return 0;
}
