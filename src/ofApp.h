#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		//---for the images
		ofImage artist1img1;
		ofImage artist2img1;
		ofImage artist1img2;
		ofImage artist2img2;
		ofImage artist1img3;
		ofImage artist2img3;
		ofImage artist1img4;
		ofImage artist2img4;
		ofImage artist1img5;
		ofImage artist2img5;
		ofImage peakartist;
		//---for the timer
		float ellapsedTime;

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
};
