#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    ofSetColor(0);
    ofNoFill();
    ofEnableSmoothing();
    ofSetCircleResolution(128);
    arcNum = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    arcNum+=10;
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < arcNum; i+=10) {
        if (i < ofGetHeight()*2) {
            ofDrawCircle(ofGetWidth()/2, 0, i);
            ofDrawCircle(ofGetWidth()/2, ofGetHeight(), i);
        }
    }
    for (int i = 0; i < arcNum; i+=10) {
        if (i < ofGetWidth()*2) {
            ofDrawCircle(0, ofGetHeight()/2, i);
            ofDrawCircle(ofGetWidth(), ofGetHeight()/2, i);
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
