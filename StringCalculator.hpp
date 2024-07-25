#ifndef STRINGCALCULATOR_HPP
#define STRINGCALCULATOR_HPP

#include <string>
#include <vector>
#include <stdexcept>

class StringCalculator {
public:
    static int add(const std::string& input);


private:
    static void checkForNegative(int number);
    static int checkforGreaterthan1000(int number);
    static std::vector<int> extractNumbers(const std::string& input);
    static int calculateSum(const std::vector<int>& numbers);
};

#endif // STRINGCALCULATOR_HPP
