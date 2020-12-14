//
// Created by Naim Rajiv on 14.12.20.
//

#ifndef INTENTRECOGNIZER_INTENTCLASSIFIER_H
#define INTENTRECOGNIZER_INTENTCLASSIFIER_H

#include<iostream>

class IntentClassifier {

private:
    std::string getIntentionByRegex(std::string inputString);
    std::string getIntentionBySubString(std::string inputString);
public:
    std::string getIntention(std::string inputString);
};


#endif //INTENTRECOGNIZER_INTENTCLASSIFIER_H
