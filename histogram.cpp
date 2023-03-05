#include "histogram.h"
#include <algorithm>

void Histogram::add(Hist::EInteger newInt)
{
    if (histogramData_.find(newInt) == histogramData_.end())
    {
        histogramData_.insert(std::make_pair(newInt, 1));
    }
    else
    {
        histogramData_.at(newInt) += 1;
    }
}

