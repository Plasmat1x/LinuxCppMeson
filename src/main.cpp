#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include <printf.h>

#include "Point.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    
    //test dependency
    sf::RectangleShape shape(sf::Vector2f(150,150));
    shape.setFillColor(sf::Color::Green);

    //test multisources
    Point p(5, 10);
    printf("Point(x,y) := (%d, %d)", p.x, p.y);

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