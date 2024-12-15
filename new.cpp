#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to simulate the plushie exchange and find the first stable year
int findStableYear(int n, const vector<int>& r) {
    vector<int> plushies(n, 1); // Each spider starts with 1 plushie
    vector<int> prev_plushies(n); // To track the previous year's plushies
    
    for (int year = 2; ; ++year) {
        prev_plushies = plushies; // Store the current state
        vector<int> new_plushies(n, 0); // To track plushie distribution for the next year

        // Simulate plushie exchange
        for (int i = 0; i < n; ++i) {
            if (plushies[i] > 0) {
                new_plushies[r[i] - 1] += 1; // Give 1 plushie to the recipient
            }
        }

        // Apply the rule that any spider with more than 1 plushie keeps only 1
        for (int i = 0; i < n; ++i) {
            new_plushies[i] = min(new_plushies[i], 1);
        }

        // Check if the system is stable
        if (new_plushies == prev_plushies) {
            return year; // Stability achieved
        }

        // Update plushies for the next year
        plushies = new_plushies;
    }
}

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Number of spiders
        cin >> n;

        vector<int> r(n); // Recipients for each spider
        for (int i = 0; i < n; ++i) {
            cin >> r[i];
        }

        // Find and output the first stable year for this test case
        cout << findStableYear(n, r) << endl;
    }

    return 0;
}