#include <iostream>
#include <UnameBase.h>
#include <UnameFactory.h>
#include <DomainBase.h>
#include <DomainFactory.h>

int main(){
	UnameBase* uname = UnameFactory::getUname();
	std::cout << uname->GetDomainName() << std::endl;
	std::cout << uname->GetMachine() << std::endl;
	std::cout << uname->GetNodeName() << std::endl;
	std::cout << uname->GetRelease() << std::endl;
	std::cout << uname->GetSysName() << std::endl;
	std::cout << uname->GetVersion() << std::endl;

	DomainBase* domain = DomainFactory::getDomain();
	std::cout << domain->GetDomain() << std::endl;
}
