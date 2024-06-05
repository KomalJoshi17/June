#include <iostream>

int main() {
  int arr[100]; // Array with a maximum size of 100
  int n = 5;      // Current number of elements in the array (assuming initial values)
  int element;   // Element to be inserted
  int mid;        // Index for the middle position

  // Get the element to insert
  std::cout << "Enter the element to insert: ";
  std::cin >> element;

  // Check if there's enough space in the array
  if (n >= sizeof(arr) / sizeof(arr[0])) {
    std::cout << "Error: Array is full!" << std::endl;
    return 1;
  }

  // Calculate the middle index (integer division for center position)
  mid = n / 2;

  // Shift elements one position forward from the middle to the end
  for (int i = n - 1; i >= mid; i--) {
    arr[i + 1] = arr[i];
  }

  // Insert the element at the middle
  arr[mid] = element;

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
