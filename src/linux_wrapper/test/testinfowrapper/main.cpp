/*
 * main.cpp
 *
 *  Created on: Feb 26, 2018
 *      Author: javier
 */
#include <iostream>

#include <gtest/gtest.h>

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    int ret = RUN_ALL_TESTS();
    return ret;
}

