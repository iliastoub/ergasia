#include "sgg/graphics.h"
#include "defines.h"
#include<string>

void draw()
{

	graphics::Brush br;
	br.outline_opacity = 4.0f;
	br.texture = std::string(ASSET_PATH) + "Solid_black";

	graphics::drawRect(CANVAS_WIDTH / 2, CANVAS_HEIGTH / 2, CANVAS_WIDTH, CANVAS_HEIGTH, br);

}


int main(int argc, char ** argv)
{
	
	graphics::createWindow(1200, 800, "XILIKI V0.1");

	graphics::setCanvasSize(28, 16);
	
    graphics::setCanvasScaleMode(graphics::CANVAS_SCALE_FIT);
	
	graphics::setDrawFunction(draw);
	
	
	graphics::startMessageLoop();

	return 0;

}



