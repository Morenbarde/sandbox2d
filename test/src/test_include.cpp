#include "test_include.h"

TestInclude::TestInclude()
{

}

std::string TestInclude::sayHi() const
{
    return std::string("Test says hello!");
}