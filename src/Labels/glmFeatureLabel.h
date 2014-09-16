//
//  glmFeatureLabel.h
//
//  Created by Patricio Gonzalez Vivo on 9/8/14.
//
//

#pragma once

#include "glmFeature.h"

#include "glmFont.h"

class glmFeatureLabel : public glmFeature{
public:
    
    glmFeatureLabel();
    glmFeatureLabel(const std::string &_text);
    virtual ~glmFeatureLabel();
    
    void setFont(glmFontRef &_fontRef);
    void setText(const std::string &_text);
    
    virtual void updateProjection() = 0;
    virtual void draw(const glm::vec3 &_camPos = glm::vec3(0.,0.,0.) ) = 0;
    
    bool    bVisible;
    
protected:
    virtual void updateCached() = 0;
    
    
    std::string m_text;
    glmFontRef  m_font;
    
    bool    m_bChanged;
};

typedef std::tr1::shared_ptr<glmFeatureLabel> glmFeatureLabelRef;