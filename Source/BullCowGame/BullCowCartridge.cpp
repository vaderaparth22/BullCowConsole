// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Heyyyyyyyyyyy"));
    PrintLine(TEXT("Write anything..."));
    myString = "parth";
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    if (Input == myString)
    {
        PrintLine("You won");
    }
    else
    {
        PrintLine("You lost");
    }
}