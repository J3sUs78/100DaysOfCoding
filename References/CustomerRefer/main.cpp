#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Structure representing a customer
struct Customer {
    string name;
    int age;
};

// Function to validate the name format
bool ValidateName(const string& name) {
    return name.length() > 4;
}

// Function to validate the age format
bool ValidateAge(int age) {
    return age >= 0 && age <= 150;
}

// Function that adds a new customer to the system
void AddCustomer(vector<Customer>& customerList) {
    Customer newCustomer;
    
    while (true) {
        cout << "Enter name: ";
        cin >> newCustomer.name;
        
        if (ValidateName(newCustomer.name)) {
            break;
        } else {
            cout << "Invalid name format. Please enter a name with more than 4 characters." << endl;
        }
    }

    while (true) {
        cout << "Enter age: ";
        cin >> newCustomer.age;
        
        if (ValidateAge(newCustomer.age)) {
            break;
        } else {
            cout << "Invalid age format. Please enter a valid age between 0 and 150." << endl;
        }
    }
    
    customerList.push_back(newCustomer);
}

// Function that prints the customer details
void PrintCustomers(const vector<Customer>& customerList) {
    for (const Customer& customer : customerList) {
        cout << "Name: " << customer.name << ", Age: " << customer.age << endl;
    }
}

int main() {
    vector<Customer> customerList;

    // Adding customers to the system
    AddCustomer(customerList);
    AddCustomer(customerList);

    // Printing customer details
    cout << "Customer List:" << endl;
    PrintCustomers(customerList);

    return 0;
}
