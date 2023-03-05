#include <iostream>
#include <memory>
#include "histogrambase.h"
#include "histogram.h"
#include "randomeintegergenerator.h"
#include "Log.h"

using namespace std;

int main()
{

    RandomEintegerGenerator gen;
    Hist::HistogramBase *hg = new Histogram(std::make_unique<Logger>());

    for (int i = 0; i < 10; i++)
    {
        Hist::EInteger random = gen();
        hg->add(random);
        std::cout << random << std::endl;
    }

    delete hg;

    return EXIT_SUCCESS;
}
