class Solution {
public:
    long long countCommas(long long n) {
        long long totalCommas = 0;
        long long threshold = 1000; // 10^3

        while (n >= threshold) {
            totalCommas += (n - threshold + 1);
            
            // Move to the next threshold (10^6, 10^9, 10^12, 10^15)
            // Prevent potential overflow if threshold * 1000 exceeds long long max
            if (threshold > 1e15 / 1000) break; 
            threshold *= 1000;
        }

        return totalCommas;
    }
};