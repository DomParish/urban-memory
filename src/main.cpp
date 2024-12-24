#include <SFML/Graphics.hpp>


int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({1820u, 920u}), "Down Below");
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        window.clear();
        window.display();
    }
}
