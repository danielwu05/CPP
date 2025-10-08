#include <iostream>
#include <vector>
#include <numeric>

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    int hikes = 0;
    int i = 0;
    while (i <= n - k) {
        bool possible = true;
        // Check for a k-day window of good weather
        for (int j = 0; j < k; ++j) {
            if (a[i + j] == 1) {
                possible = false;
                // If we find rain, we can jump our search past this rainy day
                i = i + j + 1;
                break;
            }
        }

        if (possible) {
            // Found a valid hike!
            hikes++;
            // Jump past the hike (k days) and the break (1 day)
            i = i + k + 1;
        }
    }
    std::cout << hikes << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}