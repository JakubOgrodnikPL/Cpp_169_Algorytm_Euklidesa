#include <iostream>

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int main() {
  int a, b;
  std::cout << "Podaj dwie liczby: ";
  std::cin >> a >> b;
  std::cout << "Najwiekszy wspolny dzielnik: " << gcd(a, b) << std::endl;
  return 0;
}
