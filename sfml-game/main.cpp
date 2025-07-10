#include <SFML/Graphics.hpp>

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(400, 400), "SFML window");
    sf::CircleShape circle(23.f);
    circle.setFillColor(sf::Color::Green);
    circle.setPosition(177, 177);

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear screen
        window.clear();

        window.draw(circle);

        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}