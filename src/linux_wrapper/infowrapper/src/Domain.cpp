/*
 * Domain.cpp
 *
 *  Created on: Feb 26, 2018
 *      Author: javier
 */

#include "Domain.h"
#include <unistd.h>

Domain::Domain() {
	char name[1024];
	int ret = getdomainname(name, sizeof(name));
	d_domain.assign(name);
}

Domain::~Domain() {
	// TODO Auto-generated destructor stub
}

std::string& Domain::GetDomain(){
	return d_domain;
}
