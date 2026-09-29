#ifndef _TEST_INCLUDE_H_
#define _TEST_INCLUDE_H_

#include <iostream>
#include <string>

class TestInclude{
/*
    Class used to test proper cmake detection and makefile compilation of custom classes
*/
public:
    TestInclude();
    
    std::string sayHi() const;
};

#endif