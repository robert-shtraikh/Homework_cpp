#include "Value.h"
#include <cmath>
#include <iostream>

void Energy::readInJoules() {
	std::cin >> m_value_in_joules;
	m_value_in_ergs = m_value_in_joules * jToErg;
	m_value_in_evs = m_value_in_joules * jToEv;
}

void Energy::readInEvs(){
	std::cin >> m_value_in_evs;
	m_value_in_joules = m_value_in_evs * evToJ;
	m_value_in_ergs = m_value_in_evs * evToErg;
}

void Energy::readInErgs() {
	std::cin >> m_value_in_ergs;
	m_value_in_joules = m_value_in_ergs * ergToJ;
	m_value_in_evs = m_value_in_ergs * ergToEv;
}

void Energy::showValue() {
	std::cout << "Value in joules: " << m_value_in_joules << std::endl;
	std::cout << "Value in ergs: " << m_value_in_ergs << std::endl;
	std::cout << "Value in electronvolts: " << m_value_in_evs << std::endl;
}