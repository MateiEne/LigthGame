#include "Player.h"

Player::Player(sf::Color color, sf::Vector2f startPos)
{
	srand(time(NULL));

	playerColor = color;

	pos = startPos;

	circle.setRadius(CIRCLE_RADIUS);
	circle.setFillColor(playerColor);

	randomCircle = rand() % 5;

	Setup();
}

Player::~Player()
{

}

void Player::Setup()
{
	for (int i = 0; i < CIRCLE_COUNT; i++)
	{
		player.push_back(circle);
		player[i].setPosition(pos.y + (i * (CIRCLE_RADIUS + OFFSET)), pos.x);
	}

	player[randomCircle].setFillColor(sf::Color::Red);
}

void Player::ChangeCircleColor(char ch)
{
	if (ch == 'q' || ch == 'h')
	{
		if (randomCircle == 0)
		{
			player[randomCircle].setFillColor(playerColor);
			randomCircle = rand() % 5;
			player[randomCircle].setFillColor(sf::Color::Red);
		}
	}
	else if (ch == 'w' || ch == 'j')
	{
		if (randomCircle == 1)
		{
			player[randomCircle].setFillColor(playerColor);
			randomCircle = rand() % 5;
			player[randomCircle].setFillColor(sf::Color::Red);
		}
	}
	else if (ch == 'e' || ch == 'k')
	{
		if (randomCircle == 2)
		{
			player[randomCircle].setFillColor(playerColor);
			randomCircle = rand() % 5;
			player[randomCircle].setFillColor(sf::Color::Red);
		}
	}
	else if (ch == 'r' || ch == 'l')
	{
		if (randomCircle == 3)
		{
			player[randomCircle].setFillColor(playerColor);
			randomCircle = rand() % 5;
			player[randomCircle].setFillColor(sf::Color::Red);
		}
	}
	else if (ch == 't' || ch == ';')
	{
		if (randomCircle == 4)
		{
			player[randomCircle].setFillColor(playerColor);
			randomCircle = rand() % 5;
			player[randomCircle].setFillColor(sf::Color::Red);
		}
	}
}

void Player::Update(float dt)
{

}

void Player::Draw(sf::RenderWindow& window)
{
	for (int i = 0; i < player.size(); i++)
	{
		window.draw(player[i]);
	}
}
