#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofBackground(0);
	currentPos = ofVec2f(ofGetWidth() / 2, ofGetHeight() / 2);
	velocity = ofVec2f(0, 0);
	stiffness = 0.05;
	friction = 0.95;
	mass = 1.0;
}

//--------------------------------------------------------------
void ofApp::update(){
	toPos = ofVec2f(mouseX, mouseY);
	ofVec2f force = stiffness * (toPos - currentPos);
	ofVec2f accel = force / mass;
	velocity = friction * (velocity + accel);
	currentPos += velocity;
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(255);
	ofDrawCircle(currentPos, 20);
	ofSetColor(0, 255, 255);
	ofDrawLine(currentPos, toPos);
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
