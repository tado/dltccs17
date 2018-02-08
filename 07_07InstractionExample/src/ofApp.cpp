#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    ofSetFrameRate(30);
    for (int i = 0; i < 3; i++) {
        rotate[i] = ofRandom(360);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0, 127);
    for (int j = 0; j < 3; j++) {
        ofPushMatrix();
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        ofRotateZ(rotate[j]);
        for (int i = -ofGetWidth(); i < ofGetWidth(); i += 10) {
            ofDrawLine(-ofGetWidth(), i, ofGetWidth(), i);
        }
        ofPopMatrix();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'a') {
        for (int i = 0; i < 3; i++) {
            rotate[i] = ofRandom(360);
        }
    }
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
