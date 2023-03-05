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

Hist::EInteger Histogram::getMode() const
{
    auto mode = std::max_element
    (
        histogramData_.begin(), histogramData_.end(),
        [] (const auto &a, const auto &b) {return a.second < b.second;}
    );

    return mode->first;
}
