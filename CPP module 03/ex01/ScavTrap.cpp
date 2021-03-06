#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap Default Constructor is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " Constructor is called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& ref) : ClapTrap(ref) {
    std::cout << "ScavTrap Copy Constructor is called" << std::endl;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap " << _name << " Destructor is called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& ref) {
    if (this != &ref)
        ClapTrap::operator=(ref);
    std::cout << "ScavTrap " << _name << " assignment operator is called" << std::endl;
    return (*this);
}

void ScavTrap::attack(std::string const& target) {
    std::cout << "ScavTrap "<< _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode" << std::endl;
}
