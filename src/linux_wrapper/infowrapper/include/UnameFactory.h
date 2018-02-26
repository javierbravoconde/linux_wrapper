/*
 * UnameFactory.h
 *
 *  Created on: Feb 26, 2018
 *      Author: javier
 */

#ifndef INFOWRAPPER_INCLUDE_UNAMEFACTORY_H_
#define INFOWRAPPER_INCLUDE_UNAMEFACTORY_H_

class UnameBase;

class UnameFactory {
public:
	UnameFactory();
	virtual ~UnameFactory();

	static UnameBase* getUname();

};

#endif /* INFOWRAPPER_INCLUDE_UNAMEFACTORY_H_ */
