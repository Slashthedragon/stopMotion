#pragma once

#include "../ofMain.h"


class ofApp : public ofBaseApp{

public:
void setup();
void update();
void draw();
void keyPressed(int key);
void mousePressed(int x, int y, int button);
/*void mouseDragged(int x, int y, int button);
void mouseMoved(int x, int y );
void keyReleased(int key);
void mouseReleased(int x, int y, int button);
void windowResized(int w, int h);
void dragEvent(ofDragInfo dragInfo);
void gotMessage(ofMessage msg);
*/
//images
    ofImage image1;
    ofImage image2;
    ofImage image3;
    ofImage image4;
    ofImage image5;
    ofImage image6;
    ofImage image7;
    ofImage image8;
    ofImage image9;
    ofImage image10;
    ofImage image11;
    ofImage image12;
    ofImage image13;
    ofImage image14;
    ofImage image15;
    ofImage image16;
    ofImage image17;
    ofImage image18;
    ofImage image19;
    ofImage image20;



        ofVideoGrabber vidGrabber;
        unsigned char * videoCurrentBuffer;
        unsigned char * videoOverlayBuffer;
        vector<ofTexture> videoArray;
        ofTexture *	videoCurrent;
        ofTexture *	videoOverlay;
        unsigned char   * album[];

        int camWidth;
        int camHeight;
        int videoWidth;
        int videoHeight;
        int frameRate;
        int aSize;
        bool playback = false;
        int playFrame = 0;
        int  arraySize;
};
