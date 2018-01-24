#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp {
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    float stiffness;    // ばね定数(ばねの硬さ)
    float friction;     // 摩擦力(抵抗)
    float mass;         // 物体の質量
    ofVec2f currentPos; // 現在位置
    ofVec2f toPos;      // 目標位置
    ofVec2f velocity;   // 移動速度
};
