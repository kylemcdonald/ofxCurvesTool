#include "ofApp.h"
#include "ofAppGlutWindow.h"

int main() {
	ofAppGlutWindow window;
	ofSetupOpenGL(&window, 544, 288, OF_WINDOW);
	ofRunApp(new ofApp());
}
