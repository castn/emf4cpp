// -*- mode: c++; c-basic-offset: 4; c-basic-style: bsd; -*-
#include <ecorecpp.hpp>
#include <company.hpp>
#include <fstream>
#include <assert.h>

using namespace company;
using namespace ecore;

int main(int argc, char* argv[])
{
    CompanyPackage_ptr companyPackage = CompanyPackage::_instance();
    CompanyFactory_ptr companyFactory = CompanyFactory::_instance();

    {
		Company_ptr umu ( companyFactory->createCompany());
        umu->setName("UMU");

        Department_ptr catedraSAES = companyFactory->createDepartment();
        catedraSAES->setNumber(8515);

        Employee_ptr asenac = companyFactory->createEmployee();
        asenac->setName("Andres Senac");

		/* Check if a containment relation properly sets the eContainer() attribute. */
        catedraSAES->getEmployees().push_back(asenac);
		assert( asenac->eContainer() == catedraSAES );

		catedraSAES->getEmployees().remove(asenac);
		assert( asenac->eContainer() == nullptr );

        catedraSAES->getEmployees().push_back(asenac);
		assert( asenac->eContainer() == catedraSAES );
		
        Employee_ptr dsevilla = companyFactory->createEmployee();
        dsevilla->setName("Diego Sevilla");
        catedraSAES->getEmployees().push_back(dsevilla);

		/* Check if a containment relation properly sets the eContainer() attribute. */
		assert( asenac->eContainer() == dsevilla->eContainer() );

		/* Initially there is always no eContainer. */
		PhonebookEntry_ptr phone = companyFactory->createPhonebookEntry();
		assert( phone->eContainer() == nullptr );

		/* Check if a containment relation properly sets the eContainer() attribute. */
		asenac->setPhonebookEntry(phone);
		assert( phone->eContainer() == asenac );

        catedraSAES->setManager(dsevilla);

        umu->getDepartments().push_back(catedraSAES);

        umu->_initialize();

        std::ofstream outfile ("UMU.xmi");
        ecorecpp::serializer::serializer _ser(outfile);
        _ser.serialize(umu);
        outfile.close();
    }


    ::ecorecpp::MetaModelRepository::_instance()->load(companyPackage);

    ecorecpp::parser::parser _dser;
    EObject_ptr eobj = _dser.load ("UMU.xmi");

    {
		Company_ptr umu (::ecore::as< Company >(eobj));
    }
}

