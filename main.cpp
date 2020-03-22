#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 

 int
 char
 float
 double
 bool
 wchat_t
 void

2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int secNumber = 4;
    int thirdNumber = 7;
   
    char character = 'a';
    char symbol = '%';
    char digit = '9';
    
    float floatPt1 = 1.0001f;
    float floatPt2 = 1.2f;
    float floatPt3 = 1.03f;

    double doubleFloatPt1 = 1.1;
    double doubleFloatPt2 = 1.2;
    double doubleFloatPt3 = 1.3;

    bool firstBoolean = 1;
    bool secBoolean = true;
    bool thirdBoolean = 0;

    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
    ignoreUnused(secNumber);
    ignoreUnused(thirdNumber);
    ignoreUnused(character);
    ignoreUnused(symbol);
    ignoreUnused(digit);
    ignoreUnused(floatPt1);
    ignoreUnused(floatPt2);
    ignoreUnused(floatPt3);
    ignoreUnused(doubleFloatPt1);
    ignoreUnused(doubleFloatPt2);
    ignoreUnused(doubleFloatPt3);
    ignoreUnused(firstBoolean);
    ignoreUnused(secBoolean);
    ignoreUnused(thirdBoolean);

}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

 // 1)
int numberOfLapsCompleted(int timeInSeconds, int speed) 
  {
    ignoreUnused(timeInSeconds, speed);
    return {};
  }
 
 // 2)
float measureTrackBpms(int beats, int timeInMinutes)  
 {
    ignoreUnused(beats, timeInMinutes);
    return {};
 }
 

 // 3) 
bool playTonight(int numberOfTracks, int timeInHours)
 {
    ignoreUnused(numberOfTracks, timeInHours);
    return {};
 }

 // 4)
char lastCharFrom(char[6])
 {
    return {};
 }

 // 5)
double sqrtOf(int rooting)
 {
    ignoreUnused(rooting);
    return {};
 }
 
 // 6)
void finishExercises(int numberOfExercises)
 {
    ignoreUnused(numberOfExercises);
 }

 // 7)
void turnMusicOn(bool loud)
 {
    ignoreUnused(loud);
 }

 //8) 
void rollCigarrettes(int amount)
 {
    ignoreUnused(amount);
 }

// 9)
void smokeCigarrette(bool isLighterWorking)
 {
    ignoreUnused(isLighterWorking);
 }

 //10)
void burnHouse(bool isSomebodyInThere)
 {
    ignoreUnused(isSomebodyInThere);
 }


int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto lapsCompleted = numberOfLapsCompleted(60, 200);
    //2)
    auto trackBpms = measureTrackBpms(135, 1);
    //3)
    auto playingTonight = playTonight(30, 2);
    //4)
    auto lastChar = lastCharFrom("Miguel");
    //5)
    auto sqrt = sqrtOf(64);
    //6)
    finishExercises(8);
    //7)
    turnMusicOn(1);
    //8)
    rollCigarrettes(1);
    //9)
    smokeCigarrette(true);
    //10)
    burnHouse(false);
    
    ignoreUnused(carRented);
    ignoreUnused(lapsCompleted);
    ignoreUnused(trackBpms);
    ignoreUnused(playingTonight);
    ignoreUnused(lastChar);
    ignoreUnused(sqrt);

    std::cout << "good to go!" << std::endl;
    return 0;    
}
