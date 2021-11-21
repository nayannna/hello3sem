#pragma once

class Energy
{
public:
	Energy() :jouls(0), ergs(0), eV(0)
	{}
	~Energy()
	{}
	void set_in_jouls(int value);
	void set_in_ergs(int value);
	void set_in_eV(int value);

	double get_in_jouls() const;
	double get_in_ergs() const;
	double get_in_eV() const;

	static const double e, ergs_per_joul;

private:
	double jouls, ergs, eV;
};

const double Energy::e = 1.6e-19, Energy::ergs_per_joul = 1e7;