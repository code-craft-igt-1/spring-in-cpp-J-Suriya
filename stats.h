#ifndef STATS_H
#define STATS_H

#include <vector>

namespace Statistics {

struct Stats {
    float min;
    float max;
    float average;
};

Stats ComputeStatistics(const std::vector<float>& numbers);

} // namespace Statistics

#endif // STATS_H