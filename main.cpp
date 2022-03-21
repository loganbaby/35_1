#include <iostream>
#include <initializer_list>

inline void print(std::initializer_list<int>& init_list) {
  for (auto& i : init_list) {
    std::cout << i << std::endl;
  }
}

int main() {
  std::initializer_list<int> vec{1, 2, 3, 4, 5};
  print(vec);
}