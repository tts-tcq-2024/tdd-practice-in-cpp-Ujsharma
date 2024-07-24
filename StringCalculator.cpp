#include "StringCalculator.h"
#include "add_numbers.h"

int StringCalculator::add(const std::string& numbers) {
    if (numbers.empty()) {
        return 0;
    }
    return ::add(numbers.c_str());
}
