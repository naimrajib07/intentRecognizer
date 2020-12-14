## Intent Recognizer
A simple small intent recognition command line tool.

The idea is to be able to ask a set of predefined questions and accurately recognize the intent of the user. The predefined intents are the following:
* What is the weather like today? => Prints (Intent: Get Weather)
* What is the weather like in Paris today? => Prints (Intent: Get Weather City)
* What is the weather like in New York today? => Prints (Intent: Get Weather City)
* Am I free at 13:00 PM tomorrow? ==> Prints (Intent: Check calendar)
* Tell me an interesting fact. => Prints (Intent: Get Fact)

#### How to build and run application
To build the application one can use following commands

```shell
mkdir build && cd build && cmake ..  && make
```

The above command will generate 

```shell
intentRecognizer // which will take standard cli input to predict intention for specific format

intentRecognizerTest // which will use to run unit test
```

Now one can run the above executor like bellow
```shell
./intentRecognizer //to run the application

./intentRecognizerTest //to run the unit test
```

#### Used external library
- For unit test **catch2** 
