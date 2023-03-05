#ifndef HISTOGRAM_H

#define HISTOGRAM_H

#include "histogrambase.h"
#include <unordered_map>

class Histogram : public Hist::HistogramBase
{
    Histogram();
    ~Histogram();

    public:

        /**
         * @brief Add an EInteger into the histogram
         * 
         */
        void add(Hist::EInteger) override;

        /**
         * @brief Get the mode of the histogram
         * @pre At least one element is added to the histogram.
         * @pre The distribution is unimodal
         * @post Promises to return the mode of a unimodal histogram if the preconditions are satisfied
         * @throws std::logic_error The histogram is empty.
         * @return Hist::EInteger The mode of the histogram.
         */
        Hist::EInteger getMode() const override;


        /**
         * @brief Get the min value of the histogram
         * @pre At least one element is added to the histogram
         * @throws std::logic_error if the precondition isn't satisfied
         * @return Hist::EInteger Min value of the histogram
         */
        Hist::EInteger getMinValue() const override;


        /**
         * @brief Get the max value of the histogram
         * @pre At least one element is added to the histogram
         * @throws std::logic_error if the precondition isn't satisfied
         * @return Hist::EInteger 
         */
        Hist::EInteger getMaxValue() const override;


    private:

        // Usimg map to easily keep track of EInt counts
        std::unordered_map<Hist::EInteger, int, std::hash<int>> histogramData_;
};


#endif