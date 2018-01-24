#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    drawStats = false;
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 画面の中心に伸縮する球を描画
    cam.begin();
    float radius = sin(ofGetElapsedTimef() * 8.0) * 200 + 250;
    ofSpherePrimitive sphere;
    sphere.set(radius, 32);
    sphere.drawWireframe();
    cam.end();
    // ログの表示/非表示を切り替え
    if (drawStats){
        // 現在のfpsを表示
        ofDrawBitmapStringHighlight("frameRate = " + ofToString(ofGetFrameRate()), 20, 20);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    // fキーを押すとフルスルリーンのON/OFFを切り替え
    if (key == 'f'){
        ofToggleFullscreen();
    }
    // dキーでログの表示/非表示で切り替え
    if (key == 'd') {
        if (drawStats){
            drawStats = false;
        } else {
            drawStats = true;
        }
    }
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
;
