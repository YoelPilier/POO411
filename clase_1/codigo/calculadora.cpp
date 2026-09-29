#include <cstdlib>
#include <iostream>

double Operar(double n1, char op, double n2) {
  switch (op) {
  case '+': {
    return n1 + n2;
  }

  case '*': {
    return n1 * n2;
  }
  }
  return 0;
}

int main() {

  double num1 = 0, num2 = 0;
  char op;

  std::cin >> num1 >> op >> num2;
  std::cout << Operar(num1, op, num2);
  return 0;
}
