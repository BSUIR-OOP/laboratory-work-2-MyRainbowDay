#include "Shapes.h"

shape::shape()
{
	xC0 = 1;
	yC0 = 1;
	size = 1;
	fillcolor = Color::Red;
	pen = gcnew Pen(fillcolor, size);
}

shape::shape(Color color, int x, int y, float sz)
{
	size = sz;
	xC0 = x;
	yC0 = y;
	fillcolor = color;
	pen = gcnew Pen(fillcolor, size);
}

circle::circle() :shape()
{
	width = 1;
	height = 1;
}

circle::circle(Color color, int x, int y, int w, int h, float sz) :shape(color, x, y, sz)
{
	width = w;
	height = h;
}

void circle::drawCircle(Graphics^ canvas)
{
	canvas->DrawEllipse(pen, xC0, yC0, System::Convert::ToInt32(width), System::Convert::ToInt32(height));
}

square::square() :shape()
{
	width = 1;
	height = 1;
}

square::square(Color color, int x, int y, int w, int h, float sz) :shape(color, x, y, sz)
{
	width = w;
	height = h;
}

void square::drawRectangle(Graphics^ canvas)
{
	canvas->DrawRectangle(pen, xC0, yC0, System::Convert::ToInt32(width), System::Convert::ToInt32(height));
}

line::line() :shape()
{
	points = gcnew List <Point>();
}

line::line(Color color, int x, int y, float sz, List <Point>^ point) : shape(color, x, y, sz)
{
	points = point;
}

void line::drawLines(Graphics^ canvas)
{
	canvas->DrawLines(pen, points->ToArray());
}

Texture::Texture(Color color, int x, int y, int w, int h, float sz, Bitmap^ text) :shape(color, x, y, sz)
{
	textur = text;
	width = w;
	height = h;
}

void Texture::drawTexture(Graphics^ canvas)
{
	canvas->DrawImage(textur, xC0, yC0, System::Convert::ToInt32(width), System::Convert::ToInt32(height));
}

