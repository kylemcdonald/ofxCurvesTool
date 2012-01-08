#include "ofApp.h"

// add saving and loading

void ofApp::setup() {
	ofSetVerticalSync(true);
	curvesTool.setup();
	img.allocate(256, 256, OF_IMAGE_GRAYSCALE);
	show = true;
}  

void ofApp::update() {
	for(int x = 0; x < 256; x++) {
		for(int y = 0; y < 256; y++) {
			img.setColor(x, y, ofColor(curvesTool[x]));
		}
	}
	img.update();
}

void ofApp::draw() {
	ofBackground(0);
	ofTranslate(16, 16);
	if(show) {
		curvesTool.draw();
		img.draw(256, 0);
	}
}

void ofApp::keyPressed(int key) {
	if(key == '\t') {
		show = !show;
	}
	if(key == 's') {
		curvesTool.save("curves.yml");
	}
	if(key == 'l') {
		curvesTool.load("curves.yml");
	}
}