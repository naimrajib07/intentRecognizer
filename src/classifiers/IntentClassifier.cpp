//
// Created by Naim Rajiv on 14.12.20.
//

#include "../../include/classifiers/IntentClassifier.h"
#include "../../include/constants/RegexConstants.h"
#include "../../include/constants/StringConstants.h"


/**
 * Simple prediction of user input based on regular expression and sub string
 *
 * @param inputString which is given from standard cli input if an
 * @return if matches then Intent otherwise empty string
 */
std::string IntentClassifier::getIntention(std::string inputString) {
    // match by regular expression for Intent: Check calendar
    bool calendarMatch = this->getIntentionByRegex(inputString, RegexConstants::timeRegexPattern);

    if (calendarMatch)
        return StringConstants::calendarIntent;

    // match by substring and regular expression for Intent: Get Weather City
    // match by substring  for Intent: Get Weather or Intent: Get Fact
    return this->getIntentionBySubStringAndRegex(inputString);
}

/**
 * Determine whether the intention of the input string is to use calendar or not based on time format e.g 11:00 PM
 *
 * @param inputString
 * @param inputRegex can be either any input from RegexConstants
 * @return true if match found otherwise false
 */
bool IntentClassifier::getIntentionByRegex(std::string inputString, std::regex inputRegex) {
    std::smatch totalMatch;
    bool match = false;

    regex_search(inputString, totalMatch, RegexConstants::timeRegexPattern);
    regex_search(inputString, totalMatch, inputRegex);

    if (totalMatch.length() > 0) {
        match = true;
    }

    return match;
}

/**
 * Determine weather or fact using substring and regex
 * @param inputString
 * @return if matches then Intent otherwise empty string
 */
std::string IntentClassifier::getIntentionBySubStringAndRegex(std::string inputString) {
    if (inputString.find(StringConstants::weatherSubStringPattern) != std::string::npos) {
        bool cityWeatherMatch = this->getIntentionByRegex(inputString, RegexConstants::cityWeatherRegexPattern);

        if (cityWeatherMatch) {
            return StringConstants::weatherCityIntent;
        }

        return StringConstants::weatherIntent;
    }

    if (inputString.find(StringConstants::factSubStringPattern) != std::string::npos) {
        return StringConstants::factIntent;
    }

    return std::string("");
}
