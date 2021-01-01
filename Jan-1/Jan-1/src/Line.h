//
//  Line.hpp
//  Jan-1
//
//  Created by Carla on 1/1/21.
//

#ifndef Line_h
#define Line_h

#include <stdio.h>

#endif /* Line_h */


#pragma once

#include "ofMain.h"


class Line{
public:
    
    Line();
    
    void setup();
    void update();
    void draw();
    


    ofColor color;
    float x1, x2, y1, y2 ;
    float alpha;
    
    
};
