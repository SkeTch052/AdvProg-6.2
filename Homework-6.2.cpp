#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

int main() {
    int count_of_numbers;
    std::cout << "[IN]" << std::endl;
    std::cin >> count_of_numbers;

    std::set<int> set_of_numbers;
    for (int i = 0; i < count_of_numbers; i++) {
        int num;
        std::cin >> num;
        set_of_numbers.insert(num);
    }

    std::vector<int> sorted_numbers(set_of_numbers.begin(), set_of_numbers.end());
    std::sort(sorted_numbers.rbegin(), sorted_numbers.rend());

    std::cout << "[OUT]:" << std::endl;
    for (const auto& num : sorted_numbers) {
        std::cout << num << std::endl;
    }

    return 0;
}