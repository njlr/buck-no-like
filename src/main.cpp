#include <iostream>
#include <foo/foo.hpp>

#include "../bar.hpp"
// #include <bar.hpp>

int main() {
  using namespace std;

  cout << "foo() = " << foo() << endl;
  cout << "bar() = " << bar() << endl;

  return 0;
}