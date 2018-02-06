#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofBackground(255);
	ofSetFrameRate(60);
	ofSetBackgroundAuto(false);
	arcNum = 0;
	step = 10;
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofSetColor(0, 127);
	ofNoFill();
	ofEnableSmoothing();
	ofSetCircleResolution(128);
	int radius = arcNum * step;
	if (radius < ofGetHeight() * 2) {
		ofDrawCircle(ofGetWidth() / 2, 0, radius);
		ofDrawCircle(ofGetWidth() / 2, ofGetHeight(), radius);
	}
	if (radius < ofGetWidth() * 2) {
		ofDrawCircle(0, ofGetHeight() / 2, radius);
		ofDrawCircle(ofGetWidth(), ofGetHeight() / 2, radius);
	}
	arcNum++;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	if (key == 'a') {
		ofClear(255);
		arcNum = 0;
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
