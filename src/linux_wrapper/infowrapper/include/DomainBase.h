/*
 * DomainBase.h
 *
 *  Created on: Feb 26, 2018
 *      Author: javier
 */

#ifndef INFOWRAPPER_SRC_DOMAINBASE_H_
#define INFOWRAPPER_SRC_DOMAINBASE_H_

#include <string>

class DomainBase {
public:
	DomainBase();
	virtual ~DomainBase();

	virtual std::string& GetDomain()=0;
};

#endif /* INFOWRAPPER_SRC_DOMAINBASE_H_ */
