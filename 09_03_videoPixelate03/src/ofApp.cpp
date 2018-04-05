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
    //repeat 100 times
    for(int i = 0; i < 100; i++){
        //get random location's pixel color
        int x = ofRandom(cam.getWidth());
        int y = ofRandom(cam.getHeight());
        //get color of pixel
        ofColor col = pixels.getColor(x, y);
        //set radius by color brightness
        float radius = ofMap(col.getSaturation(), 0, 255, 5, 40);
        //set color (50% alpha)
        ofSetColor(col, 127);
        //draw rectangle
        ofDrawCircle(x, y, radius);
    }
}
