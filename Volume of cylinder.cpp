#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the volume of the cylinder
double calculateVolume(double radius, double height) {
    double volume = M_PI * radius * radius * height;
    return volume;
}

int main() {
    double radius, height, volume;

    // Prompt the user for input
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Calculate and display the volume
    volume = calculateVolume(radius, height);
    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}
