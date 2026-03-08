// Heres an example for using for statements in c++
#include <iostream>

int main() {
  for (int i = 0; i < 5; i++) {
    std::cout << i << std::endl;
  }
  return 0;
}

// Or you can do this
#include <iostream>

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    for (int element : nums) {
        std::cout << element << std::endl;
    }
    return 0;
}

// Though i must note that these both work the same else you could use the first for loop statement instead of the second