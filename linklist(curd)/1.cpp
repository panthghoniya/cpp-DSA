#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void stat(int val, node *&head)
{
    node *n1 = new node(val);
    n1->next = head;
    head = n1;
}

void end(int val, node *&head)
{
    node *n1 = new node(val);
    node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = n1;
}

void atany(int val, node *&head, int pos)
{
    node *n1 = new node(val);
    if (pos == 0)
    {
        n1->next = head;
        head = n1;
    }
    node *ptr = head;
    for (int i = 0; i == pos - 1; i++)
    {
        ptr = ptr->next;
    }
    n1->next = ptr->next;
    ptr->next = n1;
}

void display(node *head)
{
    if (head == NULL)
    {
        cout << "kay nathi bhai." << endl;
    }
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void update(node *&head, int pos, int userval)
{
    node *ptr = head;
    for (int i = 0; i < pos; i++)
    {
        ptr = ptr->next;
    }
    ptr->data = userval;
}
void deleteval(int pos1, node *&head)
{
    if (pos1 == 0)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }
    node *ptr = head;
    for (int i = 0; i < pos1 - 1; i++)
    {
        ptr = ptr->next;
    }
    node *temp = ptr->next;
    ptr->next = temp->next;
    delete temp;
}

int main()
{
    int user;
    node *head = NULL;
    int userval;

    do
    {
        cout << "--------- PLEASE SELECT ANY OPTION ---------" << endl;
        cout << "1: Insert a value" << endl;
        cout << "2: Display the list" << endl;
        cout << "3: update a value" << endl;
        cout << "4: delete the value" << endl;
        cout << "0: Exit" << endl;

        cin >> user;

        switch (user)
        {
        case 1:
        {
            int user2;
            cout << "1: Insert at start" << endl;
            cout << "2: Insert at end" << endl;
            cout << "3: Insert at a any" << endl;

            cin >> user2;

            switch (user2)
            {
            case 1:
                cout << "Enter the value: ";
                cin >> userval;
                stat(userval, head);
                break;
            case 2:
                cout << "Enter the value: ";
                cin >> userval;
                end(userval, head);
                break;
            case 3:
            {
                int pos;
                cout << "Enter the value: ";
                cin >> userval;
                cout << "Enter the position: ";
                cin >> pos;
                atany(userval, head, pos);
                break;
            }
            default:
                cout << "Invalid option!" << endl;
                break;
            }
            break;
        }
        case 2:
            display(head);
            break;
        case 3:
            int pos;
            cout << "Enter the position: ";
            cin >> pos;
            cout << "Enter the value: ";
            cin >> userval;

            update(head, pos, userval);
            break;
        case 4:
            int pos1;
            cout << "Enter the position: ";
            cin >> pos1;

            deleteval(pos1, head);
            break;

        case 0:
            cout << "Exit.." << endl;
            break;

        default:
            cout << "Invalid option!" << endl;
            break;
        }
    } while (user != 0);

    return 0;
}