#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
int solve(float a_, float b_)
{
    return -b_/a_;
}
TEST_CASE("Forme")
{
    CHECK(solve(1,5)==-5);
    CHECK(solve(3,4)==-4/3);
}
