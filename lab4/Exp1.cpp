
#include <iostream>
#include <vector>
using namespace std;

class Item
{
public:
    string name;
    int quantity;
    double price;
};

void displayCart(const vector<Item>& cart)
{
    cout << "\nName\tQuantity\tPrice\tSubtotal\n";

    for (auto item : cart)
    {
        cout << item.name << "\t"
             << item.quantity << "\t\t"
             << item.price << "\t"
             << item.quantity * item.price << endl;
    }
}

double calculateTotal(const vector<Item>& cart)
{
    double total = 0;

    for (auto item : cart)
    {
        total += item.quantity * item.price;
    }

    return total;
}

Item findMostExpensiveItem(const vector<Item>& cart)
{
    Item expensive = cart[0];

    for (auto item : cart)
    {
        if (item.price > expensive.price)
        {
            expensive = item;
        }
    }

    return expensive;
}

int main()
{
    int n;

    cout << "Enter number of items: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Cart is empty";
        return 0;
    }

    vector<Item> cart;

    // Input items
    for (int i = 0; i < n; i++)
    {
        Item temp;

        cout << "\nEnter item name: ";
        cin >> ws;
        getline(cin, temp.name);

        cout << "Enter quantity: ";
        cin >> temp.quantity;

        cout << "Enter price: ";
        cin >> temp.price;

        cart.push_back(temp);
    }

    // Display cart
    cout << "\nOriginal Shopping Cart";
    displayCart(cart);

       cout << "\nOriginal Total: "
         << calculateTotal(cart) << endl;

    Item expensive = findMostExpensiveItem(cart);
    cout<<endl;
    cout << "Most Expensive Item: "<< expensive.name << endl;
    cout << "Price: " << expensive.price << endl;

    return 0;
}