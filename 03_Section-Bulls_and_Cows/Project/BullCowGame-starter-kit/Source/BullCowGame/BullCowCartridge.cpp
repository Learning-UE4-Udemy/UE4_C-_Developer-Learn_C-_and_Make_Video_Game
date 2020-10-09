// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"
#include <iostream>

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    // Welcome The Player
    PrintLine(TEXT("Welcome to Bull Cows!"));
    PrintLine(TEXT("Guess the 4 letter word!")); // Megic Number Remove!
    PrintLine(TEXT("Press enter to continue..."));

    // Setting Up Game
    InitGame();
    // Set Lives

    // Promt Player For Guess
}

void UBullCowCartridge::OnInput(const FString &Input) // When the player hits enter
{
    // Cheking Player Guess
    ClearScreen();

    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You have Won!"));
    }
    else
    {
        PrintLine(TEXT("You have Lost!"));
    }

    // Check if Isogram
    // Promt To Guess Again
    // Check Right Number of Characters
    // Promt To Guess Again

    // Delete Life

    // Check if Lives > 0
    // If Yes GuessAgain
    // Show Lives Left
    // If No Show GameOver and HiddenWord?
    // Prompt To Play Agan, Press Enter To Play Again?
    // Check User Input
    // PlayAgain or Quit
}

void UBullCowCartridge::InitGame()
{
    HiddenWord = TEXT("cake");
    Lives = 5;
}