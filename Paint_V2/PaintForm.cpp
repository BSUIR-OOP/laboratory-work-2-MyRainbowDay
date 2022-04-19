#include "PaintForm.h"

#include <Windows.h>
#include <stdio.h>
#include <string>
#pragma comment(lib,"user32.lib")

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Paint::PaintForm form;
	Application::Run(% form);
}

struct Vector2D
{
	int X, Y;
};


Vector2D mousePosition;

System::Void Paint::PaintForm::buttonColor_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	colorDialog1->ShowDialog();
	color = colorDialog1->Color;

	buttonColor->BackColor = color;

	if (color == Color::Black) {
		buttonColor->ForeColor = Color::White;
	}
	else {
		buttonColor->ForeColor = Color::Black;
	}

	pen = gcnew Pen(color, size);
	return System::Void();
}

System::Void Paint::PaintForm::buttonClear_Click(System::Object^ sender, System::EventArgs^ e)
{
	clearAll = true;
	pictureBox1->Invalidate();
	return System::Void();
}

System::Void Paint::PaintForm::buttonApplySize_Click(System::Object^ sender, System::EventArgs^ e)
{
	size = Convert::ToSingle(numericUpDownSize->Value);
	pen = gcnew Pen(color, size);

	return System::Void();
}

System::Void Paint::PaintForm::buttonActiveLine_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (statePen != 1) {

		statePen = 1;

		buttonActiveLine->BackColor = Color::Green;

		buttonActiveCircle->BackColor = Color::LightGray;
		buttonActiveSquare->BackColor = Color::LightGray;
		buttonActiveTexture->BackColor = Color::LightGray;
	}
	return System::Void();
}

System::Void Paint::PaintForm::buttonActiveSquare_Click(System::Object^ sender, System::EventArgs^ e)
{
	delete ptr;
	ptr = nullptr;
	if (statePen != 2) {

		statePen = 2;

		buttonActiveSquare->BackColor = Color::Green;


		buttonActiveCircle->BackColor = Color::LightGray;
		buttonActiveTexture->BackColor = Color::LightGray;
		buttonActiveLine->BackColor = Color::LightGray;

		groupBoxSettingsSquare->Visible = true;
		groupBoxSettingsSquare->Location = Point(30, 172);

		groupBoxSettingsCircle->Visible = false;
		groupBoxSettingsTexture->Visible = false;
	}
	else {

		if (groupBoxSettingsSquare->Visible) {
			groupBoxSettingsSquare->Visible = false;
		}
		else {
			groupBoxSettingsSquare->Visible = true;
			groupBoxSettingsSquare->Location = Point(30, 172);
		}
	}
	return System::Void();
}

System::Void Paint::PaintForm::buttonActiveCircle_Click(System::Object^ sender, System::EventArgs^ e)
{
	delete ptr;
	ptr = nullptr;
	if (statePen != 3) {
		statePen = 3;

		buttonActiveCircle->BackColor = Color::Green;

		buttonActiveSquare->BackColor = Color::LightGray;
		buttonActiveTexture->BackColor = Color::LightGray;
		buttonActiveLine->BackColor = Color::LightGray;

		groupBoxSettingsCircle->Visible = true;
		groupBoxSettingsCircle->Location = Point(30, 172);

		groupBoxSettingsSquare->Visible = false;
		groupBoxSettingsTexture->Visible = false;
	}
	else {
		if (groupBoxSettingsCircle->Visible) {
			groupBoxSettingsCircle->Visible = false;
		}
		else {
			groupBoxSettingsCircle->Visible = true;
			groupBoxSettingsCircle->Location = Point(30, 172);
		}
	}
	return System::Void();
}

System::Void Paint::PaintForm::buttonActiveTexture_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (statePen != 4) {

		groupBoxSettingsTexture->Visible = true;
		groupBoxSettingsTexture->Location = Point(30, 172);

		groupBoxSettingsSquare->Visible = false;
		groupBoxSettingsCircle->Visible = false;

		if (texture != nullptr) {
			statePen = 4;

			buttonActiveTexture->BackColor = Color::Green;

			buttonActiveSquare->BackColor = Color::LightGray;
			buttonActiveCircle->BackColor = Color::LightGray;
			buttonActiveLine->BackColor = Color::LightGray;
		}
	}
	else {
		if (groupBoxSettingsTexture->Visible) {
			groupBoxSettingsTexture->Visible = false;
		}
		else {
			groupBoxSettingsTexture->Visible = true;
			groupBoxSettingsTexture->Location = Point(30, 172);
		}
	}
	return System::Void();
}

System::Void Paint::PaintForm::buttonApplySquare_Click(System::Object^ sender, System::EventArgs^ e)
{
	ptr = gcnew square(color, int(mousePosition.X), int(mousePosition.Y), int(numericUpDownWidthSquare->Value), int(numericUpDownHeightSquare->Value), size);
	return System::Void();
}

System::Void Paint::PaintForm::buttonApplyCircle_Click(System::Object^ sender, System::EventArgs^ e)
{
	ptr = gcnew circle(color, int(mousePosition.X), int(mousePosition.Y), int(numericUpDownWidthCircle->Value), int(numericUpDownHeightCircle->Value), size);
	return System::Void();
}

System::Void Paint::PaintForm::buttonChooseTexture_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ file;
	openFileDialog1->ShowDialog();
	file = openFileDialog1->FileName;


	if (file == "openFileDialog1")
		return;

	statePen = 4;


	texture = gcnew Bitmap(file);


	buttonActiveTexture->BackColor = Color::Green;

	buttonActiveSquare->BackColor = Color::LightGray;
	buttonActiveCircle->BackColor = Color::LightGray;
	buttonActiveLine->BackColor = Color::LightGray;
	return System::Void();
}

System::Void Paint::PaintForm::buttonApplyTexture_Click(System::Object^ sender, System::EventArgs^ e)
{
	ptr = gcnew Texture(color, mousePosition.X, mousePosition.Y, texture->Width, texture->Height, size, texture);
	float width = Convert::ToSingle(numericUpDownWidthTexture->Value);
	float height = Convert::ToSingle(numericUpDownHeightTexture->Value);

	texture = gcnew Bitmap(texture, width, height);
	return System::Void();
}

System::Void Paint::PaintForm::buttonCreateNewProject_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Width = Convert::ToInt32(numericUpDownWidthForm->Value);
	this->Height = Convert::ToInt32(numericUpDownHeightForm->Value);

	if (groupBoxCreateProject->Visible) {
		groupBoxCreateProject->Visible = false;
	}

	filename = "openFileDialog1";
	return System::Void();
}

System::Void Paint::PaintForm::buttonOpenProject_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (radioButtonOriginalSize->Checked == false && radioButtonSetSize->Checked == false) {
		MessageBox::Show("Ñhoose the background size", "Attention!");
		return;
	}

	openFileDialog1->ShowDialog();
	filename = openFileDialog1->FileName;

	if (filename == "openFileDialog1")
		return;

	background = gcnew Bitmap(filename);

	if (radioButtonOriginalSize->Checked) {
		this->Width = background->Width;
		this->Height = background->Height;
	}
	else if (radioButtonSetSize->Checked) {
		background = gcnew Bitmap(background, Convert::ToInt32(numericUpDownWidthForm->Value), Convert::ToInt32(numericUpDownHeightForm->Value));
		this->Width = background->Width;
		this->Height = background->Height;
	}

	canvas = Graphics::FromImage(background);
	pictureBox1->Image = background;

	if (groupBoxCreateProject->Visible) {
		groupBoxCreateProject->Visible = false;
	}
	return System::Void();
}

System::Void Paint::PaintForm::pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	//draw a shape
	if (ptr != nullptr && mousePosition.X!=-1 && mousePosition.Y!=-1 )
	{
		ptr->setCoordinates(mousePosition.X, mousePosition.Y);
		ptr->draw(this->canvas);
	}

	//reset settings
	if (clearAll) {
		points->Clear();
		canvas->Clear(Color::White);
		clearAll = false;

		mousePosition.X = -1;
		mousePosition.Y = -1;

		DrawBackground();
	}
	return System::Void();
}

System::Void Paint::PaintForm::pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (statePen == 1) {
		points->Clear();
		points->Add(e->Location);
		draw = true;

		pictureBox1->SizeMode = PictureBoxSizeMode::Normal;
	}
	else {

		mousePosition.X = e->Location.X;
		mousePosition.Y = e->Location.Y;
	}

	pictureBox1->Invalidate();
	return System::Void();
}

System::Void Paint::PaintForm::pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (draw && points->Contains(Point(e->X, e->Y)) == false) {

		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			points->Add(e->Location);
			mousePosition.X = e->Location.X;
			mousePosition.Y = e->Location.Y;
			ptr = gcnew line(color, int(mousePosition.X), int(mousePosition.Y), size, points);
		}

		pictureBox1->Invalidate();
	}
	return System::Void();
}

System::Void Paint::PaintForm::pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	draw = false;
	pictureBox1->Invalidate();

	mousePosition.X = -1;
	mousePosition.Y = -1;

	return System::Void();
}

System::Void Paint::PaintForm::pictureBox1_VisibleChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Paint::PaintForm::ñîçäàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (groupBoxCreateProject->Visible) {
		groupBoxCreateProject->Visible = false;
	}
	else {
		groupBoxCreateProject->Visible = true;
		groupBoxCreateProject->Location = Point(12, 37);
	}

	return System::Void();
}

System::Void Paint::PaintForm::ñîõğàíèòüÊàêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ fname;
	saveFileDialog1->ShowDialog();
	fname = saveFileDialog1->FileName;

	if (fname == "")
		return;

	Bitmap^ img = gcnew Bitmap(pictureBox1->Image);
	img->Save(fname);

	MessageBox::Show("The image is saved at \"" + fname + "\".", "Attention!");

	return System::Void();
}

System::Void Paint::PaintForm::ïàíåëüİëåìåíòîâToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (groupBoxToolBar->Visible) {
		groupBoxToolBar->Visible = false;
	}
	else {
		groupBoxToolBar->Visible = true;
		groupBoxToolBar->Location = Point(12, 45);
	}

	return System::Void();
}

System::Void Paint::PaintForm::îÏğîãğàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Labaratory work 2");
	return System::Void();
}

System::Void Paint::PaintForm::âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void Paint::PaintForm::PaintForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	//Initialization
	color = Color::Red;
	size = 15;
	pen = gcnew Pen(color, size);
	points = gcnew List <Point>();
	draw = false;
	statePen = 1;
	ptr = nullptr;
	mousePosition.X = -1;
	mousePosition.Y = -1;


	buttonActiveLine->BackColor = Color::Green;

	//Button color
	buttonActiveCircle->BackColor = Color::LightGray;
	buttonActiveSquare->BackColor = Color::LightGray;
	buttonActiveTexture->BackColor = Color::LightGray;

	Bitmap^ Img = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
	canvas = Graphics::FromImage(Img);
	pictureBox1->Image = Img;
	pictureBox1->BackColor = Color::White;

	//limitation of the created canvas
	numericUpDownWidthForm->Minimum = 800;
	numericUpDownHeightForm->Minimum = 600;
	numericUpDownWidthForm->Maximum = GetSystemMetrics(SM_CXSCREEN);
	numericUpDownHeightForm->Maximum = GetSystemMetrics(SM_CYSCREEN);

	clearAll = false;

	filename = "openFileDialog1";

	buttonColor->BackColor = color;
	return System::Void();
}

void Paint::PaintForm::DrawBackground()
{
	if (filename != "openFileDialog1") {
		background = gcnew Bitmap(filename);
		background = gcnew Bitmap(background, pictureBox1->Width, pictureBox1->Height);
	}
	else
		background = gcnew Bitmap(pictureBox1->Image, pictureBox1->Width, pictureBox1->Height);

	delete canvas;
	canvas = Graphics::FromImage(background);
	pictureBox1->Image = background;
	pictureBox1->Refresh();
	pictureBox1->Invalidate();

	//throw gcnew System::NotImplementedException();
}

System::Void Paint::PaintForm::pictureBox1_SizeChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (pictureBox1->Image) { 
		//Bitmap^ img = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height, Graphics::FromImage(pictureBox1->Image));

		if (background)
			background = gcnew Bitmap(background, pictureBox1->Width, pictureBox1->Height);
		else
			background = gcnew Bitmap(pictureBox1->Image, pictureBox1->Width, pictureBox1->Height);

		delete canvas;
		canvas = Graphics::FromImage(background);
		//canvas = Graphics::FromImage(img);
		pictureBox1->Image = background;
		//pictureBox1->Image = img;
		pictureBox1->Refresh();
		pictureBox1->Invalidate();
	}

	return System::Void();
}
