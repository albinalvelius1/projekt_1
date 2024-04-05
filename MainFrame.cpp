#include "MainFrame.h"
#include <wx/wx.h>
#include <iostream>


MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title) {
    wxPanel* panel = new wxPanel(this);
    wxGauge* gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(100,100), wxSize(300, -1));
    wxButton* button = new wxButton(panel, wxID_ANY, "button", wxPoint(200, 200), wxSize(200,100));

    gauge->SetValue(90);

    button->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);
}

void MainFrame::OnButtonClicked(wxCommandEvent& evt) {
    wxLogMessage("%d", evt.GetInt());
}