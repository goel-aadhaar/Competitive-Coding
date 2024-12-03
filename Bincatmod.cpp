#include <iostream>
#include <vector>

const int MOD = 998244353;

// Function to count distinct configurations for a given score Y
long long count_configurations(int Y) {
    // dp[i] will hold the number of distinct configurations to achieve score i
    std::vector<long long> dp(Y + 1, 0);
    dp[0] = 1; // There's one way to achieve score 0 (using no tiles)

    // We can only achieve scores that are powers of 2
    for (int power = 1; (1 << power) <= Y; ++power) {
        int score = 1 << power; // score = 2^power
        for (int j = score; j <= Y; ++j) {
            dp[j] = (dp[j] + dp[j - score]) % MOD;
        }
    }

    return dp[Y];
}

int main() {
    int t;
    std::cin >> t;
    
    std::vector<int> results(t);
    
    for (int i = 0; i < t; ++i) {
        int Y;
        std::cin >> Y;
        results[i] = count_configurations(Y);
    }

    // Output results
    for (int result : results) {
        std::cout << result << std::endl;
    }

    return 0;
}