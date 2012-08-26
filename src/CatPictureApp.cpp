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
};

void CatPictureApp::setup()
{
}

void CatPictureApp::mouseDown( MouseEvent event )
{
}

void CatPictureApp::update()
{
}

void CatPictureApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0.2f, 0.6f, 0 ) ); 
}

CINDER_APP_BASIC( CatPictureApp, RendererGl )
