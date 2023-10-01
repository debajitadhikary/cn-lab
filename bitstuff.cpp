#include <iostream>
#include <vector>
#include <algorithm>

// 1 1 1 1 1 1 0 0 1 0
int main() {
    std::vector<int> a(10);
    int count = 0;

    std::cout << "\n Enter the array (0s and 1s):\n ";
    for (int i = 0; i < 10; i++) std::cin >> a[i];

    std::cout << "\n Entered Array : ";
    for (const auto& bit : a) std::cout << bit;

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
    std::cout << "\n After bit-stuffing: ";
    for (const auto& bit : a) std::cout << bit;

    // Bit Destuffing
    count = 0;
    auto it = a.begin();
    while (it != a.end()) {
        if (*it == 1) {
            ++count;
            if (count == 5 && it + 1 != a.end() && *(it + 1) == 0) {
                it = a.erase(it + 1); // Erase the stuffed '0'
                count = 0; // Reset the count
            }
        } else {
            count = 0;
        }
        ++it; // Move to the next element
    }
    
    std::cout << "\n After bit-destuffing: ";
    for (const auto& bit : a) std::cout << bit;


    std::cout<<std::endl;
    std::cout<<std::endl;

    return 0;
}