//
//  glmTile.cpp
//
//  Created by Patricio Gonzalez Vivo on 8/27/14.
//
//

#include "glmTile.h"

#include "glmGeometryBuilder.h"

glmTile::glmTile():
tileX(-1), tileY(-1), zoom(-1)
{
}

bool glmTile::load(int _tileX, int _tileY, int _zoom){
    tileX = _tileX;
    tileY = _tileY;
    zoom = _zoom;
    
    glmGeometryBuilder builder;
    builder.setCenter(19294,24642,16);
    builder.load(tileX, tileY, zoom, *this);
}

void glmTile::draw(){
    for (auto & it : layers["earth"]){
        glColor3f(0.5,0.5,0.5);
        it->geometry.draw();
    }
    
    for (auto & it : layers["landuse"]){
        glColor3f(0.0,0.7,0.0);
        it->geometry.draw();
    }
    
    for (auto & it : layers["places"]){
        glColor3f(0.0,0.5,0.0);
        it->geometry.draw();
    }
    
    for (auto & it : layers["roads"]) {
        glColor3f(0.1,0.1,0.1);
        it->geometry.draw();
    }
    
    for (auto & it : layers["buildings"]){
        glColor3f(0.9,0.9,0.5);
        it->geometry.draw();
    }

    for (auto & it : layers["water"]){
        glColor3f(0.,0.,0.9);
        it->geometry.draw();
    }
}