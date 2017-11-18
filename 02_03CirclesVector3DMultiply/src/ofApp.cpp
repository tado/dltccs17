#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofSetBackgroundColor(0);
}

//--------------------------------------------------------------
void ofApp::update(){
    ofVec3f loc = ofVec3f(ofGetWidth()/2, ofGetHeight()/2, 0);
    ofVec3f vel = ofVec3f(ofRandom(-10, 10),
                          ofRandom(-10, 10),
                          ofRandom(-10, 10));
    location.push_back(loc);
    velocity.push_back(vel);

    for (int i = 0; i < location.size(); i++) {
        location[i] += velocity[i];
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < location.size(); i++) {
        ofSetColor(31, 127, 255);
        ofDrawCircle(location[i], 10);
        ofDrawCircle(location[i], 10);

        if (location[i].x < 0 || location[i].x > ofGetWidth()) {
            velocity[i].x *= -1;
        }
        if (location[i].y < 0 || location[i].y > ofGetHeight()) {
            velocity[i].y *= -1;
        }
        if (location[i].z < -ofGetHeight() || location[i].z > ofGetHeight()) {
            velocity[i].z *= -1;
        }
    }
    
    ofSetColor(255);
    ofDrawBitmapStringHighlight(ofToString(location.size()), 20, 20);
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
