#include "histogram.h"
#include <algorithm>
#include <stdexcept>


Histogram::~Histogram()
{

}

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
    if (histogramData_.empty())
    {
        throw std::logic_error("Histogram is empty, mode is undefined");
    }

    auto mode = std::max_element(
        histogramData_.begin(), histogramData_.end(),
        [](const auto &a, const auto &b)
        { return a.second < b.second; });

    return mode->first;
}

Hist::EInteger Histogram::getMinValue() const
{
    if (histogramData_.empty())
    {
        throw std::logic_error("Histogram is empty, min value doesn't exist");
    }

    auto mode = std::min_element(histogramData_.begin(), histogramData_.end());
    return mode->first;
}

Hist::EInteger Histogram::getMaxValue() const
{
    if (histogramData_.empty())
    {
        throw std::logic_error("Histogram is empty, max value doesn't exist");
    }

    auto mode = std::max_element(histogramData_.begin(), histogramData_.end());
    return mode->first;
}
