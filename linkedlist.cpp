// // Getting started with Linked list

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node()
//     {
//         this->data = 0;
//         this->next = NULL;
//     }

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// int main()
// {
//     Node *first = new Node(10);
//     Node *second = new Node(20);
//     Node *third = new Node(30);
//     Node *fourth = new Node(40);
//     Node *fifth = new Node(50);

//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     cout << "printing the LL" << endl;
//     print(first);
// }

// DAY - 2

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int value) : data(value), next(nullptr) {}
// };

// class LinkedList
// {
// public:
//     LinkedList() : head(nullptr), tail(nullptr) {}

//     // Function to append a node to the end of the list
//     void append(int value)
//     {
//         Node *newNode = new Node(value);
//         if (!head)
//         {
//             head = newNode;
//             tail = newNode;
//         }
//         else
//         {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     // Function to prepend a node to the beginning of the list
//     void prepend(int value)
//     {
//         Node *newNode = new Node(value);
//         if (!head)
//         {
//             head = newNode;
//             tail = newNode;
//         }
//         else
//         {
//             newNode->next = head;
//             head = newNode;
//         }
//     }

//     // Function to remove the first node in the list
//     void removeFirst()
//     {
//         if (!head)
//         {
//             std::cout << "List is empty. Cannot remove." << std::endl;
//             return;
//         }

//         Node *temp = head;
//         head = head->next;
//         delete temp;

//         if (!head)
//         {
//             tail = nullptr; // If the list is now empty
//         }
//     }

//     // Function to display the list
//     void display()
//     {
//         Node *current = head;
//         while (current)
//         {
//             std::cout << current->data << " -> ";
//             current = current->next;
//         }
//         std::cout << "nullptr" << std::endl;
//     }

// private:
//     Node *head;
//     Node *tail;
// };

// int main()
// {
//     LinkedList list;

//     list.append(1);
//     list.append(2);
//     list.append(3);

//     std::cout << "Linked List: ";
//     list.display();

//     list.prepend(0);
//     std::cout << "After prepending 0: ";
//     list.display();

//     list.removeFirst();
//     std::cout << "After removing the first node: ";
//     list.display();

//     return 0;
// }

// DAY - 3

// Finding the middle node of a linked list
// We'll use slow and fast method to find middle node of a linked list

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void print(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// Node *getMiddle(Node *&head)
// {
//     if (head == NULL)
//     {
//         cout << "Linked List is empty!" << endl;
//         return head;
//     }
//     if (head->next == NULL)
//     {
//         // there is only one node in LL
//         return head;
//     }

//     // LL have > 1 node
//     // lets apply slow and fast node rule
//     Node *slow = head;
//     Node *fast = head->next;

//     while (slow != NULL && fast != NULL)
//     {
//         fast = fast->next;
//         if (fast != NULL)
//         {
//             fast = fast->next;
//             slow = slow->next;
//         }
//     }
//     return slow;
// }

// int main()
// {
//     Node *head = new Node(10);
//     Node *second = new Node(20);
//     Node *third = new Node(30);
//     Node *fourth = new Node(40);
//     Node *fifth = new Node(50);
//     Node *sixth = new Node(60);

//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = NULL;

//     print(head);

//     cout << "Middle node is " << getMiddle(head)->data << endl;

//     return 0;
// }

// Reverse Linked list in a group of k
// we'll solve this problem using recursion method

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void print(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int getLength(Node *head)
// {
//     int len = 0;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         temp = temp->next;
//         len++;
//     }
//     return len;
// }

// Node *reverseKNodes(Node *&head, int k)
// {
//     if (head == NULL)
//     {
//         cout << "Linked List is empty!!" << endl;
//         return NULL;
//     }
//     int len = getLength(head);
//     if (k > len)
//     {
//         cout << "Enter valid value for k" << endl;
//         return head;
//     }

//     // if below this code executes, it means, Number of LL is >= k
//     // Step A: reverse first k nodes of LL
//     Node *prev = NULL;
//     Node *curr = head;
//     Node *forward = head->next;

//     int count = 0;

//     while (count < k)
//     {
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//         count++;
//     }

//     // Step B: Recursive call
//     if (forward != NULL)
//     {
//         // it means we still have nodes to reverse
//         head->next = reverseKNodes(forward, k);
//     }

//     // Step c: return head of the modified LL
//     return prev;
// }

// int main()
// {
//     Node *head = new Node(10);
//     Node *second = new Node(20);
//     Node *third = new Node(30);
//     Node *fourth = new Node(40);
//     Node *fifth = new Node(50);
//     Node *sixth = new Node(60);

//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = NULL;

//     print(head);

//     head = reverseKNodes(head, 3);
//     print(head);

//     return 0;
// }

/* ---------- DAY 4 ----------------- */

/* Detect & Delete loop
 ** Basic steps:
 -> Check loop is present in LL or not
 -> Starting point of loop
 -> Remove loop

 */

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void print(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// bool checkForLoop(Node *&head)
// {
//     if (head == NULL)
//     {
//         cout << "LL is empty" << endl;
//         return false;
//     }

//     Node *slow = head;
//     Node *fast = head;

//     while (fast != NULL)
//     {
//         fast = fast->next;
//         if (fast != NULL)
//         {
//             fast = fast->next;
//             slow = slow->next;
//         }

//         if (slow == fast)
//         {
//             // loop present
//             return true;
//         }
//     }
//     // If fast becomes NULL
//     return false;
// }

// int main()
// {
//     Node *head = new Node(10);
//     Node *second = new Node(20);
//     Node *third = new Node(30);
//     Node *fourth = new Node(40);
//     Node *fifth = new Node(50);
//     Node *sixth = new Node(60);
//     Node *seventh = new Node(70);
//     Node *eighth = new Node(80);
//     Node *ninth = new Node(90);

//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = seventh;
//     seventh->next = eighth;
//     eighth->next = ninth;
//     ninth->next = fifth;

//     cout << "Loop is present or not " << checkForLoop(head);

//     return 0;
// }

// Check Linked List is pelindrome or not
/* Approach
-> Find middle
-> Reverse LL after middle node
-> start comparing both sides

*/

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
    }
    cout << endl;
}

Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next = curr->next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool checkPelindrome(Node *&head)
{
    if (head = NULL)
    {
        cout << "Linked list is empty" << endl;
        return true;
    }
    if (head->next == NULL)
    {
        // only 1 node
        return true;
    }

    // >1 node in LL

    // Step A: Find middle node
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    // slow point is pinting to middle node
    // Step B: reverse LL after middle mode/slow node
    Node *reverseLLKaHead = reverse(slow->next);

    // join the reversed LL into the left part
    slow->next = reverseLLKaHead;

    // Step c: Start comparision
    Node *temp1 = head;
    Node *temp2 = reverseLLKaHead;
    while (temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            return false;
        }
        else
        {
            // if data is equal then move forward
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return true;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(300);
    Node *fourth = new Node(300);
    Node *fifth = new Node(20);
    Node *sixth = new Node(10);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    bool isPalindrome = checkPelindrome(head);

    if (isPalindrome)
    {
        cout << "Linked list is a valid palindrome!!" << endl;
    }
    else
    {
        cout << "Linked list is not a valid palidrome"
    }

    return 0;
}