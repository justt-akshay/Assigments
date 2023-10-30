#include <iostream>
#include <string>
#include <map>

class FoodBillingSystem {
public:
    FoodBillingSystem() {
        totalBill = 0.0;
        displayMenu();
        takeOrders();
    }

private:
    double totalBill;
    std::map<std::string, double> menu;

    // Function to display the available food items and their prices
    void displayMenu() {
        std::cout << "Menu:" << std::endl;
        menu["Burger"] = 5.99;
        menu["Pizza"] = 8.99;
        menu["Pasta"] = 6.49;
        menu["Salad"] = 4.99;
        menu["Soda"] = 1.49;

        for (const auto& item : menu) {
            std::cout << item.first << ": $" << item.second << std::endl;
        }
    }

    // Function to take food orders and calculate the total bill
    void takeOrders() {
        while (true) {
            std::string foodItem;
            int quantity;

            std::cout << "Enter the food item you want to order: ";
            std::cin >> foodItem;

            if (menu.find(foodItem) != menu.end()) {
                std::cout << "Enter the quantity: ";
                std::cin >> quantity;
                totalBill += menu[foodItem] * quantity;
            } else {
                std::cout << "Sorry, that item is not available in the menu." << std::endl;
            }

            char moreOrders;
            std::cout << "Do you want to order more items? (Y/N): ";
            std::cin >> moreOrders;

            if (moreOrders != 'Y' && moreOrders != 'y') {
                break;
            }
        }

        std::cout << "Final Bill: $" << totalBill << std::endl;
    }
};

int main() {
    FoodBillingSystem foodBilling;
    return 0;
}
