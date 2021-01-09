#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    ofSetBackgroundAuto(false);
    ofSetBackgroundColor(255, 255, 255);
    ofEnableAlphaBlending();
    ofEnableBlendMode(OF_BLENDMODE_MULTIPLY);
    ofEnableAntiAliasing();
    ofEnableSmoothing();

}

//--------------------------------------------------------------
void ofApp::update(){
    
    mouse= ofPoint(ofGetMouseX(),ofGetMouseY());
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ofNoFill();
    ofSetLineWidth (15);
    ofSetColor(255, 0, 0, 150);
    ofSetCircleResolution(150);
    ofDrawCircle(ofGetWidth()/3, ofGetHeight()/2, radius);
    ofSetColor(0, 0, 255, 100);
    ofDrawCircle(ofGetWidth()*2/3, ofGetHeight()/2, radius);

    //ofDrawCircle(mouse.x, mouse.y, radius);
    
    radius+=25;
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
