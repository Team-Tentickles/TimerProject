#include "ofApp.h"
 
//--------------------------------------------------------------
void ofApp::setup()
{
	artist1img1.load("images/img0.jpg");
	artist2img1.load("images/img1.jpg");
	artist1img2.load("images/img2.jpg");
	artist2img2.load("images/img3.jpg");
	artist1img3.load("images/img4.jpg");
	artist2img3.load("images/img5.jpg");
	artist1img4.load("images/img6.jpg");
	artist2img4.load("images/img7.jpg");
	artist1img5.load("images/img8.jpg");
	artist2img5.load("images/img9.jpg");
	peakartist.load("images/img10.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw()
{
	ellapsedTime = ofGetElapsedTimeMillis();
	//cout << ellapsedTime << endl;

	artist1img1.draw(160,560);
	if(ellapsedTime >= 4500)
	{
		artist2img1.draw(400, 560);
	}
	if (ellapsedTime >= 9500)
	{
		artist1img2.draw(640, 560);
	}
	if (ellapsedTime >= 14000)
	{
		artist2img2.draw(100, 375);
	}
	if (ellapsedTime >= 18500)
	{
		artist1img3.draw(315, 375);
	}
	if (ellapsedTime >= 23000)
	{
		artist2img3.draw(530, 375);
	}
	if (ellapsedTime >= 27500)
	{
		artist1img4.draw(745, 375);
	}
	if (ellapsedTime >= 32000)
	{
		artist2img4.draw(160, 200);
	}
	if (ellapsedTime >= 36500)
	{
		artist1img5.draw(400, 200);
	}
	if (ellapsedTime >= 41000)
	{
		artist2img5.draw(640, 200);
	}
	if (ellapsedTime >= 45500)
	{
		peakartist.draw(400, 45);
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
