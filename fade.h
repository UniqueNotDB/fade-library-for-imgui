#pragma once
#include <Windows.h>
#include "../imgui/imgui.h" // Set to ur path
#include "../imgui/imgui_internal.h" // Set to ur path
float Alpha; // Set alpha so it can be used and set
bool bfading = false; // Set bool to check if its already fading to stop crashes
/*
Made by NotDB.
discord - https://discord.gg/HsrPXP7uNa.
Dm on discord if u have any issues!
~------------------------------------------------------------------------------------------------------------~
This is a fade library I made for imgui(https://github.com/ocornut/imgui) its a cool thing to add to ur imgui!
*/
void fadeout_thread(int speed) { // IN
    for (Alpha = 1.0f; Alpha >= 0.f; Alpha -= 0.2f) {
        ImGui::GetStyle().Alpha = Alpha; // Set alpha
        Sleep(speed); // Sleep for the set speed
    }
}

void fadein_thread(int speed) { // OUT 
    for (Alpha = 0.1f; Alpha <= 1.1f; Alpha += 0.1f) {
        ImGui::GetStyle().Alpha = Alpha - 0.1; // Set alpha
        Sleep(speed); // Sleep for the set speed
    }
    ImGui::GetStyle().Alpha = 1.f;
}

void fadein_thenout_thread(int speed) { // IN AND OUT
    if (!bfading) {
        bfading = true; // Set to true to say were fading
        fadeout_thread(speed); // Out
        Sleep(1000); // You can change this
        fadein_thread(speed); // In
        bfading = false; // Set to false to say were not fading
    }
}