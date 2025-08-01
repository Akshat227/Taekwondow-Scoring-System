#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

float height = 300;
float width = 600;


int main(int argc, char const *argv[])
{
    sf::Font font;
    if (!font.loadFromFile("Orbitron-VariableFont_wght.ttf"))
    {
       std::cerr <<"Font couldn't be loaded!"<< "\n";
    }

    sf::Text CHONG;
    CHONG.setFont(font);
    CHONG.setString("Player 1");
    CHONG.setCharacterSize(24); // size in pixels
    CHONG.setFillColor(sf::Color::White);
    CHONG.setStyle(sf::Text::Bold);
    CHONG.setPosition((115) - 10.0f,4);

    sf::Text CHONGSCORE;
    CHONGSCORE.setFont(font);
    CHONGSCORE.setString("0");
    CHONGSCORE.setCharacterSize(80); // size in pixels
    CHONGSCORE.setFillColor(sf::Color::White);
    CHONGSCORE.setStyle(sf::Text::Bold);
    CHONGSCORE.setPosition((115), 50 );

    sf::Text ADDER;
    ADDER.setFont(font);
    ADDER.setString("+");
    ADDER.setCharacterSize(25); // size in pixels
    ADDER.setFillColor(sf::Color::White);
    ADDER.setStyle(sf::Text::Bold);
    ADDER.setPosition((35), 243 );

    sf::Text SUBTRACTER;
    SUBTRACTER.setFont(font);
    SUBTRACTER.setString("-");
    SUBTRACTER.setCharacterSize(25); // size in pixels
    SUBTRACTER.setFillColor(sf::Color::White);
    SUBTRACTER.setStyle(sf::Text::Bold);
    SUBTRACTER.setPosition((103), 243 );

    sf::Text ADDER2;
    ADDER2.setFont(font);
    ADDER2.setString("+");
    ADDER2.setCharacterSize(25); // size in pixels
    ADDER2.setFillColor(sf::Color::White);
    ADDER2.setStyle(sf::Text::Bold);
    ADDER2.setPosition((473), 243 );

    sf::Text SUBTRACTER2;
    SUBTRACTER2.setFont(font);
    SUBTRACTER2.setString("-");
    SUBTRACTER2.setCharacterSize(25); // size in pixels
    SUBTRACTER2.setFillColor(sf::Color::White);
    SUBTRACTER2.setStyle(sf::Text::Bold);
    SUBTRACTER2.setPosition((543), 243 );

    sf::Text HONG;
    HONG.setFont(font);
    HONG.setString("Player 2");
    HONG.setCharacterSize(24); // size in pixels
    HONG.setFillColor(sf::Color::White);
    HONG.setStyle(sf::Text::Bold);
    HONG.setPosition((400), 4);

    sf::Text HONGSCORE;
    HONGSCORE.setFont(font);
    HONGSCORE.setString("0");
    HONGSCORE.setCharacterSize(80); // size in pixels
    HONGSCORE.setFillColor(sf::Color::White);
    HONGSCORE.setStyle(sf::Text::Bold);
    HONGSCORE.setPosition((420), 50 );

    sf::RectangleShape shape3({20.0f, height});
    shape3.setFillColor(sf::Color::Black);
    shape3.setPosition((width/2) - 10, 0);

    sf::RectangleShape shape({width/2, height - 100});
    shape.setFillColor(sf::Color::Red);
    sf::RectangleShape shape2({width, height - 100});
    shape2.setFillColor(sf::Color::Blue);

    sf::RectangleShape ADD({40.0f, 40.0f});
    ADD.setFillColor(sf::Color::Black);
    ADD.setOutlineThickness(5.f);
    ADD.setOutlineColor(sf::Color::White);
    ADD.setPosition(20, 240);

    sf::RectangleShape SUB({40.0f, 40.0f});
    SUB.setFillColor(sf::Color::Black);
    SUB.setOutlineThickness(5.f);
    SUB.setOutlineColor(sf::Color::White);
    SUB.setPosition(90, 240);

    sf::RectangleShape ADD2({40.0f, 40.0f});
    ADD2.setFillColor(sf::Color::Black);
    ADD2.setOutlineThickness(5.f);
    ADD2.setOutlineColor(sf::Color::White);
    ADD2.setPosition(460, 240);

    sf::RectangleShape SUB2({40.0f, 40.0f});
    SUB2.setFillColor(sf::Color::Black);
    SUB2.setOutlineThickness(5.f);
    SUB2.setOutlineColor(sf::Color::White);
    SUB2.setPosition(530, 240);


    sf::RenderWindow window(sf::VideoMode(width, height), "NOICE!!!");
    
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

        window.clear(sf::Color::Black);
        window.draw(shape2);
        window.draw(shape);
        window.draw(shape3);
        window.draw(CHONG);
        window.draw(HONG);
        window.draw(CHONGSCORE);
        window.draw(HONGSCORE);
        window.draw(ADD);
        window.draw(SUB);
        window.draw(ADD2);
        window.draw(SUB2);
        window.draw(ADDER);
        window.draw(SUBTRACTER);
        window.draw(ADDER2);
        window.draw(SUBTRACTER2);
        window.display();
    }

    return 0;
}
