#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    // Rectangles Subdivision
    
    
    
    ofDrawRectangle(0,0,ofGetWidth(),ofGetWidth());
    ofSetColor(0,200, 100);
    
    ofDrawRectangle(ofGetWidth()/2,0,ofGetWidth(),ofGetWidth());
    
    ofSetColor(0,100, 200);
    
    ofDrawRectangle(ofGetWidth()/2,ofGetHeight()/2,ofGetWidth(),ofGetWidth());
    
    ofSetColor(255,255, 255);
    
    ofDrawRectangle(ofGetWidth()/4*3,ofGetHeight()/2,ofGetWidth(),ofGetWidth());
    
    ofSetColor(0,200, 100);
    
    ofDrawRectangle(ofGetWidth()/4*3,ofGetHeight()/4*3,ofGetWidth(),ofGetWidth());
    
    ofSetColor(0,100, 200);
    
    //ofDrawRectangle(ofGetWidth()/8*3,ofGetHeight()/4*3,ofGetWidth(),ofGetWidth());
    
    ofSetColor(255,255, 255);
    
    
    
    // Lines Subdivision
    
    /*ofDrawLine(ofGetWidth()/2,0,ofGetWidth()/2,ofGetHeight());
    ofDrawLine(ofGetWidth()/2,ofGetHeight()/2, ofGetWidth(),ofGetHeight()/2 );
    
    ofDrawLine(ofGetWidth()/4*3,ofGetHeight()/2, ofGetWidth()/4*3,ofGetHeight() );
    
    ofDrawLine(ofGetWidth()/4*3,ofGetHeight()/4*3, ofGetWidth(),ofGetHeight()/4*3);
    */
    
    //ofDrawLine(ofGetWidth()/3*2,ofGetHeight()/4, ofGetWidth(),ofGetHeight()/2 );

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
