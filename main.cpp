#include <iostream>
#include <memory>
#include <fstream>

#include <sfml/graphics.hpp>
#include "imgui.h"
#include "imgui-sfml.h"

int main(int argc, char* argv[]){

    const int wWidth = 1280;
    const int wHeight = 720;
    sf::RenderWindow window(sf::VideoMode(wWidth,wHeight), "SFML Working");
    window.setFramerateLimit(60);

    ImGui::SFML::Init(window); 
    sf::Clock deltaClock;

    ImGui::GetStyle().ScaleAllSizes(1.0f);

    float c[3] = { 0.0f, 1.0f, 1.0f };

    float circleRadius = 50;
    int circleSegments = 32;
    float circleSpeedX = 1.0f;
    float circleSpeedY = 0.5f;
    bool drawCircle = true;
    bool drawText = true;

    sf::CircleShape circle(circleRadius, circleSegments);

    circle.setPostition(10.0f, 10.0f)

    sf::Font myFont;

    if (!myFont.loadFromFile("fonts/tech.ttf")){

        std::cerr << "Could not load font\n";
        exit(-1);
    }

    sf::Text text("Sample Text", myFont, 24);

    text.setPosition(0, wHeight - (float)text.getCharacterSize());

    char displayString[255] = "Sample Text";

    while (windowe.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            ImGui::SFML::ProcessEvent(window, event);

            if (event.type == sf::Event::KeyPressed) {
                std::cout << "Key pressed with code = " << event.key.code << "\n";

                if (event.key.code == sf::Keyboard::X) {
                    circleSpeedX *= -1.0f;
                }
            }
        }

        ImGui::SFML::Update(window, deltaClock.restart());

        ImGui::Begin 
    }

    
}