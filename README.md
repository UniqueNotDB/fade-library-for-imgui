# fade-library-for-imgui
This a fade library i made for imgui you can fade in and out

Usage:

```cpp
if (ImGui::Button("Start Fade", ImVec2(170, 30))) {
    std::thread(fadein_thenout_thread, 10).detach();
}
```

You can also do them like this:

```cpp
if (ImGui::Button("Start Fade In", ImVec2(170, 30))) {
    std::thread(fadein_thread, 10).detach();
}

if (ImGui::Button("Start Fade Out", ImVec2(170, 30))) {
    std::thread(fadeout_thread, 10).detach();
}
```

Also you can change the speed like this:
```cpp
std::thread(fadein_thread, 10/*Change number to the speed u want for example change 10 to 100*/).detach();
std::thread(fadeout_thread, 10/*Change number to the speed u want for example change 10 to 100*/).detach();
std::thread(fadein_thenout_thread, 10/*Change number to the speed u want for example change 10 to 100*/).detach();
```

if u have any issues join my discord - https://discord.gg/HsrPXP7uNa.
