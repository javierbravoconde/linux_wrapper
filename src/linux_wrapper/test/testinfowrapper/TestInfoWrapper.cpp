/*
 * TestInfoWrapper.cpp
 *
 *  Created on: Feb 26, 2018
 *      Author: javier
 */

#include "TestInfoWrapper.h"
#include <UnameBase.h>
#include <UnameFactory.h>

TestInfoWrapper::TestInfoWrapper() {
	// TODO Auto-generated constructor stub

}

TestInfoWrapper::~TestInfoWrapper() {
	// TODO Auto-generated destructor stub
}


void TestInfoWrapper::SetUp() {};

void TestInfoWrapper::TearDown() {};


TEST_F(TestInfoWrapper, GetDomainName) {
	UnameBase* uname = UnameFactory::getUname();
    EXPECT_EQ(uname->GetDomainName(), "(none)");
}

TEST_F(TestInfoWrapper, GetMachine) {
	UnameBase* uname = UnameFactory::getUname();
    EXPECT_EQ(uname->GetMachine(), "x86_64");
}

TEST_F(TestInfoWrapper, GetNodeName) {
	UnameBase* uname = UnameFactory::getUname();
    EXPECT_EQ(uname->GetNodeName(), "javier-UX305UA");
}

TEST_F(TestInfoWrapper, GetRelease) {
	UnameBase* uname = UnameFactory::getUname();
    EXPECT_EQ(uname->GetRelease(), "4.4.0-116-generic");
}

TEST_F(TestInfoWrapper, GetSysName) {
	UnameBase* uname = UnameFactory::getUname();
    EXPECT_EQ(uname->GetSysName(), "Linux");
}

TEST_F(TestInfoWrapper, GetVersion) {
	UnameBase* uname = UnameFactory::getUname();
    EXPECT_EQ(uname->GetVersion(), "#140-Ubuntu SMP Mon Feb 12 21:23:04 UTC 2018");
}
