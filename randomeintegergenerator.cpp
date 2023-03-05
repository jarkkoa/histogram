#include "randomeintegergenerator.h"
#include <random>
#include <ctime>

Hist::EInteger RandomEintegerGenerator::operator()()
{
    int maxInt = Hist::Four;
    srand(time(0));
    return Hist::EInteger(rand() % (maxInt+1));
}
