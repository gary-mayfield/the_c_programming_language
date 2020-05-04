#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "..\catch.hpp"

#include "squeeze.h"

using Catch::Matchers::Equals;

TEST_CASE( "squeeze deletes chars from s2 in s1", "[squueze]" ) {
    char s1[] = "Bob Bobbington";
    char s2[] = "Bb";
    squeeze(s1, s2);
    REQUIRE_THAT(s1, Equals("o oington"));
}

TEST_CASE( "squeeze doesn't delete chars from s1 when s2 doesn't have matches", "[squueze]" ) {
    char s1[] = "Bob Bobbington";
    char s2[] = "AaZz";
    squeeze(s1, s2);
    REQUIRE_THAT(s1, Equals("Bob Bobbington"));
}

TEST_CASE( "squeeze handles case where s2 is empty", "[squueze]" ) {
    char s1[] = "Bob Bobbington";
    char s2[] = "";
    squeeze(s1, s2);
    REQUIRE_THAT(s1, Equals("Bob Bobbington"));
}

TEST_CASE( "squeeze handles case where s1 is empty", "[squueze]" ) {
    char s1[] = "";
    char s2[] = "AaBbCcDdEe";
    squeeze(s1, s2);
    REQUIRE_THAT(s1, Equals(""));
}

TEST_CASE( "squeeze handles case where both s1 and s2 are empty", "[squueze]" ) {
    char s1[] = "";
    char s2[] = "";
    squeeze(s1, s2);
    REQUIRE_THAT(s1, Equals(""));
}