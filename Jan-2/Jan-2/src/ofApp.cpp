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
    
    
    
    for ( int i =0 ; i<8 ; i ++ ){
        
            std::cout <<  currentGen[i]  << "  " ;
        }

    std::cout << endl;
    
    
    for ( int i =0 ; i<8 ; i ++ ){
        
        
        if ( currentGen[i-1] == 1  && currentGen[i] ==1 && currentGen[i+1] ==1 ){
            
            nextGen[i] = 0;
            std::cout <<  nextGen[i]  << "  " ;
        }
        
        if ( currentGen[i-1] == 1  && currentGen[i] ==1 && currentGen[i+1] ==0 ){
            
            nextGen[i] = 0;
            std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 1  && currentGen[i] ==0 && currentGen[i+1] ==1 ){
            
            nextGen[i] = 0;
            std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 1  && currentGen[i] ==0 && currentGen[i+1] ==0 ){
            
            nextGen[i] = 1;
            std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 0  && currentGen[i] ==1 && currentGen[i+1] ==1 ){
            
            nextGen[i] = 1;
            std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 0  && currentGen[i] ==1 && currentGen[i+1] ==0 ){
            
            nextGen[i] = 1;
            std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 0  && currentGen[i] ==0 && currentGen[i+1] ==1 ){
            
            nextGen[i] = 1;
            std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 0  && currentGen[i] ==0 && currentGen[i+1] ==0 ){
            
            nextGen[i] = 0;
            std::cout <<  nextGen[i]  << "  " ;
        }

        
    }
    
    std::cout << endl;
    
    for ( int i =0 ; i<8 ; i ++ ){
        
        currentGen[i] = nextGen[i];
        
    }

 
    for ( int i =0 ; i<8 ; i ++ ){
        
        
        if ( currentGen[i-1] == 1  && currentGen[i] ==1 && currentGen[i+1] ==1 ){
            
            nextGen[i] = 0;
            std::cout <<  nextGen[i]  << "  " ;
        }
        
        if ( currentGen[i-1] == 1  && currentGen[i] ==1 && currentGen[i+1] ==0 ){
            
            nextGen[i] = 0;
            std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 1  && currentGen[i] ==0 && currentGen[i+1] ==1 ){
            
            nextGen[i] = 0;
            std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 1  && currentGen[i] ==0 && currentGen[i+1] ==0 ){
            
            nextGen[i] = 1;
            std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 0  && currentGen[i] ==1 && currentGen[i+1] ==1 ){
            
            nextGen[i] = 1;
            std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 0  && currentGen[i] ==1 && currentGen[i+1] ==0 ){
            
            nextGen[i] = 1;
            std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 0  && currentGen[i] ==0 && currentGen[i+1] ==1 ){
            
            nextGen[i] = 1;
            std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 0  && currentGen[i] ==0 && currentGen[i+1] ==0 ){
            
            nextGen[i] = 0;
            std::cout <<  nextGen[i]  << "  " ;
        }

        
    }
    
    std::cout << endl;
    
    for ( int i =0 ; i<8 ; i ++ ){
        
        currentGen[i] = nextGen[i];
        
    }

 
    for ( int i =0 ; i<8 ; i ++ ){
        
        
        if ( currentGen[i-1] == 1  && currentGen[i] ==1 && currentGen[i+1] ==1 ){
            
            nextGen[i] = 0;
            std::cout <<  nextGen[i]  << "  " ;
        }
        
        if ( currentGen[i-1] == 1  && currentGen[i] ==1 && currentGen[i+1] ==0 ){
            
            nextGen[i] = 0;
            std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 1  && currentGen[i] ==0 && currentGen[i+1] ==1 ){
            
            nextGen[i] = 0;
            std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 1  && currentGen[i] ==0 && currentGen[i+1] ==0 ){
            
            nextGen[i] = 1;
            std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 0  && currentGen[i] ==1 && currentGen[i+1] ==1 ){
            
            nextGen[i] = 1;
            std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 0  && currentGen[i] ==1 && currentGen[i+1] ==0 ){
            
            nextGen[i] = 1;
            std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 0  && currentGen[i] ==0 && currentGen[i+1] ==1 ){
            
            nextGen[i] = 1;
            std::cout <<  nextGen[i]  << "  " ;
        }
        if ( currentGen[i-1] == 0  && currentGen[i] ==0 && currentGen[i+1] ==0 ){
            
            nextGen[i] = 0;
            std::cout <<  nextGen[i]  << "  " ;
        }

        
    }
    
    
    
    
    /*for ( int i =0 ; i<8 ; i ++ ){
        
        std::cout <<  rule30[i-1] << "  " ;
        
    }
    std::cout << endl;
    
    for ( int i =0 ; i<8 ; i ++ ){
        
        std::cout <<  rule30[i] << "  " ;
        
    }

    std::cout << endl;
    
     
    for ( int i =0 ; i< 8; i ++ ){
        
        std::cout <<  rule30[i+1] << "  " ;
        
    }
    std::cout << endl;
     
    */
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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
