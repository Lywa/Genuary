#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    smileys.load("images/face_tiny.png");
    smileysIcon.load("images/smileys_q.png");
    smileysIcon.setImageType(OF_IMAGE_GRAYSCALE);

}

//--------------------------------------------------------------
void ofApp::update(){

    ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //smileys.draw(0, 0);
    
    // Code based on OF example: imageLoaderExample
    
    ofPixels & pixels = smileysIcon.getPixels();
    ofSetColor(0, 0, 0);
    
    int w = smileysIcon.getWidth();
    int h = smileysIcon.getHeight();
    float diameter = 10;
    
    for(int y = 0; y < h; y++) {
        for(int x = 0; x < w; x++) {
            int index = y * w + x;
            unsigned char cur = pixels[index];
            float size = 1 - ((float) cur / 255);
            int xPos = 30 + x * diameter;
            int yPos = 30 + y * diameter;
            int radius = 0.5 + size * diameter /2 ;
            
            ofDrawCircle(xPos, yPos, radius);
            //ofDrawRectangle(xPos, yPos, radius, radius);
        }
    }
    
    //ofSetColor(255);
    //smileysIcon.draw(100, 100, 20, 20);

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
