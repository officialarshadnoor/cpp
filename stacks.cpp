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

// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;

// int minimumBracketReversals(const string &expression)
// {
//     int len = expression.length();

//     // If the length of the expression is odd, it's not possible to balance.
//     if (len % 2 != 0)
//     {
//         return -1;
//     }

//     stack<char> s;
//     for (char c : expression)
//     {
//         if (c == '{')
//         {
//             s.push(c);
//         }
//         else if (c == '}' && !s.empty() && s.top() == '{')
//         {
//             s.pop();
//         }
//         else
//         {
//             s.push(c);
//         }
//     }

//     int open_brackets = 0;   // Count of open brackets remaining in the stack.
//     int closed_brackets = 0; // Count of closed brackets remaining in the stack.

//     while (!s.empty())
//     {
//         if (s.top() == '{')
//         {
//             open_brackets++;
//         }
//         else
//         {
//             closed_brackets++;
//         }
//         s.pop();
//     }

//     // Calculate the minimum reversals required to balance the expression.
//     int min_reversals = (open_brackets + 1) / 2 + (closed_brackets + 1) / 2;

//     return min_reversals;
// }

// int main()
// {
//     string expression;
//     cout << "Enter the expression: ";
//     cin >> expression;

//     int minReversals = minimumBracketReversals(expression);

//     if (minReversals == -1)
//     {
//         cout << "The expression cannot be balanced." << endl;
//     }
//     else
//     {
//         cout << "Minimum bracket reversals required: " << minReversals << endl;
//     }

//     return 0;
// }

// Day 4 -  Stacks

/* Problem : Next greater node finding in stacks */

// #include <iostream>
// #include <vector>
// #include <stack>

// using namespace std;

// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };

// class Solution
// {
// public:
//     vector<int> nextLargerNodes(ListNode *head)
//     {
//         vector<int> ll;
//         while (head)
//         {
//             ll.push_back(head->val);
//             head = head->next;
//         }

//         stack<int> st;
//         vector<int> ans(ll.size(), 0);

//         for (int i = 0; i < ll.size(); ++i)
//         {
//             while (!st.empty() && ll[st.top()] < ll[i])
//             {
//                 // ith element is the next greater of the element present in stack
//                 int idx = st.top();
//                 st.pop();
//                 ans[idx] = ll[i];
//             }
//             st.push(i);
//         }
//         return ans;
//     }
// };

// int main()
// {
//     ListNode *head = new ListNode(2);
//     head->next = new ListNode(7);
//     head->next->next = new ListNode(4);
//     head->next->next->next = new ListNode(3);
//     head->next->next->next->next = new ListNode(5);

//     Solution solution;
//     vector<int> result = solution.nextLargerNodes(head);

//     for (int val : result)
//     {
//         cout << val << " ";
//     }

//     // Free memory for linked list
//     while (head)
//     {
//         ListNode *temp = head;
//         head = head->next;
//         delete temp;
//     }

//     return 0;
// }

// Celebrity problem solving in DSA
// -> A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of N people, find if there is a celebrity in the party or not

#include <iostream>
#include <stack>
using namespace std;

// Function to check if person A knows person B.
bool knows(int A, int B)
{
    return false;
}

int findCelebrity(int n)
{
    stack<int> people;

    // Push all people onto the stack.
    for (int i = 0; i < n; i++)
    {
        people.push(i);
    }

    // Eliminate candidates until only one potential celebrity remains.
    while (people.size() > 1)
    {
        int A = people.top();
        people.pop();
        int B = people.top();
        people.pop();

        if (knows(A, B))
        {
            // A knows B, so A cannot be the celebrity. B might be the celebrity.
            people.push(B);
        }
        else
        {
            // A doesn't know B, so B cannot be the celebrity. A might be the celebrity.
            people.push(A);
        }
    }

    int potentialCelebrity = people.top();

    // Check if the potential celebrity is indeed a celebrity.
    for (int i = 0; i < n; i++)
    {
        if (i != potentialCelebrity && (!knows(i, potentialCelebrity) || knows(potentialCelebrity, i)))
        {
            return -1; // No celebrity found.
        }
    }

    return potentialCelebrity; // Return the potential celebrity.
}

int main()
{
    int n;
    cout << "Enter the number of people at the party: ";
    cin >> n;

    int celebrity = findCelebrity(n);
    if (celebrity != -1)
    {
        cout << "The celebrity is person " << celebrity << endl;
    }
    else
    {
        cout << "No celebrity found at the party." << endl;
    }

    return 0;
}
