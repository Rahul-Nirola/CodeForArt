#include "testApp.h"

#define BLOCK_SIZE 40

ofPoint player;
int grid[20][20] = {
    {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,1,1,1,1,0,0,1,0,0,0,0},
    {0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0},
    {0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0},
    {0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1},
    {0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0}
};

//--------------------------------------------------------------
void testApp::setup(){
    player.x = 1;
    player.y = 0;
    ofSetWindowShape(BLOCK_SIZE*20, BLOCK_SIZE*20);
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    // Draw grid
    for(int y=0; y<20; y++) {
        for(int x=0; x<20; x++) {
            
            if(grid[y][x]==1) {
                ofSetColor(255,255,255);
            } else {
                ofSetColor(0, 0, 0);
            }
            
            ofRect(x*BLOCK_SIZE, y*BLOCK_SIZE, BLOCK_SIZE, BLOCK_SIZE);
        }
    }
    
    // Draw player
    ofSetColor(255, 0, 0);
    ofRect(player.x*BLOCK_SIZE, player.y*BLOCK_SIZE, BLOCK_SIZE, BLOCK_SIZE);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
    // Calculate where the new position *would* be
    int newx = player.x;
    int newy = player.y;
    
    if(player.y < 19 && key==OF_KEY_DOWN) {
        newy++;
    }
    if(player.y > 0 && key==OF_KEY_UP) {
        newy--;
    }
    
    if(player.x < 19 && key==OF_KEY_RIGHT) {
        newx++;
    }
    if(player.x > 0 && key==OF_KEY_LEFT) {
        newx--;
    }
    
    // If the new position is valid (ie: is "1"), set the new player position
    if( grid[newy][newx] == 1 ) {
        player.x = newx;
        player.y = newy;
    }
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
    
}