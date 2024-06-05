#include <iostream>

int main() {
  int arr[100]; // Array with a maximum size of 100
  int n = 5;      // Current number of elements in the array (assuming initial values)
  int element;   // Element to be inserted

  // Get the element to insert
  std::cout << "Enter the element to insert: ";
  std::cin >> element;

  // Check if there's enough space in the array
  if (n >= sizeof(arr) / sizeof(arr[0])) {
    std::cout << "Error: Array is full!" << std::endl;
    return 1;
  }

  // Insert the element at the end (using the current number of elements as the index)
  arr[n] = element;

  // Update the number of elements
  n++;

  // Print the modified array
  std::cout << "Array after insertion: ";
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
