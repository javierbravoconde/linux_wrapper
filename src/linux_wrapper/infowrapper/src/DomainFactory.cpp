/*
 * DomainFactory.cpp
 *
 *  Created on: Feb 26, 2018
 *      Author: javier
 */

#include "DomainFactory.h"
#include "Domain.h"

DomainFactory::DomainFactory() {
	// TODO Auto-generated constructor stub

}

DomainFactory::~DomainFactory() {
	// TODO Auto-generated destructor stub
}

DomainBase* DomainFactory::getDomain(){
	return new Domain();
}
