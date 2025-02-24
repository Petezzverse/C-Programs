#include <iostream>
using namespace std;

class SmartCar {
public:
    static int speedLimit;  // Global speed limit for all cars

    // Static method to set the global speed limit
    static void setSpeedLimit(int limit) {
        speedLimit = limit;
        cout << "Speed limit set to: " << speedLimit << " km/h" << endl;
    }

    // Method to check if speed is within the limit
    void checkSpeed(int speed) {
        if (speed > speedLimit) {
            cout << "Speed exceeds limit! Allowed speed: " << speedLimit << " km/h" << endl;
        } else {
            cout << "Speed is within limit: " << speed << " km/h" << endl;
        }
    }
};

// Initialize static variable
int SmartCar::speedLimit = 60;  // Default speed limit

int main() {
    SmartCar car1, car2;

    car1.checkSpeed(50);  // Within limit
    car2.checkSpeed(70);  // Exceeds limit

    SmartCar::setSpeedLimit(80);  // Change the speed limit globally

    car1.checkSpeed(75);  // Within new limit
    car2.checkSpeed(90);  // Exceeds new limit

    return 0;
}
