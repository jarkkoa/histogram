#ifndef RANDOMEINTEGERGENERATOR_H

#define RANDOMEINTEGERGENERATOR_H

#include "histogrambase.h"

class RandomEintegerGenerator : public Hist::RandomEintegerGeneratorBase
{

public:
    Hist::EInteger operator()() override;

};

#endif
