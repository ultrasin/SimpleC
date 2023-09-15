#include <SFML/Graphics.hpp> // Once added your path in c_cpp_properties.json you need to restart vscode

int main()
{
    sf::RenderWindow window(sf::VideoMode(300, 300), "SFML works!");
    sf::CircleShape shape1(100.f);
    sf::CircleShape shape2(120.f);
    sf::CircleShape shape3(140.f);
    shape1.setFillColor(sf::Color::Green);
    shape2.setFillColor(sf::Color::Red);
    shape3.setFillColor(sf::Color::Blue);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape1);
        window.draw(shape2);
        window.draw(shape3);
        window.display();
    }

    return 0;
}