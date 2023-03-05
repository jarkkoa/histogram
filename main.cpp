#include <iostream>
#include <memory>
#include "histogrambase.h"
#include "histogram.h"
#include "randomeintegergenerator.h"
#include "Log.h"

int main()
{

    RandomEintegerGenerator gen;
    std::unique_ptr<Hist::HistogramBase> hg(new Histogram(std::make_unique<Logger>()));

    for (int i = 0; i < 100; i++)
    {
        Hist::EInteger random = gen();
        hg.get()->add(random);
        std::cout << random << std::endl;
    }

    try {

        int max = hg->getMaxValue();
        int min = hg->getMinValue();
        int mode = hg->getMode();

        std::cout << "Max: " << max << std::endl;
        std::cout << "Min: " << min << std::endl;
        std::cout << "Mode: " << mode << std::endl;
    }
    catch (std::logic_error err)
    {
        std::cout << err.what() << std::endl;
    }

    return EXIT_SUCCESS;
}
