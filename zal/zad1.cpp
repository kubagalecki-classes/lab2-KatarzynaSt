#include "catch.hpp"

#include "ResourceManager.hpp"

TEST_CASE("RAII", "[]")
{
    {
        ResourceManager rm{};//konstr domyśl
        REQUIRE(ConstructionTracker::defaults == 1);
        REQUIRE_NOTHROW(rm.get());
    }
    REQUIRE(ConstructionTracker::live == 0);
}
