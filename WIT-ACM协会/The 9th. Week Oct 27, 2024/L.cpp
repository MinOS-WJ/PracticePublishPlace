#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

int main() {
	int t;
	std::cin >> t;
	std::cin.ignore();
	while (t--) {
		int n;
		std::cin >> n;
		std::cin.ignore();
		std::vector<std::string> rows(n);
		for (int i = 0; i < n; ++i) {
			std::getline(std::cin, rows[i]);
		}
		std::vector<int> result;
		for (auto it = rows.rbegin(); it != rows.rend(); ++it) {
			for (int i = 0; i < 4; ++i) {
				if ((*it)[i] == '#') {
					result.push_back(i + 1);
					break;
				}
			}
		}
		for (size_t i = 0; i < result.size(); ++i) {
			if (i > 0)
				std::cout << " ";
			std::cout << result[i];
		}
		std::cout << std::endl;
	}
	return 0;
}
