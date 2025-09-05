#include <iostream>
#include <malloc.h>
using namespace std;

struct node {
    int data;
    struct node *right;
    struct node *left;
};

struct node *createNode(int data) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->right = NULL;
    newnode->left = NULL;
    return newnode;
}

struct node *insertAtRight(struct node *head, int data) {
    struct node *newnode = createNode(data);
    struct node *current = head;
    while (current->right != NULL) {
        current = current->right;
    }
    current->right = newnode;
    return newnode;
}

struct node *insertAtLeft(struct node *head, int data) {
    struct node *newnode = createNode(data);
    struct node *current = head;
    while (current->left != NULL) {
        current = current->left;
    }
    current->left = newnode;
    return newnode;
}

void printRightList(struct node *head) {
    cout << "Right linked list: ";
    struct node *current = head;
    while (current != NULL) {
        cout << current->data << " - ";
        current = current->right;
    }
    cout << "NULL" << endl;
}

void printLeftList(struct node *head) {
    cout << "Left linked list: ";
    struct node *current = head;
    while (current != NULL) {
        cout << current->data << " - ";
        current = current->left;
    }
    cout << "NULL" << endl;
}


int main(void) {
    struct node *head = NULL;
    char ans;

    cout << "Do you want to create head node (y/n)? : ";
    cin >> ans;

    if (ans == 'y') {
        int data;
        cout << "Enter data for head : ";
        cin >> data;
        head = createNode(data);

        char ans2;
        cout << "Do you want to continue to create its leaf (y/n)? : ";
        cin >> ans2;

        while (ans2 == 'y') {
            char ans3;
            int data2;
            cout << "Which side you want to create node (r/l)? : ";
            cin >> ans3;
            cout << "Enter data: ";
            cin >> data2;

            if (ans3 == 'r') {
                if (head->right == NULL) {
                    head->right = createNode(data2);
                } else {
                    insertAtRight(head, data2);
                }
            } else if (ans3 == 'l') {
                if (head->left == NULL) {
                    head->left = createNode(data2);
                } else {
                    insertAtLeft(head, data2);
                }
            }

            cout << "Do you want to add more leafs (y/n)? : ";
            cin >> ans2;
        }
    }

    cout << "\nTree created successfully!" << endl;
    
    printRightList(head);
    printLeftList(head);

    return 0;
}
