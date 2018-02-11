//
//  FBullCowGame.hpp
//  Bull & Cow Game
//
//  Created by Alex Deltomme on 05/02/2018.
//  Copyright © 2018 Alex Deltomme. All rights reserved.
// 

#pragma once

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <stdio.h>

#endif /* FBullCowGame_hpp */

#include <string>

using FString = std::string;
using int32 = int;

struct FBullCowCount
{
    int32 Bulls = 0;
    int32 Cows = 0;
};

enum class EGuessStatus
{
 Invalid_Status,
 OK,
 Not_Isogram,
 Not_Lowercase,
 Wrong_Length
    
};

class FBullCowGame
{
public:
    FBullCowGame(); // constructor
    
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    int32 GetHiddenWordLength() const;
    bool IsGameWon() const;
    EGuessStatus CheckGuessValidity(FString) const;
    
    void Reset();
    FBullCowCount SubmitValidGuess(FString);
    

private:
    int32 MyCurrentTry;
    FString MyHiddenWord;
    bool bGameIsWon;
    
    bool IsIsogram(FString) const;
    bool IsLowercase(FString) const;
};
