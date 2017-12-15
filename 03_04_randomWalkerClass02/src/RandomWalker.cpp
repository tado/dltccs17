#include "RandomWalker.h"

RandomWalker::RandomWalker(){
    position.x = ofRandom(ofGetWidth());
    position.y = ofRandom(ofGetHeight());
}

void RandomWalker::draw(){
    for (int i = 0; i < 10; i++) {
        position.x += ofRandom(-1, 1);
        position.y += ofRandom(-1, 1);

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

        ofDrawCircle(position.x, position.y, 2);
    }
}
