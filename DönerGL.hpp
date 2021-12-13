#include <sdk/os/file.hpp>
//Created by DasHeiligeDoenerhuhn
//Github: https://github.com/DasHeiligeDoenerhuhn
int FoV = 20;
int CamXPos = 0;
int CamYPos = 0;
int CamZPos = 100;
 void DrawTri3D(int x, int y, int z, int x2, int y2, int z2, int x3, int y3,int z3, int xRot= 0, int yRot=0, int zRot = 0)
	{
	line(FoV*(x+CamXPos)/(CamZPos+z), FoV*(y+CamYPos)/(z+CamZPos),FoV*(x2+CamXPos)/(CamZPos+z2), FoV*(y2+CamYPos)/(z2+CamZPos),color(0,0,255));
	line(FoV*(x2+CamXPos)/(CamZPos+z2), FoV*(y2+CamYPos)/(z2+CamZPos),FoV*(x3+CamXPos)/(CamZPos+z3), FoV*(y3+CamYPos)/(z3+CamZPos),color(0,0,255));
	line(FoV*(x3+CamXPos)/(CamZPos+z3), FoV*(y3+CamYPos)/(z3+CamZPos),FoV*(x+CamXPos)/(CamZPos+z), FoV*(y+CamYPos)/(z+CamZPos),color(0,0,255));	
	}
// add obj loading
void loadOBJ(string path){

}
//add Rotation
// add Cam Rotation

