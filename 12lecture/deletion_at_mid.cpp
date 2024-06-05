#include <iostream>

int main() {
  int arr[100]; // Array with a maximum size of 100
  int n = 5;      // Current number of elements in the array (assuming initial values)

  // Check if there are elements to delete
  if (n == 0) {
    std::cout << "Error: Array is empty!" << std::endl;
    return 1;
  }

  // Calculate the middle index (integer division for center position)
  int mid = n / 2;

  // Shift elements one position forward from middle to end (overwriting the element to be deleted)
  for (int i = mid; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }

  // Decrement the number of elements
  n--;

  // Print the modified array
  std::cout << "Array after deletion: ";
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
