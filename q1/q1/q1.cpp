#include <iostream>

class calculateEfficiency {
private:
    int processor_power;
    int port_count;
    double energy_consumption;
    bool true_false;
public:

    calculateEfficiency() {
        std::cin >> processor_power >> port_count >> energy_consumption >> true_false;
    }

    double calculate()
    {
        double total_processor_power = 0;
        if (true_false == 1)
        {
            total_processor_power = (double(processor_power) * 2.2) + (45 * double(port_count));
        }
        else
        {
            total_processor_power = (double(processor_power)) + (45 * double(port_count));
        }

        return (total_processor_power / energy_consumption);
    }

    void efficiencyLevel(double efficiency_check)
    {
        if (efficiency_check >= 10)
        {
            std::cout << efficiency_check << " High" << std::endl;
        }
        else if (efficiency_check < 10 && efficiency_check >= 5)
        {
            std::cout << efficiency_check << " Medium" << std::endl;
        }
        else if (efficiency_check < 5 && efficiency_check >= 2)
        {
            std::cout << efficiency_check << " Low" << std::endl;
        }
        else
        {
            std::cout << efficiency_check << " Very Low" << std::endl;
        }
    }
};



int main() {

    calculateEfficiency efficiency1;
    calculateEfficiency efficiency2;
    calculateEfficiency efficiency3;


    double sumOfCalculate = efficiency1.calculate() + efficiency2.calculate() + efficiency3.calculate();
    double average = sumOfCalculate / 3;

    efficiency1.efficiencyLevel(average);




    return 0;
}