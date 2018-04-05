#include "ofApp.h"

void ofApp::setup(){
    ofSetFrameRate(60);
    ofBackground(0);
    ofSetBackgroundAuto(false);
    //init camera
    cam.listDevices();
    cam.setDeviceID(0);
    cam.initGrabber(1280, 720);
    ofSetRectMode(OF_RECTMODE_CENTER);
}

void ofApp::update(){
    cam.update();
}

void ofApp::draw(){
    ofPixels pixels = cam.getPixels();
    for(int i = 0; i < 100; i++){
        int x = ofRandom(cam.getWidth());
        int y = ofRandom(cam.getHeight());
        ofColor col = pixels.getColor(x, y);
        //set radius by color saturation
        float length = ofMap(col.getSaturation(), 0, 255, 2, 80);
        //set angle by color brightness
        float angle = ofMap(col.getBrightness(), 0, 255, 0, 180);
        ofSetColor(col);
        //draw rotated rectangle
        ofPushMatrix();
        ofTranslate(x, y);
        ofRotateZ(angle);
        ofDrawRectangle(0, 0, length, 3);
        ofPopMatrix();
    }
}
