#include <iostream>
#include <vector>
#include <sstream>
#include <string>


int main(int argc, char* argv[]) {
    // read std in for a list of integers comma delimited and store in an array
    // then print the array


    std::string input;
    std::getline(std::cin, input);

    std::vector<int> numbers;
    std::stringstream ss(input);
    std::string token;

    while (std::getline(ss, token, ',')) {
        numbers.push_back(std::stoi(token));
    }

    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i];
        if (i != numbers.size() - 1) std::cout << " ";
    }
    std::cout << std::endl;

    return 0;
}