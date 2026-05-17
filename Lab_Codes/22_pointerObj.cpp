// Write a C++ program for showing pointer to objects

#include <iostream>
#include <string>

class Car {
public:
    std::string brand;
    int year;

    // Member function to display car details
    void displayDetails() {
        std::cout << "Brand: " << brand << ", Year: " << year << std::endl;
    }
};

int main() {
    
    Car carObj;
    carObj.brand = "Toyota";
    carObj.year = 2022;

    // Declare a pointer to a Car object
    Car* carPtr;

    // Assign the address of the stack object to the pointer using the address-of operator (&)
    carPtr = &carObj;

    std::cout << "Accessing Object on the Stack via Pointer" << std::endl;
    // Access members using the arrow operator (->)
    // The arrow operator is a shorthand for (*carPtr).brand and is preferred
    carPtr->displayDetails(); 
    std::cout << "Brand (direct access via ->): " << carPtr->brand << std::endl;

    // 2. Object created dynamically on the heap using 'new'
    // The 'new' operator allocates memory and returns a pointer to the new object
    Car* dynamicCarPtr = new Car();
    dynamicCarPtr->brand = "Honda";
    dynamicCarPtr->year = 2024;

    std::cout << "\n Accessing Dynamically Allocated Object via Pointer" << std::endl;
    
    dynamicCarPtr->displayDetails();
    std::cout << "Year (direct access via): " << dynamicCarPtr->year << std::endl;

    // 3. Demonstrating array of objects using a pointer
    std::cout << "\nAccessing Array of Objects via Pointer" << std::endl;
    Car* carArrayPtr = new Car[2]; // Allocate memory for an array of 2 Car objects
    
    // Access and modify elements in the array using pointer arithmetic and the arrow operator
    carArrayPtr[0].brand = "Ford";
    carArrayPtr[0].year = 2020;

    (carArrayPtr + 1)->brand = "Chevy"; // Using pointer arithmetic (carArrayPtr + 1) points to the second element
    (carArrayPtr + 1)->year = 2021;
    
    // Display details for the array elements
    carArrayPtr[0].displayDetails();
    carArrayPtr[1].displayDetails();

    // Memory management: Remember to deallocate dynamically allocated memory using 'delete' and 'delete[]'
    delete dynamicCarPtr;
    delete[] carArrayPtr;

    return 0;
}