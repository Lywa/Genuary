#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    tree1.load("tree.jpg");
    value.set("Grid Size", 20, 1, 120);
    gui.setup();
    gui.add(value);
    
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    selected_value = value.get();

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //tree1.draw(0, 0);
    
    int w = tree1.getWidth();
        int h = tree1.getHeight();
        for (int x=0; x<w; x+=selected_value) {
            for (int y=0; y<h; y+=selected_value) {
                ofColor c = tree1.getColor(x, y);
                ofSetColor(c.r,c.g,c.b);
                ofFill();
                
                ofDrawRectangle(x,y, selected_value, selected_value);
                
            }
        }

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
