//
//  glmTileFeature.h
//
//  Created by Patricio Gonzalez Vivo on 8/27/14.
//
//

#pragma once

//  TODO: use default one
//
//#include <memory>
#include <tr1/memory>

#include "glmMesh.h"

class glmFeature {
public:

    glmFeature(){};
    virtual ~glmFeature(){};
    
    glmMesh         geometry;
    std::string     idString;
    
private:
    
};

typedef std::tr1::shared_ptr<glmFeature> glmFeatureRef;