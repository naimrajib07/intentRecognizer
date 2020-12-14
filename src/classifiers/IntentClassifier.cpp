//
// Created by Naim Rajiv on 14.12.20.
//

#include "../../include/classifiers/IntentClassifier.h"
#include "../../include/regex/RegexConstants.h"

std::string IntentClassifier::getIntention(std::string inputString) {
    // match by substring and regular expression for Intent: Get Weather City
    // match by substring  for Intent: Get Weather or Intent: Get Fact
    // match by regular expression for Intent: Check calendar
    return this->getIntentionByRegex(inputString);

}


std::string IntentClassifier::getIntentionByRegex(std::string inputString) {
    std::smatch match;
    regex_search(inputString, match, RegexConstants::timeRegexPattern);
    if (match.length() > 0) {
        return "Get: Calender";
    }
}


std::string IntentClassifier::getIntentionBySubString(std::string inputString) {
    // todo: implement me
}
