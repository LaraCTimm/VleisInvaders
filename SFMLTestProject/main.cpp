#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "Majestic Window");
    
    sf::RectangleShape rectangle(sf::Vector2f(800,800));
    
    // Set bullet attributes
//    rectangle.setOutlineThickness(2);
//    rectangle.setOutlineColor(sf::Color::Green);
    rectangle.setFillColor(sf::Color::White);
//    rectangle.setOrigin(sf::Vector2f(0,0));
//    rectangle.setRotation(_angle*2);
    rectangle.setPosition(0, 0);
    
    sf::Texture texture;
    texture.loadFromFile("C:/Users/l_tim/Google Drive/1 Electrical 3rd Year/Sofware_II/SFMLTest/Reference images and ideas/vertex_Spritesheet.png");
//    sf::Sprite sprite;
//    sprite.setTexture(texture);
    rectangle.setTexture(&texture);
    sf::IntRect rectSourceSprite(0, 0, 800,800);
    rectangle.setTextureRect(rectSourceSprite);
    
    sf::Clock clock;
    
    while (window.isOpen())
    {
        sf::Event event;
        
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        
        if (clock.getElapsedTime().asSeconds() > 0.1f)
        {
            if (rectSourceSprite.left == 5600)
                rectSourceSprite.left = 0;
            else
                 rectSourceSprite.left += 800;
                 
            rectangle.setTextureRect(rectSourceSprite);
            clock.restart();
        }
        
        
        window.clear(sf::Color::Black);
        window.draw(rectangle);
        window.display();
    }
}
