/*
 * UnameBase.h
 *
 *  Created on: Feb 26, 2018
 *      Author: javier
 */

#ifndef INFOWRAPPER_INCLUDE_UNAMEBASE_H_
#define INFOWRAPPER_INCLUDE_UNAMEBASE_H_

#include <string>

class UnameBase {

public:
	UnameBase();
	virtual ~UnameBase();
	virtual const std::string& GetDomainName() = 0;
	virtual const std::string& GetMachine() = 0;
	virtual const std::string& GetNodeName() = 0;
	virtual const std::string& GetRelease() = 0;
	virtual const std::string& GetSysName() = 0;
	virtual const std::string& GetVersion() = 0;
};

#endif /* INFOWRAPPER_INCLUDE_UNAMEBASE_H_ */
