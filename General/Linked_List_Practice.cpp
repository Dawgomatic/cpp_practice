#include<iostream>
#include<vector>

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
    SinglyLinkedListNode(int node_data) : data(node_data), next(nullptr) {}
};

void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* current = head;

    while (current != nullptr) {
        std::cout << current->data << std::endl;
        current = current->next;
    }
}

int main() {
    std::vector<int> data = {1, 2, 3};
    SinglyLinkedListNode* head = nullptr;
    SinglyLinkedListNode* current = nullptr;

    int x;

    switch(x)  {
        case 1:
            std::cout << "1" << std::endl;
            break;
        case 2:
            std::cout << "1" << std::endl;
            break;
        case 3:
            std::cout << "1" << std::endl;
            break;
    }

    // Create the linked list from the vector data
    for (int i = 0; i < data.size(); ++i) {
        if (head == nullptr) {
            // This is the first node. It becomes the head of the list.
            head = new SinglyLinkedListNode(data[i]);
            current = head;
        } else {
            // Create a new node and append it to the list.
            current->next = new SinglyLinkedListNode(data[i]);
            current = current->next; // Move the current pointer to the new node.
        }
    }

    // Print the linked list
    printLinkedList(head);

    // Free the allocated memory
    current = head;
    while (current != nullptr) {
        SinglyLinkedListNode* next = current->next;
        delete current;
        current = next;
    }
}
