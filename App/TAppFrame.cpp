#include "TAppFrame.h"

TAppFrame::TAppFrame() :AppFrameBase(NULL)
{
}

void TAppFrame::OnExit(wxCommandEvent& event)
{
	Close();
}
