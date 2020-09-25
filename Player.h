#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
#include <stdlib.h>

using namespace std;

#define CIRCLE_RADIUS 20
#define CIRCLE_COUNT 5
#define OFFSET 70

class Player
{
public:
	Player(sf::Color color, sf::Vector2f startPos);
	~Player();

	void ChangeCircleColor(char ch);

	void Update(float dt);
	void Draw(sf::RenderWindow& window);

private:
	void Setup();

	sf::Color playerColor;

	sf::CircleShape circle;
	vector<sf::CircleShape> player;

	int randomCircle;

	sf::Vector2f pos;
};

