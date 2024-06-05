#include <iostream>

int main() {
  int arr[100]; // Array with a maximum size of 100
  int n = 5;      // Current number of elements in the array (assuming initial values)

  // Check if there are elements to delete
  if (n == 0) {
    std::cout << "Error: Array is empty!" << std::endl;
    return 1;
  }

  // Decrement the number of elements to reflect deletion (effectively removing the last element)
  n--;

  // Print the modified array
  std::cout << "Array after deletion: ";
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}

