#pragma once

#include <gmock/gmock.h>
#include <string>
#include "FooInterface.h"



class MockFoo: public FooInterface {
public:
        MOCK_METHOD0(getArbitraryString, std::string());
};

