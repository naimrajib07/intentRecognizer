//
// Created by Naim Rajiv on 14.12.20.
//

#define CATCH_CONFIG_MAIN

#include "../../include/catch2/catch.hpp"
#include "../../include/classifiers/IntentClassifier.h"
#include "../../include/constants/StringConstants.h"

TEST_CASE("Intention classifier", "[getIntention]") {
    IntentClassifier intentClassifier;
    std::string intentionWeather = "What is the weather like today?";
    std::string intentionCityWeatherParis = "What is the weather like in Paris today?";
    std::string intentionCityWeatherNewYork = "What is the weather like in New York today?";
    std::string intentionCityWeatherNewYorkTomorrow = "What is the weather like in New York tomorrow?";
    std::string intentionFreeAt1300AMTomorrow = "Am I free at 13:00 PM tomorrow?";
    std::string intentionFreeAt030AMTomorrow = "Am I free at 03:00 AM tomorrow?";
    std::string intentionFreeAt100AMTomorrow = "Am I free at 1:00 pm tomorrow?";
    std::string intentionAppointment = "Do I have an appointment at 13:00pm tomorrow?";
    std::string intentionFact = "Tell me an interesting fact.";
    std::string intentionNotMatchAny = "This is test intention without any fact matching";

    REQUIRE(intentClassifier.getIntention(intentionWeather) == StringConstants::weatherIntent);
    REQUIRE(intentClassifier.getIntention(intentionCityWeatherParis) == StringConstants::weatherCityIntent);
    REQUIRE(intentClassifier.getIntention(intentionCityWeatherNewYork) == StringConstants::weatherCityIntent);
    REQUIRE(intentClassifier.getIntention(intentionCityWeatherNewYorkTomorrow) == StringConstants::weatherCityIntent);
    REQUIRE(intentClassifier.getIntention(intentionFreeAt1300AMTomorrow) == StringConstants::calendarIntent);
    REQUIRE(intentClassifier.getIntention(intentionFreeAt030AMTomorrow) == StringConstants::calendarIntent);
    REQUIRE(intentClassifier.getIntention(intentionFreeAt100AMTomorrow) == StringConstants::calendarIntent);
    REQUIRE(intentClassifier.getIntention(intentionAppointment) == StringConstants::calendarIntent);
    REQUIRE(intentClassifier.getIntention(intentionFact) == StringConstants::factIntent);
    REQUIRE(intentClassifier.getIntention(intentionNotMatchAny) == StringConstants::factNotFound);
}
