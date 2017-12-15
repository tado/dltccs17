#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofBackground(0);
    
    ofSetBackgroundAuto(false);
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    
    pos.x = ofGetWidth()/2;
    pos.y = ofGetHeight()/2;
}

//--------------------------------------------------------------
void ofApp::update(){
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 255, 255, 5);

    for (int i = 0; i < 10; i++) {
        pos.x += ofRandom(-1, 1);
        pos.y += ofRandom(-1, 1);
        ofDrawCircle(pos.x, pos.y, 2);
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
