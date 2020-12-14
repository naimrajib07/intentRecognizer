//
// Created by Naim Rajiv on 14.12.20.
//

#include "../../include/constants/RegexConstants.h"

namespace RegexConstants {
    extern const std::regex timeRegexPattern{("([0-2][0123]|[1-9]):[0-5][0-9](\\s)(AM|PM|am|pm)(\\s)(tomorrow)|([0-2][0123]|[1-9]):[0-5][0-9](\\s)(AM|PM|am|pm)|([0-2][0123]|[1-9]):[0-5][0-9]")};
    extern const std::regex cityWeatherRegexPattern{("in(\\s)[a-zA-Z|\\sa-zA-Z]*(\\s)(today|tomorrow)|in(\\s)[a-zA-Z|\\sa-zA-Z]*")};
}