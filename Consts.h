/* 
* Protein Visualizer
* Copyright (C) 2011-2012 Cyrille Favreau <cyrille_favreau@hotmail.com>
*
* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Library General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or (at your option) any later version.
*
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* Library General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>. 
*/

/*
* Author: Cyrille Favreau <cyrille_favreau@hotmail.com>
*
*/

#pragma once

const int NB_MAX_BOXES      = 18*18*18;
const int NB_MAX_PRIMITIVES = 100000;
const int NB_MAX_LAMPS      = 100;
const int NB_MAX_MATERIALS  = 100;
const int NB_MAX_TEXTURES   = 10;


// Constants
#define NO_MATERIAL -1
#define NO_TEXTURE  -1
#define gColorDepth  3

// Textures
const int gTextureWidth  = 1024;
const int gTextureHeight = 1024;
const int gTextureDepth  = 3;
const int gTextureSize   = gTextureWidth*gTextureHeight*gTextureDepth;

// Kinect
const int gKinectVideoWidth  = 640;
const int gKinectVideoHeight = 480;
const int gKinectVideo       = 4;
const int gKinectVideoSize   = gKinectVideoWidth*gKinectVideoHeight*gKinectVideo;

const int gKinectDepthWidth  = 320;
const int gKinectDepthHeight = 240;
const int gKinectDepth       = 2;
const int gKinectDepthSize   = gKinectDepthWidth*gKinectDepthHeight*gKinectDepth;

const int gTextureOffset = gKinectVideoSize+gKinectDepthSize;
