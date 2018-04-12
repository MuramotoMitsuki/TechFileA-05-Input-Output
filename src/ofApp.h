#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
private:
    //int x_circle = 0;//円の表示されるx座標
    //int y_circle = 0;//円の表示されるy座標
    
    int size_circle = 0;//円の大きさ
    
    //float *volume;//再生中の音量
    //ofSoundPlayer soundplayer;

    //ofSoundStream soundstream;//ofSoundStreamのクラスのインスタンスを生成
    //float curVol;//音の大きさ
    
    ofVideoGrabber video;
    
	public:
		void setup();
		void update();
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
		
    //void audioIn(float * input, int bufferSize,int nChannels);
};
