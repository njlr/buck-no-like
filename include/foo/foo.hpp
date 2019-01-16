#ifndef FOO_FOO_HPP
#define FOO_FOO_HPP

#include "../bar.hpp"

int foo() {
  return 17 + bar();
}

#endif
