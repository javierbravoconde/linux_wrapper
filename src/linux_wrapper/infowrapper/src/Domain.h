/*
 * Domain.h
 *
 *  Created on: Feb 26, 2018
 *      Author: javier
 */

#ifndef INFOWRAPPER_SRC_DOMAIN_H_
#define INFOWRAPPER_SRC_DOMAIN_H_

#include "DomainBase.h"

class Domain : public DomainBase {
public:
	Domain();
	virtual ~Domain();

	std::string& GetDomain();

	std::string d_domain;
};

#endif /* INFOWRAPPER_SRC_DOMAIN_H_ */
