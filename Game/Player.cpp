#include "Player.h"

Player::Player() : GameObject()
{
    cout << "OK 1" << endl;
    _angle = 0;
    _objectWidth = 50;
    _objectHeight = 50;
    _hitRadius = (_objectWidth + _objectHeight)/4; 
    _health = 5;
    _points = 0;
    _scale = 1;
    cout << "OK 2" << endl;
    
    _pathVector[0] = _BULLET_OFFSET_X;
    _pathVector[1] = _BULLET_OFFSET_Y;
    _objectType = gameObjectType::Player;
    cout << "OK 3" << endl;
    // Set player start position
    _xCoord = Game::ORIGIN_X + cos(0)*Game::PLAYER_RADIUS;
	_yCoord = Game::ORIGIN_Y + sin(0)*Game::PLAYER_RADIUS;
    cout << "OK 4" << endl;
    
    
    //_pathVector = sf::Vector2f(_BULLET_OFFSET_X, _BULLET_OFFSET_Y);
    // Create player rectangle
//    sf::RectangleShape rectangle(sf::Vector2f(_scale*_objectWidth, _scale*_objectHeight));
//    
//    // Set player attributes
//    rectangle.setOutlineThickness(3);
//    rectangle.setOutlineColor(sf::Color::Blue);
//    rectangle.setFillColor(sf::Color::White);
//    rectangle.setOrigin(sf::Vector2f(_scale*_objectWidth/2, _scale*_objectHeight/2));
//
//	rectangle.setPosition(_xCoord, _yCoord);
//    
//    setObjectShape(rectangle);
    
}