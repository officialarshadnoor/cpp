<<<<<<< HEAD
// pointers
=======
// pointers -- We use pointers to allocate memory dynamically
>>>>>>> ecc0be87317dca7f9e67660e0189bd98d3bcf806

// Declare a Pointer and Assign a Value

// #include <iostream>

// int main() {
//     int x = 42;
//     int* ptr = &x;

//     std::cout << "Value pointed to by ptr: " << *ptr << std::endl;

//     return 0;
// }


// // Swap Two Integers Using Pointers:

// #include <iostream>

// void swap(int* a, int* b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int x = 5, y = 10;
//     std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;
    
//     swap(&x, &y);
    
//     std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

//     return 0;
// }


// Dynamic Array Using Pointers:

// #include <iostream>

// int main() {
//     int size;
//     std::cout << "Enter the size of the array: ";
//     std::cin >> size;

//     int* arr = new int[size];

//     for (int i = 0; i < size; i++) {
//         arr[i] = i * 2;
//     }

//     std::cout << "Array elements: ";
//     for (int i = 0; i < size; i++) {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;

//     delete[] arr;

//     return 0;
// }


// // Linked list with pointers

// #include <iostream>

// struct Node {
//     int data;
//     Node* next;
// };

// int main() {
//     Node* head = nullptr;
//     Node* second = nullptr;
//     Node* third = nullptr;

//     head = new Node();
//     second = new Node();
//     third = new Node();

//     head->data = 1;
//     head->next = second;

//     second->data = 2;
//     second->next = third;

//     third->data = 3;
//     third->next = nullptr;

//     // Traversal
//     Node* current = head;
//     while (current != nullptr) {
//         std::cout << current->data << " ";
//         current = current->next;
//     }
//     std::cout << std::endl;

//     delete head;
//     delete second;
//     delete third;

//     return 0;
// }


// Circular linked list problem

#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void insert(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        newNode->next = newNode;
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        head = newNode;
    }
}

void deleteNode(Node*& head, int val) {
    if (!head) {
        return;
    }

    Node* temp = head;
    Node* prev = nullptr;

    while (temp->data != val) {
        if (temp->next == head) {
            std::cout << "Value not found in the circular linked list." << std::endl;
            return;
        }
        prev = temp;
        temp = temp->next;
    }

    if (temp == head) {
        Node* last = head;
        while (last->next != head) {
            last = last->next;
        }
        last->next = head->next;
        head = head->next;
    } else {
        prev->next = temp->next;
    }

    delete temp;
}

void display(Node* head) {
    if (!head) {
        return;
    }

    Node* temp = head;
    do {
        std::cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr;

    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);

    std::cout << "Circular Linked List: ";
    display(head);

    deleteNode(head, 3);
    std::cout << "Circular Linked List after deleting 3: ";
    display(head);

    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> ecc0be87317dca7f9e67660e0189bd98d3bcf806
