#include <SFML/Graphics.hpp>
#include <Eigen/Dense>
#include <nlohmann/json.hpp>
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    
    std::ifstream file("../src/conf.json");
    nlohmann::json configs = nlohmann::json::parse(file);
    const size_t kSeed = configs["seed"];
    std::cout << kSeed << '\n';
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
