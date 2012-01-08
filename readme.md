# ofxCurvesTool is an addon for [openFrameworks](http://openframeworks.cc)

ofxCurvesTool provides an interface for controlling a cubic spline that is continuously evaluated and stored in a lookup table.

## LUT Access

To get access to the data stored inside the curve, just use the `[]` operator. For example, to make a horizontally fading gradient inside a 256x256 image:

	for(int x = 0; x < 256; x++) {
		for(int y = 0; y < 256; y++) {
			img.setColor(x, y, ofColor(curvesTool[x]));
		}
	}

## Enable/Disable

The interface only listens to mouse and keyboard events when it is drawn. It's a little magical, but if you're interested in the details see the implementation for `ofxCurvesTool::drawEvent()`.

## Loading/Saving

ofxCurvesTool stores data in an anonymous list of lists, using a severely simplified [YAML](https://en.wikipedia.org/wiki/Yml) representation. Call `ofxCurvesTool::save()` or `ofxCurvesTool::load()` with a `.yml` extension.

## Size

By default ofxCurvesTool uses 256 bins, but if you call `ofxCurvesTool::setup(128)` (for example) it will use 128 bins instead.

## Drawing

`ofxCurvesTool::draw()` takes no arguments. You have to position it using `ofTranslate()`. If you happen to scale or rotate `ofxCurvesTool`, it may get confused about where your mouse is clicking.