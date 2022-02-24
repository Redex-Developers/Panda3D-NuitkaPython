/**
 * All use of this software is subject to the terms of the revised BSD
 * license.  You should have received a copy of this license along
 * with this source code in a file named "LICENSE."
 *
 * @file graphicsEngine_ext.h
 * @author Maxwell175
 * @date 2021-12-04
 */

#ifndef GRAPHICSENGINE_EXT_H
#define GRAPHICSENGINE_EXT_H

#include "dtoolbase.h"

#ifdef HAVE_PYTHON

#include "extension.h"
#include "graphicsEngine.h"
#include "py_panda.h"

/**
 * This class defines the extension methods for Ramfile, which are called
 * instead of any C++ methods with the same prototype.
 */
template<>
class Extension<GraphicsEngine> : public ExtensionBase<GraphicsEngine> {
public:
  static GraphicsEngine *get_global_ptr();
};

#endif  // HAVE_PYTHON

#endif  // GRAPHICSENGINE_EXT_H
