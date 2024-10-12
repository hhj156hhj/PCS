#pragma once
#include "ui.h"
class TAppFrame :
    public AppFrameBase
{
public:
    TAppFrame();
    virtual void OnExit(wxCommandEvent& event) override;
};

