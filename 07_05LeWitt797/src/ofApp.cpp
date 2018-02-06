#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
	ofNoFill();
    ofEnableSmoothing();
    for (int i = 0; i < ofGetWidth(); i++) {
        float noise0 = ofNoise(i * 0.1) * 10;
        float noise1 = ofNoise(i * 0.01) * 100;
        ofVec2f pos = ofVec2f(i, noise0 + noise1);
        points.push_back(pos);
    }
    cols[0] = ofColor(0, 0, 0);
    cols[1] = ofColor(255, 0, 0);
    cols[2] = ofColor(255, 255, 0);
    cols[3] = ofColor(0, 0, 255);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetLineWidth(2.0);
    drawLoop();
}

void ofApp::drawLoop(){
    int margin = 20;
    int col = 0;
    for (int j = margin; j < ofGetHeight(); j+=2) {
        ofSetColor(cols[col%4]);
        col++;
        ofBeginShape();
        for (int i = 0; i < points.size(); i++) {
            ofVertex(points[i].x, points[i].y + j);
            if(points[i].y + j > ofGetHeight()){
                return;
            }
        }
        ofEndShape();
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
