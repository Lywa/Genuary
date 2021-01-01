#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    std::cout << "value: " << value << endl;
    ofBackground(255,160,125);
    
    value.set("Depth", 5, 1, 7);
    gui.setup();
    gui.add(value);
    
}
//--------------------------------------------------------------
void ofApp::update(){
    
    selected_value = value.get();
    // Testing animated diagonal line
    /*add = add +1 ;
    std::cout << "add: " << add << endl;
    start= start +1;*/
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
   // ofDrawRectangle(10, 10, 20, 20);
   
    bool filling = false;
    
    for( int y =0; y< ofGetHeight(); y+= 40){
        
        for ( int x= 0; x < ofGetWidth();x+=40 ){
            
           for ( int i = 35; i>0 ; i-=selected_value ){
               /*ofNoFill();
                ofDrawRectangle(x, y, i, i);*/
               // Drawing nested squares no Fill, white stroke.
                
                if (filling == false) {
                    
                    //ofNoFill();
                    ofSetColor(ofColor(81,51,156));
                    ofDrawRectangle(x, y, i, i);
                    
                    filling= true;
                    
                } else if ( filling ==true)  {
                    
                    ofSetColor(ofColor(255,255,255));
                    ofDrawRectangle(x, y, i, i);
                    filling= false;
                }
            
                // Setting color (r,g,b,alpha)
                //ofColor color = (i, i, i, i);
                //ofSetColor(color);
            
            }
        }
    }
    
    gui.draw();
    // Testing animated diagonal line
    /*for( int i=0; i <100; i+=10 ){
    ofBackground(0,0,0);
    ofDrawLine(start,start,100+add,100+add);
        //ofDrawLine(start+1,start,100+add,100+add);
    }*/
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
