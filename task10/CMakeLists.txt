cmake_minimum_required(VERSION 3.10)
project(case10)

set(CMAKE_CXX_STANDARD 14)

set(SOURCES DijkstraAlgorithm.cpp DiscreteMetric.cpp EnumerationAlgorithm.cpp EuclideanMetric.cpp FastAlgorithm.cpp main.cpp MyMetrics.cpp Point.cpp MyMetric.h MetricsI.h OptimizeAlgorithmI.h)
add_executable(execute ${SOURCES})