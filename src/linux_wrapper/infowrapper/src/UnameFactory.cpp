/*
 * UnameFactory.cpp
 *
 *  Created on: Feb 26, 2018
 *      Author: javier
 */

#include "UnameFactory.h"

#include "Uname.h"

UnameFactory::UnameFactory() {
	// TODO Auto-generated constructor stub

}

UnameFactory::~UnameFactory() {
	// TODO Auto-generated destructor stub
}

UnameBase* UnameFactory::getUname(){
	return new Uname();
}
