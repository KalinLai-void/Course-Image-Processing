#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

//���ε{����������ҫ��� ��@����� (Single-Threaded Apartment�ASTA)
[STAThreadAttribute]
void main(void)
{
	//�Ұʥi����
	Application::EnableVisualStyles();
	//�����|���TextRender�覡�ϥ�
	Application::SetCompatibleTextRenderingDefault(false);
	//�إ�Window Forms
	My2ImageMergeandScaling::MainForm myform;
	Application::Run(% myform);
}