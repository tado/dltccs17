#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetFrameRate(60);
    delayLength = 240;
    skip = 5;
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
    // 円の描画設定
    ofNoFill();
    ofEnableSmoothing();
    ofSetCircleResolution(64);
    for(int i = 0; i < mousePos.size(); i += skip){
        // 円の大きさを段階的に変化させる
        ofDrawCircle(mousePos[i], mousePos.size() - i + 4);
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
