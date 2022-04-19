#pragma once

using namespace System::Drawing;
using namespace System::Collections::Generic;


ref class shape
{
protected:
	Color fillcolor;
	Pen^ pen;
	int xC0, yC0;
	float size;
public:
	shape();

	shape(Color color, int x, int y, float sz);

	void setCoordinates(int x, int y);

	virtual void draw(Graphics^ canvas);
};

ref class circle :public shape
{
private:
	int width;
	int height;
public:
	circle();

	circle(Color color, int x, int y, int w, int h, float sz);

	void draw(Graphics^ canvas) override;
	
};

ref class square :public shape
{
private:
	int width;
	int height;
public:
	square();

	square(Color color, int x, int y, int w, int h, float sz);

	void draw(Graphics^ canvas) override;

};

ref class line :public shape
{
private:
	List <Point>^ points;
public:
	line();

	line(Color color, int x, int y, float sz, List <Point>^ point);

	void draw(Graphics^ canvas) override;
};

ref class Texture :public shape
{
private:
	Bitmap^ textur;
	int width;
	int height;
public:
	Texture(Color color, int x, int y, int w, int h, float sz,Bitmap^ text);

	void draw(Graphics^ canvas) override;
};
