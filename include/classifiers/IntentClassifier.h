//
// Created by Naim Rajiv on 14.12.20.
//

#ifndef INTENTRECOGNIZER_INTENTCLASSIFIER_H
#define INTENTRECOGNIZER_INTENTCLASSIFIER_H

#include<iostream>
#include <regex>

class IntentClassifier {
private:
    bool getIntentionByRegex(std::string inputString, std::regex inputRegex);

    std::string getIntentionBySubStringAndRegex(std::string inputString);

public:
    std::string getIntention(std::string inputString);
};


#endif //INTENTRECOGNIZER_INTENTCLASSIFIER_H
