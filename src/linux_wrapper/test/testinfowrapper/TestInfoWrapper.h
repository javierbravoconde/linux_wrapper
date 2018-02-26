/*
 * TestInfoWrapper.h
 *
 *  Created on: Feb 26, 2018
 *      Author: javier
 */

#ifndef TEST_TESTINFOWRAPPER_TESTINFOWRAPPER_H_
#define TEST_TESTINFOWRAPPER_TESTINFOWRAPPER_H_

#include "gtest/gtest.h"


class TestInfoWrapper : public ::testing::Test  {
public:
	TestInfoWrapper();
	virtual ~TestInfoWrapper();

    virtual void SetUp();
    virtual void TearDown();

};

#endif /* TEST_TESTINFOWRAPPER_TESTINFOWRAPPER_H_ */
