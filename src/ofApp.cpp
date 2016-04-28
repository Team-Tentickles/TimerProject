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

	opac = 0;
	totalfadetime = 1000;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw()
{
	ellapsedTime = ofGetElapsedTimeMillis();
	
	fadeImage(2000, artist1img1, 160, 560);
	fadeImage(5500, artist2img1, 400, 560);
	fadeImage(9000, artist1img2, 640, 560);
	fadeImage(12500, artist2img2, 100, 375);
	fadeImage(16000, artist1img3, 315, 375);
	fadeImage(19500, artist2img3, 530, 375);
	fadeImage(23000, artist1img4, 747, 375);
	fadeImage(26500, artist2img4, 160, 200);
	fadeImage(30000, artist1img5, 400, 200);
	fadeImage(33500, artist2img5, 640, 200);
	fadeImage(37000, peakartist, 400, 45);
}

void ofApp::fadeImage(int tt, ofImage imgname, int imgx, int imgy)
{
	if (ellapsedTime >= tt && ellapsedTime <= tt + totalfadetime)
	{
		opac = floor(255 * ((ellapsedTime - tt) / totalfadetime));
		ofSetColor(255, 255, 255, opac);
		imgname.draw(imgx, imgy);
	}
	if (ellapsedTime >= tt + totalfadetime)
	{
		ofSetColor(255, 255, 255, 255);
		imgname.draw(imgx, imgy);
		opac = 0;
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
