#include "OptimizeAlgorithmI.h"

class EnumerationAlgorithm : public OptimizeAlgorithmI {
public:
    std::string getName() override;
    std::vector<std::vector<Point>>optimizeRoutes(size_t upperBound, const std::vector<Point>& points, MetricsI* metric) override;
};

