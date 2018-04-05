#include "ofApp.h"

void ofApp::setup(){
    ofSetFrameRate(60);
    ofBackground(0);
    ofSetBackgroundAuto(false);
    
    //init camera
    cam.listDevices();
    cam.setDeviceID(0);
    cam.initGrabber(1280, 720);
}

void ofApp::update(){
    cam.update();
}

void ofApp::draw(){
    //get all camera pixels
    ofPixels pixels = cam.getPixels();
    
    //set mosaic size by mouseX
    int step = ofMap(mouseX, 0, ofGetWidth(), 1, 80);
    //get all pixel color
    for (int j = 0; j < cam.getHeight(); j+=step) {
        for (int i = 0; i < cam.getWidth(); i+=step) {
            //get color of pixel
            ofColor col = pixels.getColor(i, j);
            //draw rectangle
            ofSetColor(col);
            ofDrawRectangle(i, j, step, step);
        }
    }
}
