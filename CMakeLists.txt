cmake_minimum_required(VERSION 3.17)
project(intentRecognizer)

set(CMAKE_CXX_STANDARD 17)

add_executable(intentRecognizer src/main.cpp src/classifiers/IntentClassifier.cpp include/classifiers/IntentClassifier.h src/regex/RegexConstants.cpp include/regex/RegexConstants.h)