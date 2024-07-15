#ifndef STRINGCALCULATOR_H
#define STRINGCALCULATOR_H

#include <string>
#include <vector>
#include <stdexcept>

class StringCalculator {
public:
    int add(const std::string& input);

private:
    std::vector<int> extractNumbers(const std::string& input, const std::string& delimiter);
};

#endif // STRINGCALCULATOR_H

