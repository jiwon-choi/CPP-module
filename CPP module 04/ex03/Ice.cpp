#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}
Ice::Ice(const Ice& ref) : AMateria(ref) {}
Ice::~Ice(void) {}

Ice& Ice::operator=(const Ice& ref) {
    if (this != &ref) {
        _type = ref._type;;
        _isEquipped = ref._isEquipped;
    }
    return (*this);
}

AMateria* Ice::clone(void) const {
    return (new Ice());
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
