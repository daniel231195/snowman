#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}


TEST_CASE("Good snowman code") {
	// check hat 1-4
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(21114411)) == nospaces(" ___ \n.....\n(.,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(31114411)) == nospaces("  _  \n /_'92'\n(.,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(41114411)) == nospaces(" ___ \n(_*_)\n(.,.)\n( : )\n( : )"));
	// check nose/mouth 5-7
	CHECK(nospaces(snowman(12114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(13114411)) == nospaces("_===_\n(._.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(14114411)) == nospaces("_===_\n(. .)\n( : )\n( : )"));
	// check eye  8-13
	CHECK(nospaces(snowman(11214411)) == nospaces("_===_\n(o,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(11314411)) == nospaces("_===_\n(O,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(11414411)) == nospaces("_===_\n(-,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(11124411)) == nospaces("_===_\n(.,o)\n( : )\n( : )"));
	CHECK(nospaces(snowman(11134411)) == nospaces("_===_\n(.,O)\n( : )\n( : )"));
	CHECK(nospaces(snowman(11144411)) == nospaces("_===_\n(.,-)\n( : )\n( : )"));
	// check arm 14-19
	CHECK(nospaces(snowman(11111411)) == nospaces("_===_\n(.,.)\n<( : )\n( : )"));
	CHECK(nospaces(snowman(11112411)) == nospaces("_===_\n(.,.)\n'92'( : )\n( : )"));
	CHECK(nospaces(snowman(11113411)) == nospaces("_===_\n(.,.)\n/( : )\n( : )"));
	CHECK(nospaces(snowman(11114111)) == nospaces("_===_\n(.,.)\n( : )>\n( : )"));
	CHECK(nospaces(snowman(11114211)) == nospaces("_===_\n(.,.)\n( : )/\n( : )"));
	CHECK(nospaces(snowman(11114311)) == nospaces("_===_\n(.,.)\n( : )'92'\n( : )"));
	// check torso 20-22
	CHECK(nospaces(snowman(11114421)) == nospaces("_===_\n(.,.)\n(] [)\n( : )"));
	CHECK(nospaces(snowman(11114431)) == nospaces("_===_\n(.,.)\n(> <)\n( : )"));
	CHECK(nospaces(snowman(11114441)) == nospaces("_===_\n(.,.)\n(   )\n( : )"));
	// check base 23-26
	CHECK(nospaces(snowman(11114412)) == nospaces("_===_\n(.,.)\n( : )\n(" ")"));
	CHECK(nospaces(snowman(11114413)) == nospaces("_===_\n(.,.)\n( : )\n(___)"));
	CHECK(nospaces(snowman(11114414)) == nospaces("_===_\n(.,.)\n( : )\n(   )"));
	//
    /* Add more checks here */
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
	CHECK_THROWS(snowman(-1));
	CHECK_THROWS(snowman(8));
	CHECK_THROWS(snowman(71182111));
	CHECK_THROWS(snowman(18182111));
	CHECK_THROWS(snowman(11882111));
	CHECK_THROWS(snowman(11182111));
	CHECK_THROWS(snowman(11189111));
	CHECK_THROWS(snowman(11182911));
	CHECK_THROWS(snowman(11182191));
	CHECK_THROWS(snowman(11182119));

    /* Add more checks here */
}

