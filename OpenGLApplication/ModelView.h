// CModelView window
#include "OpenGLHelper.h"

class CModelView
{

public:

	//	Constructor / Destructor.
	CModelView();
	virtual ~CModelView();

// Attributes
public:

// Operations
public:
// Overrides
protected:
	//	Main OpenGL functions.
	virtual void SetupScene();
	virtual void RenderScene();
	virtual void FinishScene();
	virtual int LoadAsset (const char* path);
	virtual void DoOpenGLDraw();
	virtual void DoOpenGLResize(int nWidth, int nHeight);
	virtual void display(void);
	virtual void SetupLog();

private:
	void GetBoundingBoxForNode(const aiNode* nd, aiVector3D* min, aiVector3D* max, aiMatrix4x4* traf);
	void GetBoundingBox(aiVector3D* min, aiVector3D* max);

	void color4_to_float4(const aiColor4D *c, float f[4]);
	void set_float4(float f[4], float a, float b, float c, float d);
	void apply_material(const aiMaterial *mtl);
	void recursive_render (const aiScene *sc, const aiNode* nd);
	void do_motion (void);	
};

