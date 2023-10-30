class FoodBillingSystem:
    def __init__(self):
        self.menu = {
            "Burger": 5.99,
            "Pizza": 8.99,
            "Pasta": 6.49,
            "Salad": 4.99,
            "Soda": 1.49,
        }
        self.cart = {}
        self.total_bill = 0.0

    def display_menu(self):
        print("Menu:")
        for item, price in self.menu.items():
            print(f"{item}: ${price:.2f}")

    def take_order(self):
        while True:
            food_item = input("Enter the food item you want to order: ")
            if food_item in self.menu:
                quantity = int(input(f"How many {food_item}s do you want to order? "))
                if food_item in self.cart:
                    self.cart[food_item] += quantity
                else:
                    self.cart[food_item] = quantity

                self.total_bill += self.menu[food_item] * quantity

                more_orders = input("Do you want to order more items? (yes/no): ").lower()
                if more_orders != "yes":
                    break
            else:
                print("Sorry, that item is not available in the menu. Please choose from the menu items.")

    def calculate_bill(self):
        print("Final Bill:")
        for item, quantity in self.cart.items():
            print(f"{item} x{quantity}: ${self.menu[item] * quantity:.2f}")
        print(f"Total Bill: ${self.total_bill:.2f}")

def main():
    billing_system = FoodBillingSystem()
    print("Welcome to the Food Billing System")
    billing_system.display_menu()
    billing_system.take_order()
    billing_system.calculate_bill()

if __name__ == "__main__":
    main()
