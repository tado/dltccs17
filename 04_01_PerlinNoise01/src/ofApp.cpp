#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int skip = 10;
    for (int j = 0; j < ofGetHeight(); j += skip) {
        for (int i = 0; i < ofGetWidth(); i += skip) {
            float noiseScaleX = ofMap(mouseX, 0, ofGetWidth(), 0.0, 0.01);
            float noiseScaleY = ofMap(mouseY, 0, ofGetHeight(), 0.0, 0.01);
            int noiseVal = ofNoise(i * noiseScaleX, j * noiseScaleY) * 255;
            ofSetColor(noiseVal);
            ofDrawRectangle(i, j, skip, skip);
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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
