/** File: FlourRegistry.cpp
    Created on: 06-Sept-09
    Author: Robin Southern "betajaen"

    Copyright (c) 2009 Robin Southern

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
    THE SOFTWARE.
*/

#include "Flour.h"

// Tools of Flour
#include "FlourToolVersion.h"
#include "FlourToolConvert.h"
#include "FlourToolFiles.h"
#include "FlourToolViewer.h"
#include "FlourToolCupcake.h"
#include "FlourToolTransform.h"

// Files of Flour
#include "FlourFlowerFile.h"
#include "FlourNxsFile.h"

void Flour::registerTools()
{
 registerTool("version", new FlourVersion());
 registerTool("files", new FlourFiles());
 registerTool("viewer", new FlourViewer());
 registerTool("cupcake", new FlourCupcake());
 registerTool("convex", new FlourConvert(FlourConvert::ConversionType_Convex));
 registerTool("triangle", new FlourConvert(FlourConvert::ConversionType_Triangle));
 registerTool("cloth", new FlourConvert(FlourConvert::ConversionType_Cloth));
 registerTool("scale", new FlourTransform(FlourTransform::TransformType_Scale));
 registerTool("rotate", new FlourTransform(FlourTransform::TransformType_Rotate));
 registerTool("move", new FlourTransform(FlourTransform::TransformType_Move));
}

void Flour::registerFiles()
{
 registerFile(new FlourFlowerFile());
 registerFile(new FlourNxsFile());
}
