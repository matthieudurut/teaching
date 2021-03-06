#include "complexe3.h"
#include <math.h>

Complexe::Complexe(double _reel, double _imag):reel(_reel), imag(_imag)
{
}

Complexe::~Complexe()
{
}

double Complexe::module()
{
    return sqrt(reel * reel + imag * imag);
}

double Complexe::getReel()
{
    return reel;
}

void Complexe::setReel(double _reel)
{
    reel = _reel;
}

double Complexe::getImag()
{
    return imag;
}

void Complexe::setImag(double _imag)
{
    imag = _imag;
}
