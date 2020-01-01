#include "gtest/gtest.h"
#include "lib.h"

TEST(polindrom, yes){
    bool check;
    char str_one [5] {
            'm', 'i', 'n', 'i', 'm'
    };
    char str_two [6] {
            '1', '2', ' ', ' ', '2', '1'
    };
    char str_three [6]{
            'm', 'y', ' ', 'g', 'y', 'm'
    };
    char str_four [17]{
        'n', 'e', 'v', 'e', 'r', ' ',
        'o', 'd', 'd', ' ', 'o', 'r',
        ' ', 'e', 'v', 'e', 'n'
    };
    check = (polindrom(str_one, 5, 5));
    EXPECT_EQ(true, check);
    check = (polindrom(str_two, 6, 4));
    EXPECT_EQ(true, check);
    check = (polindrom(str_three, 6, 5));
    EXPECT_EQ(true, check);
    check = (polindrom(str_four, 17, 14));
    EXPECT_EQ(true, check);
}

TEST(polindrom, nop){
    bool check;
    char str_one [5] {
            '5', 'e', 'n', 'i', 'm'
    };
    char str_two [6] {
            'g', 'l', ' ', ' ', '2', '1'
    };
    char str_three [6]{
            'm', 'h', ' ', 'l', 'y', 'm'
    };
    char str_four [17]{
            'n', 'e', 'v', 'e', 'r', ' ',
            'o', 'd', 'd', ' ', 'o', 'r',
            'p', 'e', 'v', 'e', 'n'
    };
    check = (polindrom(str_one, 5, 5));
    EXPECT_EQ(false, check);
    check = (polindrom(str_two, 6, 4));
    EXPECT_EQ(false, check);
    check = (polindrom(str_three, 6, 5));
    EXPECT_EQ(false, check);
    check = (polindrom(str_four, 17, 15));
    EXPECT_EQ(false, check);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}