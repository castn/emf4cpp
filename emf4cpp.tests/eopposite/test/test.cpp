// -*- mode: c++; c-basic-offset: 4; c-basic-style: bsd; -*-
#include <ecorecpp.hpp>
#include <eopposite.hpp>
#include <fstream>
#include <memory> // for std::auto_ptr
#include <assert.h>

using namespace eopposite;
namespace ec = ecore;

int main(int argc, char* argv[])
{
    EoppositePackage_ptr eoppositePackage = EoppositePackage::_instance();
    EoppositeFactory_ptr eoppositeFactory = EoppositeFactory::_instance();

    {
		TopLevel_ptr tl ( create<TopLevel>());
        tl->setName("MyTopLevel");

        auto myLeft = create<LeftHand>();
		myLeft->setName("leftyNo1");

        auto myRight = create<RightHand>();
		myRight->setName("rightyNo1");

		tl->getLeftees().push_back(myLeft);
		tl->getRightees().push_back(myRight);

		assert( myLeft->getRightee() == nullptr );
		assert( myRight->getLeftee() == nullptr );

		/* setRightee() automatically calls setLeftee() on opposite end */
		myLeft->setRightee(myRight);

		assert( myLeft->eContainer() == tl );
		assert( myRight->eContainer() == tl );

		assert( myLeft->getRightee() == myRight );
		assert( myRight->getLeftee() == myLeft );

		{
			std::ofstream outfile ("myTopLevel.xmi");
			ecorecpp::serializer::serializer _ser(outfile);
			_ser.serialize(tl);
			outfile.close();
		}

		/* Clearing one side must clear the other side, too. */
		myLeft->setRightee(nullptr);
		assert( myLeft->getRightee() == nullptr );
		assert( myRight->getLeftee() == nullptr );
		myRight->setLeftee(myLeft);

		auto rm = create<RightMultiple>();
		tl->getRightMultiples().push_back(rm);
		auto myLeft2 = create<LeftHand>();
		tl->getLeftees().push_back(myLeft2);
		myLeft2->setName("leftyNo2");

		assert( myLeft2->getRightMultiple() == nullptr );
		rm->getLeftees().push_back(myLeft2);
		rm->getLeftees().push_back(myLeft);
		assert( myLeft2->getRightMultiple() == rm );

 		{
			std::ofstream outfile ("myTopLevel2.xmi");
			ecorecpp::serializer::serializer _ser(
				outfile,
				ecorecpp::serializer::serializer::XmiIndentMode::Indentation);
			_ser.serialize(tl);
			outfile.close();
		}

		auto it = std::find(rm->getLeftees().begin(), rm->getLeftees().end(), myLeft2);
		assert( *it == myLeft2 );

		myLeft2->setRightMultiple(nullptr);
		it = std::find(rm->getLeftees().begin(), rm->getLeftees().end(), myLeft2);
		assert( it == rm->getLeftees().end() );

		myLeft2->setRightMultiple(rm);
		it = std::find(rm->getLeftees().begin(), rm->getLeftees().end(), myLeft2);
		assert( *it == myLeft2 );
	}


    ::ecorecpp::MetaModelRepository::_instance()->load(eoppositePackage);

    ecorecpp::parser::parser _dser;
	ec::EObject_ptr eobj = _dser.load ("myTopLevel.xmi");

    {
		TopLevel_ptr tl (::ecore::as< TopLevel >(eobj));
    }
}

