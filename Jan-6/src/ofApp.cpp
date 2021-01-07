#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundAuto(false);
    
    ofSetFrameRate(10);
    
    side = 100;
    old=1;
    
    value.set("Increase",10,0,200);
    gui.setup();
    gui.add(value);
 

}

//--------------------------------------------------------------
void ofApp::update(){
    
    addition= value.get();
    
   
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    height= sqrt(side*side-(side/2)*(side/2));

    ofNoFill();
    
    //Starting Module
//     ofSetColor(100, 0, 200);
//    ofDrawTriangle(ofGetWidth()/2 - (side/2), ofGetHeight()/2- height/2,ofGetWidth()/2 + (side/2), ofGetHeight()/2- height/2, ofGetWidth()/2, ofGetHeight()/2 + height/2);
//    ofSetColor(255, 255, 255);
//    ofDrawTriangle(ofGetWidth()/2 - (side/2), ofGetHeight()/2+ height/2,ofGetWidth()/2 + (side/2), ofGetHeight()/2+ height/2, ofGetWidth()/2, ofGetHeight()/2 - height/2);
    
    //Replicating Module
    
   if (addition > old){
    
        side= side+addition;
        old=addition;
    
    }if(addition < old){
        
        side= side-addition;
        old=addition;
        ofSetColor(50, 50, 50);
        ofDrawRectangle(0, 0, ofGetWidth(),ofGetHeight());
    
    }
 
 
    // Matrix to move the center to the center of the screen. Not the center of the triangle.
    ofPushMatrix();
    
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2, 0);
        ofRotateDeg(ofGetElapsedTimef()*100);
    
        ofSetColor(100, 0, 200);
        ofDrawTriangle(- (side/2), height/2, (side/2), height/2, 0, - height/2);
        ofSetColor(255, 255, 255);
        ofDrawTriangle( -(side/2), - height/2, (side/2), -height/2, 0,  height/2);

    
    ofPopMatrix();
    
    //side+=10;
    
    gui.draw();
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
