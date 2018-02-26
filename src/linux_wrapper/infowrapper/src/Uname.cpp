/*
 * Uname.cpp
 *
 *  Created on: Feb 26, 2018
 *      Author: javier
 */

#include "Uname.h"

#include <sys/utsname.h>


Uname::Uname() {

	utsname utsName;
	int ret = uname(&utsName);
	d_domainName.assign(utsName.domainname);
	d_machine.assign(utsName.machine);
	d_nodeName.assign(utsName.nodename);
	d_release.assign(utsName.release);
	d_sysName.assign(utsName.sysname);
	d_version.assign(utsName.version);
}

Uname::~Uname() {
	// TODO Auto-generated destructor stub
}

const std::string& Uname::GetDomainName(){
	return d_domainName;
}
const std::string& Uname::GetMachine(){
	return d_machine;
}
const std::string& Uname::GetNodeName(){
	return d_nodeName;
}
const std::string& Uname::GetRelease(){
	return d_release;
}
const std::string& Uname::GetSysName(){
	return d_sysName;
}
const std::string& Uname::GetVersion(){
	return d_version;
}

