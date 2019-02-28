/*
*
* Menu.cpp
*  Created by Warlauke#6660
*/

#include "menu.h"
#include "ImGui/imgui.h"

cMenu* menu = new cMenu();

bool UI::MainWindow = false;
bool UI::ConfigWindow = false;
bool UI::ColWindow = false;
bool UI::PlayerWindow = false;
bool UI::SpecWindow = false;

void cMenu::SetupMainMenuBar()
{
    if (ImGui::BeginMainMenuBar()) {
        ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(8 * 2.0f, 4 * 2.0f));
        
        ImGui::Selectable(("Main Window"), &UI::MainWindow, 0, ImVec2(ImGui::CalcTextSize(("Main Window"), NULL, true).x, 0.0f));
        ImGui::SameLine();
        
        ImGui::Selectable(("Config Window"), &UI::ConfigWindow, 0, ImVec2(ImGui::CalcTextSize(("Config Window"), NULL, true).x, 0.0f));
        ImGui::SameLine();
        
        ImGui::Selectable(("Colors Window"), &UI::ColWindow, 0, ImVec2(ImGui::CalcTextSize(("Colors Window"), NULL, true).x, 0.0f));
        ImGui::SameLine();
        
        ImGui::Selectable(("Player List Window"), &UI::PlayerWindow, 0, ImVec2(ImGui::CalcTextSize(("Player List Window"), NULL, true).x, 0.0f));
        ImGui::SameLine();
        
        ImGui::Selectable(("Spectators Window"), &UI::SpecWindow, 0, ImVec2(ImGui::CalcTextSize(("Spectators Window"), NULL, true).x, 0.0f));
        ImGui::SameLine(ImGui::GetWindowContentRegionMax().x-ImVec2(ImGui::CalcTextSize(("Unload   "), NULL, true)).x);
        
        if(ImGui::Button(("Unload   "), ImVec2(ImGui::CalcTextSize(("Unload   "), NULL, true).x, 0.0f)) )
        {
        }
        
        ImGui::PopStyleVar();
        ImGui::EndMainMenuBar();
    }
}

void cMenu::setupWindows() {
    if(UI::isVisible)
    {
        menu->SetupMainMenuBar();
        /*if(UI::MainWindow)
        {
            Menu->setupMainTab();
        }
        if(UI::ConfigWindow)
        {
            CfgWindow->setupWindow();
        }
        if(UI::PlayerWindow)
        {
            PlayerWindow->setupWindow();
        }
        if(UI::ColWindow)
        {
            ColWindow->setupWindow();
        }*/
    }
    
    /*if(UI::SpecWindow)
    {
        SpecList->setupWindow();
    }*/
}

void cMenu::setupStyle() {
        ImGuiStyle& style = ImGui::GetStyle();
    
        /* Menu goes transparent without these being hardcoded */
        ImColor mainColor = ImColor(25, 25, 25, 255);
        ImColor bodyColor = ImColor(5, 5, 5, 255);
        ImColor fontColor = ImColor(255, 255, 255, 255);
        ImColor accentColor = ImColor(39, 106, 219, 255);
    
        ImVec4 mainColorHovered    = ImVec4(mainColor.Value.x + 0.1f, mainColor.Value.y + 0.1f, mainColor.Value.z + 0.1f, mainColor.Value.w);
        ImVec4 mainColorActive = ImVec4(mainColor.Value.x + 0.2f, mainColor.Value.y + 0.2f, mainColor.Value.z + 0.2f, mainColor.Value.w);
        ImVec4 menubarColor = ImVec4(bodyColor.Value.x, bodyColor.Value.y, bodyColor.Value.z, bodyColor.Value.w - 0.8f);
        ImVec4 frameBgColor = ImVec4(bodyColor.Value.x, bodyColor.Value.y, bodyColor.Value.z, bodyColor.Value.w + .1f);
        ImVec4 tooltipBgColor = ImVec4(bodyColor.Value.x, bodyColor.Value.y, bodyColor.Value.z, bodyColor.Value.w + .05f);
        ImVec4 accentColorHovered    = ImVec4(accentColor.Value.x + 0.1f, accentColor.Value.y + 0.1f, accentColor.Value.z + 0.1f, accentColor.Value.w);
        ImVec4 accentColorActive = ImVec4(accentColor.Value.x + 0.2f, accentColor.Value.y + 0.2f, accentColor.Value.z + 0.2f, accentColor.Value.w);

        style.Alpha = 1.0f;
        style.WindowPadding = ImVec2(4, 4);
        style.WindowMinSize = ImVec2(32, 32);
        style.WindowRounding = 0.0f;
        style.WindowTitleAlign = ImVec2(0.5f, 0.5f);
        style.ChildRounding = 0.0f;
        style.FramePadding = ImVec2(4, 3);
        style.FrameRounding = 0.0f;
        style.ItemSpacing = ImVec2(8, 4);
        style.ItemInnerSpacing = ImVec2(4, 4);
        style.TouchExtraPadding = ImVec2(0, 2);
        style.IndentSpacing = 21.0f;
        style.ColumnsMinSpacing = 3.0f;
        style.ScrollbarSize = 12.0f;
        style.ScrollbarRounding = 0.0f;
        style.GrabMinSize = 5.0f;
        style.GrabRounding = 0.0f;
        style.ButtonTextAlign = ImVec2(0.5f, 0.5f);
        style.DisplayWindowPadding = ImVec2(22, 22);
        style.DisplaySafeAreaPadding = ImVec2(4, 4);
        style.AntiAliasedLines = true;
        style.AntiAliasedFill = true;
        style.CurveTessellationTol = 1.25f;
    
        style.Colors[ImGuiCol_Text] = fontColor;
        style.Colors[ImGuiCol_TextDisabled] = ImVec4(0.24f, 0.23f, 0.29f, 1.00f);
        style.Colors[ImGuiCol_WindowBg] = bodyColor;
        style.Colors[ImGuiCol_ChildWindowBg] = ImVec4(.0f, .0f, .0f, .0f);
        style.Colors[ImGuiCol_PopupBg] = tooltipBgColor;
        style.Colors[ImGuiCol_Border] = mainColor;
        style.Colors[ImGuiCol_BorderShadow] = ImVec4(0.92f, 0.91f, 0.88f, 0.00f);
        style.Colors[ImGuiCol_FrameBg] = frameBgColor;
        style.Colors[ImGuiCol_FrameBgHovered] = mainColorHovered;
        style.Colors[ImGuiCol_FrameBgActive] = mainColorActive;
        style.Colors[ImGuiCol_TitleBg] = mainColor;
        style.Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(1.00f, 0.98f, 0.95f, 0.75f);
        style.Colors[ImGuiCol_TitleBgActive] = mainColor;
        style.Colors[ImGuiCol_MenuBarBg] = menubarColor;
        style.Colors[ImGuiCol_ScrollbarBg] = ImVec4(frameBgColor.x + .05f, frameBgColor.y + .05f, frameBgColor.z + .05f, frameBgColor.w);
        style.Colors[ImGuiCol_ScrollbarGrab] = accentColor;
        style.Colors[ImGuiCol_ScrollbarGrabHovered] = accentColorHovered;
        style.Colors[ImGuiCol_ScrollbarGrabActive] = accentColorActive;
        style.Colors[ImGuiCol_ComboBg] = frameBgColor;
        style.Colors[ImGuiCol_CheckMark]  = accentColor;
        style.Colors[ImGuiCol_SliderGrab] = accentColorHovered;
        style.Colors[ImGuiCol_SliderGrabActive] = accentColorActive;
        style.Colors[ImGuiCol_Button] = accentColor;
        style.Colors[ImGuiCol_ButtonHovered] = accentColorHovered;
        style.Colors[ImGuiCol_ButtonActive] = accentColorActive;
        style.Colors[ImGuiCol_Header] = accentColor;
        style.Colors[ImGuiCol_HeaderHovered] = accentColorHovered;
        style.Colors[ImGuiCol_HeaderActive] = accentColorActive;
        style.Colors[ImGuiCol_Column] = mainColor;
        style.Colors[ImGuiCol_ColumnHovered] = mainColorHovered;
        style.Colors[ImGuiCol_ColumnActive] = mainColorActive;
        style.Colors[ImGuiCol_ResizeGrip] = accentColor;
        style.Colors[ImGuiCol_ResizeGripHovered] = accentColorHovered;
        style.Colors[ImGuiCol_ResizeGripActive] = accentColorActive;
        style.Colors[ImGuiCol_CloseButton] = mainColor;
        style.Colors[ImGuiCol_CloseButtonHovered] = mainColorHovered;
        style.Colors[ImGuiCol_CloseButtonActive] = mainColorActive;
        style.Colors[ImGuiCol_PlotLines] = mainColor;
        style.Colors[ImGuiCol_PlotLinesHovered] = mainColorHovered;
        style.Colors[ImGuiCol_PlotHistogram] = mainColor;
        style.Colors[ImGuiCol_PlotHistogramHovered] =  mainColorHovered;
        style.Colors[ImGuiCol_TextSelectedBg] = mainColorHovered;
        style.Colors[ImGuiCol_ModalWindowDarkening] = ImVec4(0.0f, 0.0f, 0.0f, 0.75f);
}