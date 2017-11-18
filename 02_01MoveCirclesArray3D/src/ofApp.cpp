#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofSetBackgroundColor(0);

    for (int i = 0; i < NUM; i++) {
        location[i] = ofVec3f(ofGetWidth()/2, ofGetHeight()/2, 0);
        velocity[i] = ofVec3f(ofRandom(-10, 10),
                              ofRandom(-10, 10),
                              ofRandom(-10, 10));
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < NUM; i++) {
        location[i] += velocity[i];
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < NUM; i++) {
        ofSetColor(31, 127, 255);
        ofDrawCircle(location[i], 10);
        ofDrawCircle(location[i], 10);

        if (location[i].x < 0 || location[i].x > ofGetWidth()) {
            velocity[i].x *= -1;
        }
        if (location[i].y < 0 || location[i].y > ofGetHeight()) {
            velocity[i].y *= -1;
        }
        if (location[i].z < -ofGetHeight()/2 || location[i].z > ofGetHeight()/2) {
            velocity[i].z *= -1;
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
