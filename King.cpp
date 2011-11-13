//
//  King.cpp
//  Project
//
//  Created by Inês on 11/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "King.h"

namespace CastleBlast {
	
	King::King() : cg::Entity("KING") 
	{}
	
	King::~King() {}
	
	void King::init()
	{
		_king = new Model();
#ifdef __APPLE__
		_king->loadModelData("Models/King.obj");
#else
		_king->loadModelData("..\\..\\src\\Models\\King.obj");
#endif
		_position = cg::Vector3d(0,0,0);
	}
	
	void King::draw()
	{
		glPushMatrix();
		{
			glTranslatef(_position[0], _position[1], _position[2]);
			glScalef(0.7, 0.7, 0.7);
			_king->drawModel();
		}
		glPopMatrix();
	}
	
	void King::update(unsigned long elapsed_millis) {}
	
	void King::placeKing(cg::Vector3d position)
	{
		_position = position;
	}
}