#include <iostream>
#include "Energy.hpp"


void Energy::set_in_jouls(int value)
{
	jouls = value;
	ergs = jouls * ergs_per_joul;
	eV = jouls / e;
}
void Energy::set_in_ergs(int value)
{
	ergs = value;
	jouls = ergs / ergs_per_joul;
	eV = jouls / e;
}
void Energy::set_in_eV(int value)
{
	eV = value;
	jouls = eV * e;
	ergs = jouls * ergs_per_joul;
}





double Energy::get_in_jouls() const
{
	return jouls;
}
double Energy::get_in_ergs() const
{
	return ergs;
}

double Energy::get_in_jouls() const
{
	return eV;
}


int main()
{
	Energy Kinematic;
	Kinematic.set_in_ergs(1);
	std::cout << Kinematic.get_in_eV() << " eV." << ' ';
	std::cout << Kinematic.get_in_jouls() << "  jouls.";
}