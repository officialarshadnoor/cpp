// #include <iostream>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int rno;
//     float marks;

//     Student(string n, int r, float m)
//     {
//         this->name = n;
//         this->rno = r;
//         this->marks = m;
//     }
// };

// int main()
// {
//     Student s("Arshad", 44, 81.2);
//     // s.name = "Arshad Noor";
//     // s.rno = 44;
//     // s.marks = 80.1;
//     cout << s.name << endl;
// }

// Linked List initialization

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;

//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// int main()
// {
//     // 10 20 30 40
//     // Node a;
//     // a.val = 10;
//     // Node b;
//     // b.val = 20;
//     // Node c;
//     // c.val = 30;
//     // Node d;
//     // d.val = 40;

//     // forming linked list
//     // a.next = &b;
//     // b.next = &c;
//     // c.next = &d;
//     // d.next = NULL;

//     Node a(10);
//     Node b(20);
//     Node c(30);
//     Node d(40);

//     // forming ll
//     a.next = &b;
//     b.next = &c;
//     c.next = &d;
//     d.next = NULL;

//     Node temp = a;
//     while (temp.next != NULL)
//     {
//         cout << temp.val << " ";
//         temp = *(temp.next);
//     }
// }

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;

//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void display(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int size(Node *head)
// {
//     Node *temp = head;
//     int n = 0;
//     while (temp != NULL)
//     {
//         n++;
//         temp = temp->next;
//     }

//     return n;
// }

// void displayrec(Node *head)
// {
//     if (head == NULL)
//         return;
//     cout << head->val << " ";
//     displayrec(head->next);
// }

// int main()
// {
//     Node *a = new Node(10);
//     Node *b = new Node(20);
//     Node *c = new Node(30);
//     Node *d = new Node(40);
//     Node *e = new Node(50);

//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;

//     // display(a);

//     // display using recursion
//     displayrec(a);
//     // cout << size(a);
// }

// Linked List Class

// #include <iostream>
// using namespace std;

// class Node
// { // User defined data type
// public:
//     int val;
//     Node *next;

//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// class LinkedList
// { // User defined data structure
// public:
//     Node *head;
//     Node *tail;
//     int size;
//     LinkedList()
//     {
//         head = tail = NULL;
//         size = 0;
//     }

//     void insertAtEnd(int val)
//     {
//         Node *temp = new Node(val);
//         if (size = 0)
//             head = tail = temp;
//         else
//         {
//             tail->next = temp;
//             tail = temp;
//         }
//         size++;
//     }

//     void display()
//     {
//         Node *temp = head;
//         while (temp != NULL)
//         {
//             cout << temp->val << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// void insertAtEnd(Node *head, int val)
// {
//     Node *t = new Node(val);
//     Node *temp = head;
//     while (head->next != NULL)
//         head = head->next;
//     temp->next = t;
// }

// void insertAtBeg(Node *head, int val)
// {
//     Node *t = new Node(val);
// }

// void insertAtIndex(Node *head, int val, int ind)
// {
//     Node *t = new Node(val);
//     Node *temp = head;
//     int count = 0;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//         count++;
//         if (count == ind)
//         {
//             temp->next = t;
//             break;
//         }
//     }
// }
// int main()
// {
//     LinkedList ll;
//     ll.insertAtEnd(10);
//     ll.insertAtEnd(20);
//     ll.display();
//     ll.insertAtEnd(30);
//     ll.insertAtEnd(40);
//     ll.display();
// }

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void display(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val;
//         temp = temp->next;
//     }
// };

// void deletenode(Node *head, Node *target)
// {
//     Node *temp = head;
//     while (temp->next != target)
//     {
//         temp = temp->next;
//     }
//     temp->next = temp->next->next;
// }

// int main()
// {
//     Node *a = new Node(10);
//     Node *b = new Node(20);
//     Node *c = new Node(30);
//     Node *d = new Node(40);
//     Node *e = new Node(50);

//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;

//     display(a);
//     delete (a, d);
//     display(a);
// }

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;

//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// class LinkedList
// {
// public:
//     Node *head, *tail;

//     LinkedList()
//     {
//         head = NULL;
//         tail = NULL;
//     }

//     void display()
//     {
//         Node *temp = head;
//         while (temp != NULL)
//         {
//             cout << temp->val << " ";
//             temp = temp->next;
//         }
//     }

//     void addFirst(int val)
//     {
//         Node *temp = new Node(val);
//         if (head == NULL)
//             head = temp;
//         else
//         {
//             temp->next = head;
//             head = temp;
//         }
//         if (tail == NULL)
//             tail = head;
//     }
//     void addLast(int val)
//     {
//         Node *temp = new Node(val);
//         if (tail == NULL)
//             tail = temp;
//         else if (head == NULL)
//             head = tail;
//         else
//         {
//             tail->next = temp;
//             tail = temp;
//         }
//     }

//     // inserting on a perticular index
//     void addAtIndex(int idx, int val)
//     {
//         if (idx == 0)
//             addFirst(val);
//         else
//         {
//             Node *temp = head;
//             while (idx--)
//             {
//                 temp = temp->next;
//             }
//             Node *newnode = new Node(val);
//             newnode->next = temp->next;
//             temp->next = newnode;
//         }
//     }

//     void getAtIndex(int idx)
//     {
//         if (idx == 0)
//             cout << head->val;
//         else
//         {
//             Node *temp = head;
//             while (idx--)
//                 temp = temp->next;
//             cout << temp->val << endl;
//         }
//     }
// };

// int main()
// {
//     LinkedList ll;
//     ll.addFirst(1);
//     ll.addFirst(2);
//     ll.addFirst(3);
//     ll.addFirst(4);
//     // ll.display();
//     ll.addLast(13);
//     ll.addLast(14);
//     ll.addLast(15);
//     ll.addLast(16);
//     // ll.display();
//     ll.addAtIndex(3, 50);
//     ll.addAtIndex(5, 2);
//     ll.display();
// }

/* Doubly Linked List */
// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *prev;

//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// void display(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     Node *a = new Node(10);
//     Node *b = new Node(20);
//     Node *c = new Node(30);
//     Node *d = new Node(40);
//     Node *e = new Node(50);

//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;
//     e->prev = d;
//     d->prev = c;
//     c->prev = b;
//     b->prev = a;
//     display(a);
// }

// Doubly Linked List class

#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DLL
{
public:
    Node *head;
    Node *tail;
    int size;

    DLL()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val)
    {
    }
};