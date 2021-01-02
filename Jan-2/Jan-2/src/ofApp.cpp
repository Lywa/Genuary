#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    // 111 = 0;
    // 110 = 0;
    // 101 = 0;
    // 100 = 1;
    // 011 = 1;
    // 010 = 1;
    // 001 = 1;
    // 000 = 0;
    
    ofSetBackgroundAuto(false);
    ofSetFrameRate(10);
 

    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
}


//--------------------------------------------------------------
void ofApp::draw(){
    /*if (ofGetFrameNum() % 60 != 0)
        return;*/
    
    evaluateNextGen();
    printLine();
   
    
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

void ofApp::evaluateNextGen() {
    
    for ( int i =0 ; i<8 ; i ++ ){
        
        std::cout <<  currentGen[i]  << "  " ;
    }
    
    std::cout << endl;
    
    
    for ( int i =0 ; i<8 ; i ++ ){
        
        
        if ( currentGen[i-1] == 1  && currentGen[i] ==1 && currentGen[i+1] ==1 ){
            
            nextGen[i] = 0;
            //std::cout <<  nextGen[i]  << "  " ;
        }
        
        if ( currentGen[i-1] == 1  && currentGen[i] ==1 && currentGen[i+1] ==0 ){
            
            nextGen[i] = 0;
            //std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 1  && currentGen[i] ==0 && currentGen[i+1] ==1 ){
            
            nextGen[i] = 0;
            //std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 1  && currentGen[i] ==0 && currentGen[i+1] ==0 ){
            
            nextGen[i] = 1;
            //std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 0  && currentGen[i] ==1 && currentGen[i+1] ==1 ){
            
            nextGen[i] = 1;
            //std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 0  && currentGen[i] ==1 && currentGen[i+1] ==0 ){
            
            nextGen[i] = 1;
            //std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 0  && currentGen[i] ==0 && currentGen[i+1] ==1 ){
            
            nextGen[i] = 1;
            //std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 0  && currentGen[i] ==0 && currentGen[i+1] ==0 ){
            
            nextGen[i] = 0;
            //std::cout <<  nextGen[i]  << "  " ;
        }
        
        
    }
    
    
    for ( int i =0 ; i<8 ; i ++ ){
        
        currentGen[i] = nextGen[i];
        
    }
}

void ofApp::printLine() {
    int cell = 0;

    
    for ( int x= 0; x < ofGetWidth();x+=(ofGetWidth()/8)){
        
        if (currentGen[cell] == 0){
            ofSetColor(ofColor(0,0,0));
            ofDrawRectangle(x, height, (ofGetWidth()/8), (ofGetWidth()/8));
            
        }
        if (currentGen[cell] == 1){
            ofSetColor(ofColor(255,255,255));
            ofDrawRectangle(x, height, (ofGetWidth()/8), (ofGetWidth()/8));
            
            
        }
        
        cell++;
        
    }
    
    height= height+ ofGetWidth()/8;
    if (height >= ofGetHeight()) {
        height = 0;
        
        for ( int i =0 ; i<8 ; i ++ ){
            
            currentGen[i] = resetGen[i];
           //printLine();
            
        }
        
    }
}
