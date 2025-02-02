#include<iostream>
#include<string>
using namespace std;
  // 1. Define the class named Car
class Car {
public:
    // 2.Public data members
    string brand;
    string model;
    float price;
    int mileage;
   // 4.display car details
    void display() {
        cout << "Car Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }
  // 5. driving the car
    void drive(int distance) {
        mileage += distance;
        cout << "Updated Mileage: " << mileage << " miles" << endl;
    }
};
int main() {
    // 6. Car object
    Car myCar;
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.price = 20000;
    myCar.mileage = 5000;
 // 7. Use the display function to show car details
    myCar.display();
  // 8. Simulate driving the car for 150 miles
    cout << "\nDriving 150 miles..." << endl;
    myCar.drive(150);
  // 9. Simulate driving the car for 300 miles
    cout << "\nDriving 300 miles..." << endl;
    myCar.drive(300);

    return 0;
}
