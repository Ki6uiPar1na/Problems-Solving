#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>

void solve() {
    // Replace "input.txt" with the actual file path
    std::ifstream inputFile("input.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Error opening file" << std::endl;
        return;
    }

    std::string s;
    std::map<std::string, int> mp;

    while (std::getline(inputFile, s)) {
        std::stringstream ss(s);
        std::string word;

        while (ss >> word) {
            mp[word]++;
        }
    }

    inputFile.close();

    std::vector<std::string> words;
    for (auto& i : mp) {
        words.push_back(i.first);
    }

    std::sort(words.begin(), words.end());

    for (auto& i : words) {
        std::cout << i << '\n';
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}