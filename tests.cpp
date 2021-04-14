#include "catch.hpp"
#include "point.hpp"

TEST_CASE("Creating the Point", "[constructor]")
{
    SECTION("When Point is default-constructed, both x and y coordinates are 0")
    {
        Point p;
        const auto expected = 0;

        const auto result_x = p._x;
        const auto result_y = p._y;

        REQUIRE(expected == result_x);
        REQUIRE(expected == result_y);
    }

    SECTION("When Point is constructed with arguments, x and y are equal to those arguments")
    {
        Point p(3, 4);
        const auto expected_x = 3;
        const auto expected_y = 4;

        const auto result_x = p._x;
        const auto result_y = p._y;

        REQUIRE(expected_x == result_x);
        REQUIRE(expected_y == result_y);
    }

    SECTION("When a copy of a Point is made, coordinates of a copy are the same as original")
    {
        Point p1(3, 4);
        Point p2 = p1;

        const auto expected_x = 3;
        const auto expected_y = 4;

        const auto result_x = p2._x;
        const auto result_y = p2._y;

        REQUIRE(expected_x == result_x);
        REQUIRE(expected_y == result_y);
    }
}

TEST_CASE("Mathematics functions", "[operators]")
{
    SECTION("When two Points are added, their x and y coordinates add up")
    {
        Point p1(4, 7);
        Point p2(6, 3);
        const auto expected = 10;

        const auto p3 = p1 + p2;
        const auto result_x = p3._x;
        const auto result_y = p3._y;

        REQUIRE(expected == result_x);
        REQUIRE(expected == result_y);
    }

    SECTION("When two Points subtract, their x and y coordinates subtract")
    {
        Point p1(4, 7);
        Point p2(2, 5);
        const auto expected = 2;

        const auto p3 = p1 - p2;
        const auto result_x = p3._x;
        const auto result_y = p3._y;

        REQUIRE(expected == result_x);
        REQUIRE(expected == result_y);
    }

    SECTION("When two Points multiply, their x and y coordinates multiply")
    {
        Point p1(4, 8);
        Point p2(4, 2);
        const auto expected = 16;

        const auto p3 = p1 * p2;
        const auto result_x = p3._x;
        const auto result_y = p3._y;

        REQUIRE(expected == result_x);
        REQUIRE(expected == result_y);
    }

    SECTION("When Point equals to a negative value of another Point, x and y coordinates are negative values of other Point")
    {
        Point p1(4, 8);
        const auto p2 = -p1;

        const auto expected_x = -4;
        const auto expected_y = -8;

        const auto result_x = p2._x;
        const auto result_y = p2._y;

        REQUIRE(expected_x == result_x);
        REQUIRE(expected_y == result_y);
    }

    SECTION("When two Points are equal,if both their x and y coordinates are equal")
    {
        Point p1(4, 8);
        Point p2(4, 8);

        bool result = p1 == p2 ? true : false;
        bool expected = true;

        REQUIRE(result == expected);
    }

    SECTION("When two Points are not equal,if one of their x and y coordinates are not equal")
    {
        Point p1(4, 8);
        Point p2(0, 8);

        bool result = p1 != p2 ? true : false;
        bool expected = true;

        REQUIRE(result == expected);
    }

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
