#include "ofApp.h"

void ofApp::setup(){
    // list camera device ID
    cam.listDevices();
    // select camera
    cam.setDeviceID(1);
    
    cam.initGrabber(1280, 720);
}

void ofApp::update(){
    cam.update();
}

void ofApp::draw(){
    cam.draw(0, 0);
}
