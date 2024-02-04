#include <iostream>
#include <memory>
#include <fstream>

// #include <SFML/Graphics.hpp>
// #include "imgui.h"
// #include "imgui-SFML.h"

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
    
}