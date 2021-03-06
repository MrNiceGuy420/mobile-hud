#pragma once
#include "CVector2D.h"
#include "CRGBA.h"
#include <string>

void RotateVertices(CVector2D *rect, unsigned int numVerts, float x, float y, float angle);
float BilinearOffset(float coord);
void DrawProgressBar_BilinearOffset_RightAlign(float x, float y, float width, float height, float progress, float borderSize,
    CRGBA const &color, CRGBA const &borderColor);
void DrawProgressBarWithProgressDelta_BilinearOffset(float x, float y, float width, float height, float progress,
    CRGBA const &color, float deltaProgress, CRGBA const &deltaColor);
void StringReplace(std::string &str, std::string substring, std::string replacement);
bool IsEscJustPressed();
char *GetForMap(float a1, float a2);
