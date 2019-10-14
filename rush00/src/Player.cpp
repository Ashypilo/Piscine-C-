/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 02:39:35 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/06 15:01:56 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include <string>
#include <typeinfo>
#include "../includes/Player.hpp"
#include "../includes/Objects.hpp"

Player::Player( ) : _score(0)
{
	Objects::setH(4); 
	Objects::setW(8); 
	Objects::setType("player"); 
}

Player::Player(Player const & obj)
{
	*this = obj;
}
Player::~Player(void) {}

Player& Player::operator=(Player const &)
{
	return *this;
}

void Player::update(void) {}

void Player::draw(void)
{
	attron(COLOR_PAIR(1));
	use_default_colors();
  	start_color();
  	init_pair(1, COLOR_RED, -1);
	move(this->_y, this->_x);
	mvprintw(this->_y - 3, this->_x, "   /\\   ");
	mvprintw(this->_y - 2, this->_x, "  /||\\  ");
	mvprintw(this->_y - 1, this->_x, "||=--=||");
    mvprintw(this->_y, this->_x, "   ||   ");
	attroff(COLOR_PAIR(1));

}

int     Player::getScore(){ return this->_score; }

void     Player::setScore(int s)
{
	this->_score = s;
	return;
}
