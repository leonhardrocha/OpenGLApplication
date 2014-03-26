#ifndef _TOEIN_STEREO_VIEW_H_
#define _TOEIN_STEREO_VIEW_H_

#include "BaseStereoView.h"
#include <vector>
#include <map>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <IL/il.h>
#include <GL/glew.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/freeglut.h>

// ToeInStereoView window

class ToeInStereoView : public BaseStereoView
{

public:
	//	Constructor / Destructor.
	ToeInStereoView();
	virtual ~ToeInStereoView() {};
// Overrides
protected:
	//	Main OpenGL functions.
	virtual void SetupView();
	virtual void SetupWindow();
	virtual void SetupScene();
	virtual void RenderScene();
	virtual void RenderStereoView();
	virtual void RenderLeftView();
	virtual void RenderRightView();
	virtual void DoOpenGLDraw();
	virtual void DoOpenGLResize(int nWidth, int nHeight);
};

#endif
