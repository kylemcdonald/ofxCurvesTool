#pragma once

#include "CurveLut.h"
#include "ofMain.h"

class ofxCurvesTool : public CurveLut {
public:
	void draw(int x = 0, int y = 0);
	void save(string filename);
	void load(string filename);
	
	// these are only used internally
	ofxCurvesTool();
	void mouseMoved(ofMouseEventArgs& args);
	void mousePressed(ofMouseEventArgs& args);
	void mouseDragged(ofMouseEventArgs& args);
	void mouseReleased(ofMouseEventArgs& args);
	void keyPressed(ofKeyEventArgs& args);
	void keyReleased(ofKeyEventArgs& args) {}
	void drawEvent(ofEventArgs& args);
	
protected:
	ofVec2f drawPosition;
	
	void updateMouse(ofMouseEventArgs& args);
	int mouseX, mouseY;
	bool focus;
	
	static const int minDistance = 10;
	bool hoverState;
	bool dragState;
	int curHover;
	bool drawing, drawn;
};
