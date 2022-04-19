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

void shape::setCoordinates(int x, int y)
{
	xC0 = x; yC0 = y;
}

void shape::draw(Graphics^ canvas)
{}

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

void circle::draw(Graphics^ canvas)
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

void square::draw(Graphics^ canvas)
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

void line::draw(Graphics^ canvas)
{
	canvas->DrawLines(pen, points->ToArray());
}

Texture::Texture(Color color, int x, int y, int w, int h, float sz, Bitmap^ text) :shape(color, x, y, sz)
{
	textur = text;
	width = w;
	height = h;
}

void Texture::draw(Graphics^ canvas)
{
	canvas->DrawImage(textur, xC0, yC0, System::Convert::ToInt32(width), System::Convert::ToInt32(height));
}

