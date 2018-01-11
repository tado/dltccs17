#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // 画面の設定
    ofBackground(0);
    ofEnableDepthTest();
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    
    cam.setDistance(400);
    
    //メッシュの解像度を設定
    meshWidth = 640;
    meshHeight = 480;
    num_particles = meshWidth * meshHeight;
    
    // カメラ映像をキャプチャ
    myVideo.initGrabber(640, 480);
    
    //メッシュの描画モード設定
    mesh.setMode(OF_PRIMITIVE_POINTS);
}

//--------------------------------------------------------------
void ofApp::update(){
    myVideo.update(); // カメラからの映像を更新
    if (myVideo.isFrameNew()) { // もしカメラのフレームが更新されていたら
        mesh.clear(); // メッシュを初期化
        // カメラの映像のピクセル情報を抽出
        ofPixels pixels = myVideo.getPixels();
        // ピクセルごとに処理
        for (int i = 0; i < meshWidth; i++) {
            for (int j = 0; j < meshHeight; j++) {
                // ピクセルノRGB値を取得
                float r = (float)pixels[j * int(myVideo.getWidth()) * 3 + i * 3] / 255.0;
                float g = (float)pixels[j * int(myVideo.getWidth()) * 3 + i * 3 + 1] / 255.0;
                float b = (float)pixels[j * int(myVideo.getWidth()) * 3 + i * 3 + 2] / 255.0;
                // RGBから明度を算出
                float brightness = (r + g + b) / 3.0f;
                // 明度から頂点の位置を設定
                ofVec3f vert = ofVec3f(i - meshWidth/2, j - meshHeight/2, brightness * 255.0);
                mesh.addVertex(vert);
                // 頂点の色はカメラのピクセルの値をそのまま使用
                ofFloatColor color = ofFloatColor(r, g, b, 0.8);
                mesh.addColor(color);
            }
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    // VBOを描画
    cam.begin();
    ofScale(1, -1, 1);
    glPointSize(3);
    //myVbo.draw(GL_POINTS, 0, num_particles);
    mesh.draw();
    cam.end();
    
    // ログの表示
    string info;
    info = "Vertex num = " + ofToString(num_particles, 0) + "\n";
    info += "FPS = " + ofToString(ofGetFrameRate(), 2);
    ofDrawBitmapString(info, 30, 30);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    // fキーでフルスクリーン表示
    if (key == 'f') {
        ofToggleFullscreen();
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
