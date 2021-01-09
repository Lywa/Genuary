#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundAuto(false);

}

//--------------------------------------------------------------
void ofApp::update(){
    point2 = ofPoint(ofGetMouseX(),ofGetMouseY());

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofPolyline   polyline2;
    
    // Arc following mouse position creating a trace
    polyline2.arc(point2,100,100,0,180);
    
    // Arc following mouse position creating a trace. Using 0,0 as a center for the radius.
//  polyline2.arc(0,0,point2.x,point2.y,0,180);
    ofSetColor(ofColor::white);
    polyline2.draw();
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
