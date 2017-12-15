#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofBackground(0);

    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofEnableBlendMode(OF_BLENDMODE_ALPHA);
    ofSetColor(0, 0, 0, 7);
    ofRect(0, 0, ofGetWidth(), ofGetHeight());

    ofEnableBlendMode(OF_BLENDMODE_ADD);
    ofSetColor(255, 255, 255, 63);

    for (int i = 0; i < 1000; i++) {
        walker[i].draw();
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
