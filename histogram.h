#ifndef HISTOGRAM_H

#define HISTOGRAM_H

#include "histogrambase.h"
#include <unordered_map>

class Histogram : public Hist::HistogramBase
{
    Histogram();
    ~Histogram();

    public:

        void add(Hist::EInteger) override;

        /**
         * @brief Get the Mode object
         * 
         * @return Hist::EInteger 
         */
        Hist::EInteger getMode() const override;


        /**
         * @brief Get the Min Value object
         * 
         * @return Hist::EInteger 
         */
        Hist::EInteger getMinValue() const override;


        /**
         * @brief Get the Max Value object
         * 
         * @return Hist::EInteger 
         */
        Hist::EInteger getMaxValue() const override;


    private:

        // Usimg map to easily keep track of EInt counts
        std::unordered_map<Hist::EInteger, int> histogramData_;
};


#endif