#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    delayLength = 30; // ディレイを30フレームに
}

//--------------------------------------------------------------
void ofApp::update(){
    // 現在のマウスポインタの位置を配列に追加
    ofVec2f pos = ofVec2f(mouseX, mouseY);
    mousePos.push_back(pos);
    // もし配列の最大数(ディレイ)より大きくなったら
    if(mousePos.size() > delayLength){
        // 先頭の要素を削除
        mousePos.erase(mousePos.begin());
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 配列の先頭に記録された位置に物体を描画
    ofDrawCircle(mousePos[0], 20);
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
