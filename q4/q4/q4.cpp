#include <iostream>

class IllegalInputException {
};

class insufficientFuelException {
};

class Car {
private:
    int speed,fuel_Level,distance;
public:
    Car() {
        std::cin >> speed >> fuel_Level >> distance;
        if (speed < 5 || fuel_Level < 3)
            throw IllegalInputException();
      }
    Car(int speed, int fuel_Level) :speed(speed), fuel_Level(fuel_Level),distance(speed) {}
    void travel() {
        int check_travel;
        if (distance == 0)
            throw insufficientFuelException();
        check_travel = distance / speed;
        if (fuel_Level - check_travel >= 0) {
            std::cout << fuel_Level - check_travel << std::endl;
        }
        else {
            throw insufficientFuelException();
        }
    }
};

int main() {
    try {
        Car c;
        try {
            c.travel();
        }
        catch (insufficientFuelException) {
            std::cout << "Not Enough Fuel! " << std::endl;
        }
    }
    catch (IllegalInputException) {
        Car c1(5, 3);
        try {
            c1.travel();
        }
        catch (insufficientFuelException) {
            std::cout << "Not Enough Fuel! " << std::endl;
        }
    }
    return 0;
}