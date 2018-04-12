#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);//背景を白色に
    ofSetColor(0, 0, 0);//ドラッグする前の円を黒色に
    
    //soundplayer.load("test.wav");//音楽ファイルの読み込み
    //soundplayer.setLoop(true);//音楽をループさせる
    //soundplayer.setVolume(1.0);//音の大きさを指定
    //soundplayer.play();//音を再生
    
    //soundstream.setup(this,0,1,44100,256,4);//
    
    video.initGrabber(ofGetWidth(),ofGetHeight());//ビデオを画面サイズに合わせる
}

//--------------------------------------------------------------
void ofApp::update(){
    //volume = ofSoundGetSpectrum(1);//音量を取得
    //size_circle = volume[0]*1300;//音の値を大きく
    //curVol = curVol * 2000;//curVolの値を大きく
    
    video.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofDrawCircle(x_circle, y_circle, 50);//円を表示
    //ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2,size_circle );//ウィンドウの中心に円を描画
    
    video.draw(0,0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    //if (key == 'a') {
        //size_circle = size_circle + 20;//aが押された時、円の大きさを大きくする
    //}
    //if (key == 's') {
        //size_circle = size_circle - 20;//sが押された時、円の大きさを小さくする
    //}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    //if (key =='q') {
        //size_circle = size_circle + 20;//qが押された時、円の大きさを大きくする
    //}
    //if (key =='w') {
       //size_circle = size_circle - 20;//wが押された時、円の大きさを小さくする
    //}

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    //円の座標をマウスの位置に
    //x_circle = x;
    //y_circle = y;
    //円の色を変える
    //ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    //if (button == 0){//マウスの左ボタンでドラッグした時
      //  ofSetColor(255, 0, 0);//円を赤色に
    //}
    //if (button == 1){//マウスの真ん中のボタンでドラッグした時
      //  ofSetColor(0, 255, 0);//円を緑色に
    //}
    //if (button == 2){//マウスの右ボタンでドラッグした時
      //  ofSetColor(0, 0, 255);//円を青色に
    //}

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    //x_circle = x;
    //y_circle = y;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    //x_circle = ofGetWidth()/2;
    //y_circle = ofGetHeight()/2;
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
