#include <vector>
#include <bitset>
int main() {
  std::bitset<2> vec; // Using a std::bitset for bit manipulation
  vec[0] = 1; // setting the first bit to 1
  vec[1] = 0; // Setting the second bit to 0
  bool b = vec[0]; // Accessing bits with std::bitset, avoid potential UB
  return 0;
}
