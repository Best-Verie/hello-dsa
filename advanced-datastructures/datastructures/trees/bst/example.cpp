#include <iostream>
#include "string"

using namespace std;

struct Node
{
    string name;
    string version;
    int quantity;
    float price;
    struct Node *left;
    struct Node *right;
};

class BST
{
private:
    Node *root;
    Node *insert(string name, string version, int quantity, float price, Node *node)
    {
        if (node == nullptr)
        {
            node = new Node;
            node->name = name;
            node->version = version;
            node->quantity = quantity;
            node->price = price;
            node->left = node->right = nullptr;
        }
        else if (quantity < node->quantity)
            node->left = insert(name, version, quantity, price, node->left);
        else if (quantity > node->quantity)
            node->right = insert(name, version, quantity, price, node->right);
        return node;
    }

    Node *findMin(Node *node)
    {
        if (node == nullptr)
            return nullptr;
        else if (node->left == nullptr)
            return node;
        else
            return findMin(node->left);
    }

    Node *findMax(Node *node)
    {
        if (node == nullptr)
            return nullptr;
        else if (node->right == nullptr)
            return node;
        else
            return findMax(node->right);
    }

    void inoder(Node *node)
    {
        if (node == nullptr)
            return;
        inoder(node->left);
        cout << node->name << "\t\t" << node->version << "\t" << node->quantity << "\t" << node->price << endl;
        inoder(node->right);
    }

    Node *find(Node *node, string name)
    {
        int result;

        if (node == nullptr)
            return nullptr;
        else if (name.length() < node->name.length())
            return find(node->left, name);
        else if (name.length() > node->name.length())
            return find(node->right, name);
        return node;
    }

    Node *remove(string data, Node *node)
    {
        Node *temp;
        int result = data.length();
        if (node == nullptr)
            return nullptr;
        else if (result < node->name.length())
            node->left = remove(data, node->left);
        else if (result > node->name.length())
            node->right = remove(data, node->right);
        else if (node->left && node->right)
        {
            temp = findMin(node->right);
            node->name = temp->name;
            temp->right = remove(node->name, node->right);
        }
        else
        {
            temp = node;
            if (node->left == nullptr)
                node = node->right;
            else if (node->right == nullptr)
                node = node->left;
            delete temp;
        }
        return node;
    }

    Node *Emptize(Node *node)
    {
        if (node == nullptr)
            return nullptr;
        {
            Emptize(node->left);
            Emptize(node->right);
            delete node;
        }
        return nullptr;
    }

public:
    BST()
    {
        root = nullptr;
    }

    ~BST()
    {
        root = Emptize(root);
    }

    void insert(string name, string version, int quantity, float price)
    {
        root = insert(name, version, quantity, price, root);
    }

    void print()
    {
        cout << "Name\t\t\tVersion  quantity  price" << endl;
        inoder(root);
        cout << endl;
    }

    void search(string data)
    {
        cout << "Found " << find(root, data)->name << endl;
    }

    void remove(string data)
    {
        root = remove(data, root);
    }

    void updatePkg(string name, string version, int quantity, float price) {}
};

void menu()
{
    cout << "\n\t\tWELCOME TO SOFTWARE STORE\n"
         << endl;
    cout << "\t\t1. Print all packages" << endl;
    cout << "\t\t2. Add new package" << endl;
    cout << "\t\t3. Sell a package" << endl;
    cout << "\t\t4. Delete a package" << endl;
    cout << "\t\t5. Search package" << endl;
    cout << "\t\t6. Exit" << endl;
}

int main()
{
    BST bst;
    int choice = 0;
    string name, version, pkg_name, search_element;
    float price;
    int quantity;

    bst.insert("Adobe Photoshop", "CS5", 21, 580);
    bst.insert("Norton Utilities", "", 10, 50);
    bst.insert("Visual studio professional", "2010", 19, 700);
    bst.insert("Microsoft office", "2010", 27, 150);

    do
    {
        // displays the main view
        menu();
        cout << "\n\nEnter your choice ->  ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            bst.print();
            break;
        case 2:
            cout << "\nAdding new package\n"
                 << endl;
            cout << "Enter the name: ";
            cin >> name;
            cout << "Enter the version: ";
            cin >> version;
            cout << "Enter the quantity: ";
            cin >> quantity;
            cout << "Enter the price: ";
            cin >> price;
            bst.insert(name, version, quantity, price);
            break;
        case 3:
            cout << "\nsell a product";
            cout << "\nAdding new package\n"
                 << endl;
            cout << "Enter the name: ";
            cin >> name;
            cout << "Enter the version: ";
            cin >> version;
            cout << "Enter the quantity: ";
            cin >> quantity;
            cout << "Enter the price: ";
            cin >> price;
            bst.updatePkg(name, version, quantity, price);
            break;
        case 4:
            cout << "\nAdding delete package\n"
                 << endl;
            cout << "Enter package name: ";
            cin >> pkg_name;
            bst.remove(name);
            break;
        case 5:
            cout << "\n Enter search keyword" << endl;
            cin >> search_element;
            bst.search(search_element);
            cout << "Search package";
            break;
        case 6:
            exit(3);
        default:
            cout << "Wrong input";
        }
    } while (choice < 0 || choice <= 6);

    return 0;
}
