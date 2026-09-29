#include <iostream>

int main(int argc, char *argv[]) {
  std::cout << "cantidad" << argc << std::endl;
  std::cout << "argumentos" << std::endl;
  for (int i = 0; i < argc; i++) {
    std::cout << argv[i] << std::endl;
  }
  return 0;
}
