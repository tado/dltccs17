#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofBackground(0);
    // 現在位置を画面の中心に
    currentPos = ofVec2f(ofGetWidth() / 2, ofGetHeight() / 2);
    // 速度、ばね定数、摩擦力、質量を設定
    velocity = ofVec2f(0, 0);
    stiffness = 0.05;
    friction = 0.95;
    mass = 1.0;
}

//--------------------------------------------------------------
void ofApp::update(){
    // マウスポインタの位置を目標位置に
    toPos = ofVec2f(mouseX, mouseY);
    // フックの法則から物体にかかる力を計算
    ofVec2f force = stiffness * (toPos - currentPos);
    // 力と質量から加速度を計算 (f = ma ニュートン力学)
    ofVec2f accel = force / mass;
    // 速度、加速度、摩擦力から現在の速度を計算
    velocity = friction * (velocity + accel);
    // 速度から位置を計算
    currentPos += velocity;
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 現在位置に円を描画
    ofSetColor(255);
    ofDrawCircle(currentPos, 20);
    // 円とマウスポインタの間に線を描画 (ばね)
    ofSetColor(190);
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
