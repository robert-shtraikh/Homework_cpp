#pragma once
#include <cmath>

static const double evToJ = 1.6 * pow(10, -19);
static const double evToErg = 1.6 * pow(10, -12);
static const double ergToJ = pow(10, -7);
static const double ergToEv = 6.24 * pow(10, 11);
static const double jToEv = 1 / evToJ;
static const double jToErg = 1 / ergToJ;

class Energy {
public:
	double m_value_in_joules;
	double m_value_in_evs;
	double m_value_in_ergs;
	void readInJoules();
	void readInEvs();
	void readInErgs();
	void showValue();
};
