#include <string>
#include <iostream>
#include <regex>

int main() {
    std::string test = "Hello, World!";
    std::regex reg("[\\s]+");
    test = regex_replace(test, reg, "\n");
    std::cout << test << std::endl;
}