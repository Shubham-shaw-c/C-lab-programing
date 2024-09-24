//Write a program in c++ to implement shopping list
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Item {
    string name;
    int quantity;
    double price;
};
class ShoppingList {
private:
    vector<Item> items;
public:
    void addItem() {
        Item item;
        cout << "Enter item name: ";
        cin >> item.name;
        cout << "Enter quantity: ";
        cin >> item.quantity;
        cout << "Enter price per item: ";
        cin >> item.price;
        items.push_back(item.name,item.quantity,item.price);
                cout << "Item added successfully!\n";
    }
    void removeItem() {
        string name;
        cout << "Enter the name of the item to remove: ";
        cin >> name;
        bool found = false;

        for (size_t i = 0; i < items.size(); i++) {
            if (items[i].name == name) {
                items.erase(items.begin() + i);
                found = true;
                cout << "Item removed successfully!\n";
                break;
            }
        }
        if (!found) {
            cout << "Item not found in the shopping list.\n";
        }
    }
    void displayList() {
        if (items.empty()) {
            cout << "Shopping list is empty.\n";
        } else {
            cout << "\nShopping List:\n";
            for (const auto &item : items) {
                cout << "Item: " << item.name
                     << ", Quantity: " << item.quantity
                     << ", Price per item: $" << item.price
                     << ", Total: $" << item.quantity * item.price << endl;
            }
        }
    }
    void calculateTotal() {
        double total = 0;
        for (const auto &item : items) {
            total += item.quantity * item.price;
        }
        cout << "Total cost of all items: $" << total << endl;
    }
};

int main() {
    ShoppingList list;
    int choice;
    do {
        cout << "\n*** Shopping List Menu ***\n";
        cout << "1. Add Item\n";
        cout << "2. Remove Item\n";
        cout << "3. Display Shopping List\n";
        cout << "4. Calculate Total Cost\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                list.addItem();
                break;

            case 2:
                list.removeItem();
                break;

            case 3:
                list.displayList();
                break;

            case 4:
                list.calculateTotal();
                break;

            case 5:
                cout << "Exiting... Thank you for using the Shopping List!\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
}