/*
 * DomainFactory.h
 *
 *  Created on: Feb 26, 2018
 *      Author: javier
 */

#ifndef INFOWRAPPER_SRC_DOMAINFACTORY_H_
#define INFOWRAPPER_SRC_DOMAINFACTORY_H_

class DomainBase;

class DomainFactory {
public:
	DomainFactory();
	virtual ~DomainFactory();

	static DomainBase* getDomain();
};

#endif /* INFOWRAPPER_SRC_DOMAINFACTORY_H_ */
