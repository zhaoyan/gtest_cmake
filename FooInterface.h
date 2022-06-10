#pragma once

#include <string>



class FooInterface {
public:
        virtual ~FooInterface() {}

public:
        virtual std::string getArbitraryString() = 0;
};



