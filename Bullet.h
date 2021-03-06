//
// Created by ita on 20/11/17.
//

#ifndef BLOODBOND_BULLET_H
#define BLOODBOND_BULLET_H

#include <SFML/Graphics.hpp>

class Bullet {
private:
    sf::RectangleShape  bullet;
    int direction;
    sf::Vector2f beginningPos;
public:
    Bullet(int direction,sf::Vector2f pos);
    void fire(float speed);
    sf::Vector2f getPosition(){
        return bullet.getPosition();
    }
    sf::Vector2f getSize(){
        return bullet.getSize();
    }

    void setSize(sf::Vector2f size){
        bullet.setSize(size);
        bullet.setOrigin(size.x/2,size.y/2);
    }
    void setPosition(sf::Vector2f position){
        bullet.setPosition(position);
    }
    void Render(sf::RenderWindow& l_window);
    sf::Vector2f getBeginningPos(){
        return beginningPos;
    }

};


#endif //BLOODBOND_BULLET_H
