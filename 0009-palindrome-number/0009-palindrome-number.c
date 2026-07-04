#include <stdbool.h>

bool isPalindrome(int x) {
    // 1. Filter: Negatives and numbers ending in 0
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int reversedHalf = 0;
    // 2. Reverse only half of the digits to prevent overflow
    while (x > reversedHalf) {
        reversedHalf = (reversedHalf * 10) + (x % 10);
        x /= 10;
    }

    // 3. Check for equality
    // Even length: x == reversedHalf
    // Odd length: x == reversedHalf / 10
    return x == reversedHalf || x == reversedHalf / 10;
}
