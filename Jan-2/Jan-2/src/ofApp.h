#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
    void evaluateNextGen();
    void printLine();
    
    void setup();
		void update();
    void extracted();
    
    void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
    
    int startArray[8][8]= {{1,0,0,0,0,0,0,0}, {0,1,0,0,0,0,0,0},{0,0,1,0,0,0,0,0},{0,0,0,1,0,0,0,0},{0,0,0,0,1,0,0,0},{0,0,0,0,0,1,0,0},{0,0,0,0,0,0,1,0},{0,0,0,0,1,0,0,1}};
    
    int rule30 [8] = {0,0,0,1,1,1,1,0};
    int currentGen [8] = {0,0,0,0,1,0,0,0};
    int nextGen [8] = {};
    int height= 0;
    //int resetGen [8] = startArray[1];
    
    
    
    ofParameter<int> index;
    ofxPanel gui;
    
    int selectedIndex;
 
    
    // 111 = 0;
    // 110 = 0;
    // 101 = 0;
    // 100 = 1;
    // 011 = 1;
    // 010 = 1;
    // 001 = 1;
    // 000 = 0;
    
		
};
