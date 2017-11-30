#include "RandomWalker.h"

RandomWalker::RandomWalker(){
    position.x = ofRandom(ofGetWidth());
    position.y = ofRandom(ofGetHeight());
}

void RandomWalker::draw(){
    for (int i = 0; i < 7; i++) {

        position.x += ofRandom(-1.0, 1.05);
        position.y += ofRandom(-0.91, 0.9);

        if (position.x < 0) {
            position.x = ofGetWidth();
        }
        if (position.x > ofGetWidth()) {
            position.x = 0;
        }
        if (position.y < 0) {
            position.y = ofGetHeight();
        }
        if (position.y > ofGetHeight()) {
            position.y = 0;
        }

        ofCircle(position.x, position.y, 1);
    }
}
