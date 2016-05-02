#include "ofApp.h"
#include "FadeImage.h"
 
//--------------------------------------------------------------
void ofApp::setup()
{
	artist1img1.load("images/imgnu.jpg");
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

	totalfadetime = 1000; //--in millisec
	maxx = 126;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw()
{
	ellapsedTime = ofGetElapsedTimeMillis();
	
	fadeImage(2000, artist1img1, 223, 623,maxx, maxx,maxx/2,maxx/2,maxx, maxx);
	fadeImage(5500, artist2img1, 463, 623, maxx, maxx, maxx / 2, maxx / 2, maxx, maxx);
	fadeImage(9000, artist1img2, 703, 623, maxx, maxx, maxx / 2, maxx / 2, maxx, maxx);
	fadeImage(12500, artist2img2, 163, 438, maxx, maxx, maxx / 2, maxx / 2, maxx, maxx);
	fadeImage(16000, artist1img3, 378, 438, maxx, maxx, maxx / 2, maxx / 2, maxx, maxx);
	fadeImage(19500, artist2img3, 593, 438, maxx, maxx, maxx / 2, maxx / 2, maxx, maxx);
	fadeImage(23000, artist1img4, 810, 438, maxx, maxx, maxx / 2, maxx / 2, maxx, maxx);
	fadeImage(26500, artist2img4, 223, 262, maxx, maxx, maxx / 2, maxx / 2, maxx, maxx);
	fadeImage(30000, artist1img5, 463, 262, maxx, maxx, maxx / 2, maxx / 2, maxx, maxx);
	fadeImage(33500, artist2img5, 703, 262, maxx, maxx, maxx / 2, maxx / 2, maxx, maxx);
	fadeImage(37000, peakartist, 463, 108, maxx, maxx, maxx / 2, maxx / 2, maxx, maxx);
}

//---fadeimage=(1)triggertime, (2)img, (3,4)it's starting x and y positions before it grows, 
//   (5,6)the max width and heigt of the projection, (7,8)the starting x and y of the subsection
//   of the image being drawn, (9,10)the max width and height of the subsection of the image
//    being drawn
//---(7,8,9,10) are the variables that really control what is being prjected
void ofApp::fadeImage(int tt, ofImage imgname, int startX, int startY, int maxWidth, int maxHeight, int startSubX, int startSubY,int maxSubWidth, int maxSubHeight)
{
	int x = 0; 
	int y = 0;
	int subx = 0;
	int suby = 0;

	if (ellapsedTime >= tt && ellapsedTime <= tt + totalfadetime)
	{
		int opac;
		int width = 0;
		int height = 0;
		int subwidth = 0;
		int subheight = 0;
		
		opac = floor(255 * ((ellapsedTime - tt) / totalfadetime));
		width = floor(maxWidth * ((ellapsedTime - tt) / totalfadetime));
		height = floor(maxHeight * ((ellapsedTime - tt) / totalfadetime));
		subwidth = floor(maxSubWidth * ((ellapsedTime - tt) / totalfadetime));
		subheight = floor(maxSubHeight * ((ellapsedTime - tt) / totalfadetime));
		x = startX - (width / 2);
		y = startY - (height / 2);
		subx = startSubX - (subwidth / 2);
		suby = startSubY - (subheight / 2);
		
		ofSetColor(255, 255, 255, opac);
		imgname.drawSubsection(x, y, width, height, subx, suby, subwidth, subheight);
	}
	if (ellapsedTime >= tt + totalfadetime)
	{
		x = startX - (maxWidth / 2);
		y = startY - (maxHeight / 2);
		subx = startSubX - (maxSubWidth / 2);
		suby = startSubY - (maxSubHeight / 2);
		
		ofSetColor(255, 255, 255, 255);
		imgname.drawSubsection(x, y, maxWidth, maxHeight, subx, subx, maxSubWidth, maxSubHeight);
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
