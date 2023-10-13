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

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList
{
public:
    LinkedList() : head(nullptr), tail(nullptr) {}

    // Function to append a node to the end of the list
    void append(int value)
    {
        Node *newNode = new Node(value);
        if (!head)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Function to prepend a node to the beginning of the list
    void prepend(int value)
    {
        Node *newNode = new Node(value);
        if (!head)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    // Function to remove the first node in the list
    void removeFirst()
    {
        if (!head)
        {
            std::cout << "List is empty. Cannot remove." << std::endl;
            return;
        }

        Node *temp = head;
        head = head->next;
        delete temp;

        if (!head)
        {
            tail = nullptr; // If the list is now empty
        }
    }

    // Function to display the list
    void display()
    {
        Node *current = head;
        while (current)
        {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }

private:
    Node *head;
    Node *tail;
};

int main()
{
    LinkedList list;

    list.append(1);
    list.append(2);
    list.append(3);

    std::cout << "Linked List: ";
    list.display();

    list.prepend(0);
    std::cout << "After prepending 0: ";
    list.display();

    list.removeFirst();
    std::cout << "After removing the first node: ";
    list.display();

    return 0;
}