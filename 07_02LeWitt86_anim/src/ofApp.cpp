#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    ofSetColor(0);
    
    lineNum = 0;
    for (int i = 0; i < 10000; i++) {
        linePosition[i] = ofVec2f(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
        lineAngle[i] = ofRandom(360);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    if (lineNum <= 10000) {
        lineNum+=10;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < lineNum; i++) {
        ofPushMatrix();
        ofTranslate(linePosition[i]);
        ofRotate(lineAngle[i]);
        ofDrawLine(0, 0, 25, 0);
        ofPopMatrix();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'a') {
        lineNum = 0;
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
