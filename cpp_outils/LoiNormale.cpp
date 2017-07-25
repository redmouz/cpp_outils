/*
 * LoiNormale.cpp
 *
 *  Created on: 25 juil. 2017
 *      Author: Administrateur
 */

#include "LoiNormale.hpp"

namespace distribution {

LoiNormale::LoiNormale() {
	mean = 0;
	sigma = 0;
	v_max = DBL_MAX;
	v_min = DBL_MIN;
}

LoiNormale::LoiNormale(const double& m, const double& s){
	mean = m;
	sigma = s;
}

double LoiNormale::getMean() const {
	return mean;
}

void LoiNormale::setMean(double mean) {
	this->mean = mean;
}

double LoiNormale::getSigma() const {
	return sigma;
}

void LoiNormale::setSigma(double sigma) {
	this->sigma = sigma;
}

double LoiNormale::E() const{
	return mean;
}

double LoiNormale::V() const{
	return sigma*sigma;
}


LoiNormale::~LoiNormale() {
	// TODO Auto-generated destructor stub
}

} /* namespace distribution */
