#pragma once
#include "FooInterface.h"

class Bar {
public:
  Bar(FooInterface *foo) : m_foo(foo) {
  }

  std::string getFooString() {
    return m_foo->getArbitraryString();
  }

private:
  FooInterface *m_foo;
};