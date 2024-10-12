#include "TheApp.h"
#include "TAppFrame.h"

wxIMPLEMENT_APP(TheApp);

bool TheApp::OnInit()
{
    if (!wxApp::OnInit())
        return false;
    AppFrameBase* frame = new TAppFrame();
    frame->Show(true);
    return true;
}
