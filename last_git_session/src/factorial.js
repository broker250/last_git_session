function factorial(n) {
    if (n === 0 || n === 1) {
      return 1; // Base case: factorial of 0 and 1 is 1
    } else {
      return n * factorial(n - 1); // Recursive step
    }
  }
  
  // Example usage:
  console.log(factorial(5)); // Output: 120 (5 * 4 * 3 * 2 * 1)
  console.log(factorial(0)); // Output: 1
  console.log(factorial(1)); // Output: 1