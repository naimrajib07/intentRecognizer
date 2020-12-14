#include <iostream>
#include "../include/classifiers//IntentClassifier.h"

using namespace std;

int main() {
    string input_intention, output_prediction;
    IntentClassifier intentClassifier;

    cout << "Please write your query:" << std::endl;
    getline(cin, input_intention);

    output_prediction = intentClassifier.getIntention(input_intention);
    cout << output_prediction << std::endl;;

    return 0;
}
