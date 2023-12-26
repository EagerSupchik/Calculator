#pragma once
#include <iostream>
#include <SFML\Graphics.hpp>
using namespace sf;
using namespace std;

class Butt {
	int i = 0;
	RectangleShape butt;
	std::string text;
	Text txt;
	Color color1;
	Color color2 = Color::Blue;
	Color color3 = Color::Green;
	Font font;
public:
	Butt(int x, int y, int width, int height, string n_text, Color color) 
	{
		butt.setPosition(x, y);
		butt.setSize(Vector2f(width, height));
		color1 = color;
		text = n_text;
		font.loadFromFile("BankGothic Md BT Medium.otf");
		butt.setFillColor(color1);
		txt.setString(text);
		txt.setPosition(x + 50, y + 20);
		txt.setFillColor(Color::White);
		txt.setCharacterSize(20);
		txt.setFont(font);
	}
	Butt() :Butt(0, 0, 50, 30, "-", Color::Cyan) {}

	void printButt(RenderWindow& win) 
	{
		win.draw(butt);
		win.draw(txt);
	}
	void mousePresBut(RenderWindow& win, Event& event) 
	{
		if (butt.getGlobalBounds().contains(Mouse::getPosition(win).x, Mouse::getPosition(win).y))
		{
			if (event.type == Event::MouseButtonPressed)
			{
				if (event.key.code == Mouse::Left)
				{
					butt.setFillColor(color2);
				}
			}
			if (Mouse::isButtonPressed(Mouse::Left))
			{
				butt.setFillColor(color2);
			}
			else butt.setFillColor(color3);



			if (event.type == Event::MouseButtonReleased)
			{
				if (event.key.code == Mouse::Left)
				{
					cout << text << endl;

				}
			}
		}
		else
		{
			butt.setFillColor(color1);
		}
	}
};