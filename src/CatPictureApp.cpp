/**
 *@file CatPicture
 *An app to display a color changing background.
 *
 *@author Shiloh Womack
 *@date Aug 25, 2012
 *
 *@note You are free to use, share, and remix this,
 *privately or commercially, as long as you give attribution.
*/

#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CatPictureApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
private:
	float red;
	float green;
	float blue;
};

void CatPictureApp::setup()
{
	red = 0.0f;
	green = 1.0f;
	blue = 0.0f;
}

void CatPictureApp::mouseDown( MouseEvent event )
{
}

void CatPictureApp::update()
{
	red = red + 0.001f;
	green = red - 0.02f;
	blue = blue + 0.005f;

	// Statements to ensure variables remain within parameters
	if (red > 1.0f){
		red = 0.0f;
	}

	if (green < 0.0f){
		green = 1.0f;
	}

	if (blue > 1.0f){
		blue = 0.0f;
	}
}

void CatPictureApp::draw()
{
	gl::clear( Color( red, green, blue ) ); 
}

CINDER_APP_BASIC( CatPictureApp, RendererGl )
