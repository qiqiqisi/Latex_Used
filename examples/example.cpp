#include <iostream>
#include <numeric>
#include <vector>

int main() {
    const std::vector<int> values{2, 4, 6, 8};
    const int total = std::accumulate(values.begin(), values.end(), 0);

    std::cout << "average = "
              << static_cast<double>(total) / values.size()
              << '\n';
    return 0;
}

