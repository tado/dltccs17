#pragma once
#include "ofMain.h"

class RandomWalker {
public:
    RandomWalker();
    void draw();
    
    ofVec2f position;
    float top, bottom, left, right;
};
