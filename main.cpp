#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
#include <stdlib.h>
#include <string>

#include "Player.h"

using namespace std;

/*#
define CIRCLE_RADIUS 50
#define CIRCLE_COUNT 5
#define OFFSET 100
*/

int main()
{
	srand(time(NULL));

	sf::RenderWindow window(sf::VideoMode(1280, 800), "LightGame");

   /* sf::CircleShape circle;
    circle.setRadius(CIRCLE_RADIUS);

    vector<sf::CircleShape> player1;

    int randomCircle = rand() % 5;

    for (int i = 0; i < CIRCLE_COUNT; i++)
    {
        player1.push_back(circle);
        player1[i].setPosition(i * (CIRCLE_RADIUS + OFFSET), 0);
    }

    player1[randomCircle].setFillColor(sf::Color::Red);
    */

    vector<sf::Vector2f> pos{ sf::Vector2f(1, 2), sf::Vector2f(100, 200) };
    Player gigi(sf::Color::Blue, pos[0]);
    Player gogu(sf::Color::White, pos[1]);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed ||
                sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
        {
            gigi.ChangeCircleColor('q');
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            gigi.ChangeCircleColor('w');
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
        {
            gigi.ChangeCircleColor('e');
        }        
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
        {
            gigi.ChangeCircleColor('r');
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
        {
            gigi.ChangeCircleColor('t');
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
        {
            gogu.ChangeCircleColor('h');
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
        {
            gogu.ChangeCircleColor('j');
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
        {
            gogu.ChangeCircleColor('k');
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
        {
            gogu.ChangeCircleColor('l');
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::SemiColon))
        {
            gogu.ChangeCircleColor(';');
        }

       /* if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
        {
            if (randomCircle == 0)
            {
                player1[0].setFillColor(sf::Color::White);
                randomCircle = rand() % 5;;
                player1[randomCircle].setFillColor(sf::Color::Red);
            }
        }

        else  if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            if (randomCircle == 1)
            {
                player1[1].setFillColor(sf::Color::White);
                randomCircle = rand() % 5;;
                player1[randomCircle].setFillColor(sf::Color::Red);
            }
        }

        else  if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
        {
            if (randomCircle == 2)
            {
                player1[2].setFillColor(sf::Color::White);
                randomCircle = rand() % 5;;
                player1[randomCircle].setFillColor(sf::Color::Red);
            }
        }

        else  if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
        {
            if (randomCircle == 3)
            {
                player1[3].setFillColor(sf::Color::White);
                randomCircle = rand() % 5;;
                player1[randomCircle].setFillColor(sf::Color::Red);
            }
        }

        else  if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
        {
            if (randomCircle == 4)
            {
                player1[4].setFillColor(sf::Color::White);
                randomCircle = rand() % 5;;
                player1[randomCircle].setFillColor(sf::Color::Red);
            }
        }*/


        window.clear();
       
        /*for (int i = 0; i < player1.size(); i++)
        {
            window.draw(player1[i]);
        }*/
        gigi.Draw(window);
        gogu.Draw(window);

        window.display();
    }
}