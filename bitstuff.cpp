#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> a(20);
    int count = 0;

    std::cout << "Enter the array (0s and 1s): ";
    for (int i = 0; i < 10; i++) std::cin >> a[i];

    // Bit-Stuffing
    for (auto it = a.begin(); it != a.begin() + 9; ++it) {
        if (*it == 1) {
            ++count;
            if (count == 5) {
                it = a.insert(it + 1, 0);
                count = 0;
            }
        } else {
            count = 0;
        }
    }

    std::cout << "\nAfter stuffing: ";
    for (const auto& bit : a) std::cout << bit;

    count = 0;
    for (auto it = a.begin(); it != a.end(); ++it) {
        if (*it == 1) {
            ++count;
            if (count == 5) {
                it = a.erase(it);
                --it; // Move back as erase advances iterator
            }
        } else {
            count = 0;
        }
    }

    std::cout << "\nAfter destuffing: ";
    for (const auto& bit : a) std::cout << bit;

    return 0;
}
