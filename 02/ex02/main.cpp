/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex02/main.cpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-10-11 15:44
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-10-11 15:44
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#include "./Fixed.hpp"

void runTest(Fixed result, Fixed expected, const std::string& testName) {
    if (result == expected) {
        std::cout << "✅ " << testName << std::endl;
    } else {
        std::cout << "❌ " << testName << std::endl;
		std::cout << "Result   : " << result.toFloat() << std::endl;
		std::cout << "Expected : " << expected.toFloat() << std::endl;
    }
}

int main(void) {
    // --- Test Setup ---
    Fixed a(10);
    Fixed b(5.5f);
    Fixed c(10); // For equality checks
    Fixed zero;

    std::cout << "--- Comparison Tests (a=10, b=5.5, c=10) ---" << std::endl;
    runTest(a > b, true, "Greater Than (a > b)");
    runTest(!(a < b), true, "Less Than !(a < b)");
    runTest(a >= c, true, "Greater or Equal (a >= c)");
    runTest(b <= a, true, "Less or Equal (b <= a)");
    runTest(a == c, true, "Equality (a == c)");
    runTest(a != b, true, "Inequality (a != b)");
    std::cout << std::endl;

    // --- Arithmetic Tests ---
    std::cout << "--- Arithmetic Tests (a=10, b=5.5) ---" << std::endl;
    runTest((a + b), Fixed(15.5f), "Addition (10 + 5.5 = 15.5)");
    runTest((a - b), Fixed(4.5f), "Subtraction (10 - 5.5 = 4.5)");
    runTest((a * b), Fixed(55.0f), "Multiplication (10 * 5.5 = 55)");
    runTest((a / b), Fixed(10 / 5.5f), "Division (10 / 5.5)");
    runTest((b / a), Fixed(5.5f / 10), "Division (5.5 / 10)");
    std::cout << std::endl;

    // --- Increment/Decrement Tests ---
    std::cout << "--- Increment/Decrement Tests ---" << std::endl;
    Fixed inc(10);
    Fixed dec(10);
    Fixed epsilon(1.0f / 256.0f); // Smallest representable value with 8 fractional bits

    // Pre-increment
    runTest(++inc, Fixed(10) + epsilon, "Pre-increment value (++inc)");
    runTest(inc, Fixed(10) + epsilon, "Pre-increment side-effect");

    // Post-increment
    inc = Fixed(10); // Reset
    runTest(inc++, Fixed(10), "Post-increment value (inc++)");
    runTest(inc, Fixed(10) + epsilon, "Post-increment side-effect");

    // Pre-decrement
    runTest(--dec, Fixed(10) - epsilon, "Pre-decrement value (--dec)");
    runTest(dec, Fixed(10) - epsilon, "Pre-decrement side-effect");

    // Post-decrement
    dec = Fixed(10); // Reset
    runTest(dec--, Fixed(10), "Post-decrement value (dec--)");
    runTest(dec, Fixed(10) - epsilon, "Post-decrement side-effect");
    std::cout << std::endl;

    // --- Min/Max Tests ---
    std::cout << "--- Min/Max Tests ---" << std::endl;
    Fixed x(100);
    Fixed y(200);
    const Fixed cx(100);
    const Fixed cy(200);

    runTest(Fixed::min(x, y), x, "Static min(non-const)");
    runTest(Fixed::max(x, y), y, "Static max(non-const)");
    runTest(Fixed::min(cx, cy), cx, "Static min(const)");
    runTest(Fixed::max(cx, cy), cy, "Static max(const)");
    std::cout << std::endl;

    std::cout << "--- All tests completed. ---" << std::endl;
    return 0;
}