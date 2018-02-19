#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    image.load("image.jpg");
    image.setImageType(OF_IMAGE_GRAYSCALE);
    i = 0;
    ofSetVerticalSync(false);
    ofSetFrameRate(0);
    sizeOfImage = image.getWidth() * image.getHeight();
}

//--------------------------------------------------------------
void ofApp::update(){
    if (i < sizeOfImage-1){
        ofPixels &pixels = image.getPixels();
        
        for (int j = 0; j < (sizeOfImage-i-1); j++){
            if ((int)pixels[j] > (int)pixels[j+1]){
                // swapping
                unsigned char value = pixels[j];
                pixels[j] = pixels[j+1];
                pixels[j+1] = value;
            }
        }
        
        image.update();

        i++;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    image.draw(0,0);
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
