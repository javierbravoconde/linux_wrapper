#include <iostream>
#include <UnameBase.h>
#include <UnameFactory.h>

int main(){
	UnameBase* uname = UnameFactory::getUname();
	std::cout << uname->GetDomainName() << std::endl;
	std::cout << uname->GetMachine() << std::endl;
	std::cout << uname->GetNodeName() << std::endl;
	std::cout << uname->GetRelease() << std::endl;
	std::cout << uname->GetSysName() << std::endl;
	std::cout << uname->GetVersion() << std::endl;
}
