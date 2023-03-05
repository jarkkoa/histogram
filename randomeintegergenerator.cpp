#include "randomeintegergenerator.h"
#include <random>
#include <ctime>

Hist::EInteger RandomEintegerGenerator::operator()()
{
    int maxInt = Hist::Four;
    return Hist::EInteger(rand() % (maxInt+1));
}
