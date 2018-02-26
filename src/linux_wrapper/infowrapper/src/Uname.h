/*
 * Uname.h
 *
 *  Created on: Feb 26, 2018
 *      Author: javier
 */

#ifndef INFOWRAPPER_SRC_UNAME_H_
#define INFOWRAPPER_SRC_UNAME_H_

#include <string>
#include <UnameBase.h>

struct utsname;

class Uname : public UnameBase {
public:
	Uname();
	virtual ~Uname();

	const std::string& GetDomainName();
	const std::string& GetMachine();
	const std::string& GetNodeName();
	const std::string& GetRelease();
	const std::string& GetSysName();
	const std::string& GetVersion();

	std::string d_domainName;
	std::string d_machine;
	std::string d_nodeName;
	std::string d_release;
	std::string d_sysName;
	std::string d_version;

};

#endif /* INFOWRAPPER_SRC_UNAME_H_ */
