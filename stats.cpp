#include "stats.h"
#include <algorithm>
#include <numeric>
#include <limits>
#include <cmath>

namespace Statistics {

Stats ComputeStatistics(const std::vector<float>& numbers) {
    Stats stats;
    if (numbers.empty()) {
        stats.min = std::numeric_limits<float>::quiet_NaN();
        stats.max = std::numeric_limits<float>::quiet_NaN();
        stats.average = std::numeric_limits<float>::quiet_NaN();
        return stats;
    }

    stats.min = *std::min_element(numbers.begin(), numbers.end());
    stats.max = *std::max_element(numbers.begin(), numbers.end());
    stats.average = std::accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();

    return stats;
}

} // namespace Statistics