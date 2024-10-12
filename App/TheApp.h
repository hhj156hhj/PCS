#pragma once
#include <wx/wxprec.h>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif


class TheApp :
    public wxApp
{
public:
    virtual bool OnInit();
};

