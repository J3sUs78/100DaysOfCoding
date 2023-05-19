#include <iostream>

using namespace std;

// Function that takes a value and returns the value incremented by 2
int for_value(int value){
    return value = value + 2;
};

// Function that takes a reference to a value and modifies it by incrementing it by 4
int for_reference(int &value){
    return value = value + 4;
};

int main(){

    int num = 10;

    // Calling the for_value function with the num variable as an argument
    for_value(num);
    // Printing the value of num after calling for_value (no change)
    cout << "Number for Value: " << num << endl;
    // Calling the for_value function with the num variable as an argument and printing the returned value
    cout << "Number for Value: " << for_value(num) << endl;

    // Calling the for_reference function with the num variable as a reference
    for_reference(num);
    // Printing the value of num after calling for_reference (changed)
    cout << "Number for Reference: " << num << endl;

    return 0;
};
