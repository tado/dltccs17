#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    delayLength = 60;
    skip = 10;
}

//--------------------------------------------------------------
void ofApp::update(){
    ofVec2f pos = ofVec2f(mouseX, mouseY);
    mousePos.push_back(pos);
    if(mousePos.size() > delayLength){
        mousePos.erase(mousePos.begin());
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i < mousePos.size(); i += skip){
        ofDrawCircle(mousePos[i], 20);
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
