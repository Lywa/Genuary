#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    

   cellX= ofGetWidth()/12;
    cellY= ofGetHeight()/8;
    
    counter=1;
    ofSetFrameRate(1);
    ofSetBackgroundAuto(false);
    ofSeedRandom(1000);

}

//--------------------------------------------------------------
void ofApp::update(){
    
   
}

//--------------------------------------------------------------
void ofApp::draw(){
    

    for( int y =0; y< ofGetHeight(); y+= cellY){
        
        for ( int x= 0; x < ofGetWidth();x+= cellX ){
            
            
            int randomNumber = ofRandom(1,7);
            //std::cout << "Random: " << randomNumber << endl;
            
            switch(randomNumber) {
                case 1:
                    
                    ofSetColor(ofColor(249,242,224));
                    ofDrawRectangle(x, y, cellX, cellY);
                    
                    break;
                case 2:
                   
                    for ( float i= 0; i < cellY;i+= cellY/6 ){
                    
                        if(EvenOdd ==false){
                            ofSetColor(ofColor(140,126,38));
                            ofDrawRectangle(x, y+ i, cellX, cellY);
                            
                            EvenOdd =true;
                            
                        }else if (EvenOdd ==true){
                            
                            ofSetColor(ofColor(12,21,30));
                            ofDrawRectangle(x,y+ i, cellX, cellY);
                            EvenOdd =false;
                        }
                    }
                    break;
                    
                case 3:
                    
                    for ( float i= 0; i < cellY;i+= cellY/6 ){
                    
                        if(EvenOdd ==false){
                            ofSetColor(ofColor(146,146,146));
                            ofDrawRectangle(x, y+ i, cellX, cellY);
                            
                            EvenOdd =true;
                            
                        }else if (EvenOdd ==true){
                            
                            ofSetColor(ofColor(12,21,30));
                            ofDrawRectangle(x, y+ i, cellX, cellY);
                            EvenOdd =false;
                        }
                    
                    }

                    break;
                    
                case 4:
              
                    for ( float i= 0; i < cellY;i+= cellY/6 ){
                    
                        if(EvenOdd ==false){
                            ofSetColor(ofColor(12,21,30));
                            ofDrawRectangle(x,y+ i, cellX, cellY);
                            
                            EvenOdd =true;
                            
                        }else if (EvenOdd ==true){
                           
                            ofSetColor(ofColor(146,146,146));
                            ofDrawRectangle(x,y+ i, cellX, cellY);
                            EvenOdd =false;
                        }
                    }
                    
                    break;
                        
                case 5:
                    
                    ofSetColor(ofColor(244,223,114));
                    ofDrawRectangle(x, y, cellX, cellY);
                        
                    break;
                        
                case 6:
                    
                    ofSetColor(ofColor(146,146,146));
                    ofDrawRectangle(x, y, cellX, cellY);
                    
                    break;
                //and so on
                default:
                    ofNoFill();
                    ofDrawRectangle(x, y, cellX, cellY);
                    
                    break;
            }
            
        }
    }
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
