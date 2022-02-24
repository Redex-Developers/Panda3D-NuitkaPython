/**
 * All use of this software is subject to the terms of the revised BSD
 * license.  You should have received a copy of this license along
 * with this source code in a file named "LICENSE."
 *
 * @file graphicsEngine_ext.cxx
 * @author Maxwell175
 * @date 2021-12-04
 */

#include "graphicsEngine_ext.h"

#ifdef LINK_ALL_STATIC
#ifdef HAVE_EGG
#include "pandaegg.h"
#endif

extern "C" extern void init_libOpenALAudio();
#endif

#ifdef HAVE_PYTHON

GraphicsEngine *Extension<GraphicsEngine>::
get_global_ptr() {
#ifdef LINK_ALL_STATIC
  // If we're statically linking, we need to explicitly link with at least one
  // of the available renderers.
  #if defined(HAVE_TINYDISPLAY)
  extern EXPCL_TINYDISPLAY void init_libtinydisplay();
  init_libtinydisplay();
  #endif
  #if defined(HAVE_DX9)
  extern EXPCL_PANDADX void init_libpandadx9();
  init_libpandadx9();
  #endif
  #if defined(HAVE_GL)
  extern void init_libpandagl();
  init_libpandagl();
  #endif


  init_libOpenALAudio();


  // Ensure the animation subsystem is available.
  extern EXPCL_PANDA_CHAR void init_libchar();
  init_libchar();

  // Ensure we can load audio files.
  extern EXPCL_PANDA_MOVIES void init_libmovies();
  init_libmovies();

  // We also want the egg loader.
  #ifdef HAVE_EGG
  init_libpandaegg();
  #endif

  // Let's explicitly make a call to the image type library to ensure it gets
  // pulled in by the dynamic linker.
  extern EXPCL_PANDA_PNMIMAGETYPES void init_libpnmimagetypes();
  init_libpnmimagetypes();
#endif

  return GraphicsEngine::get_global_ptr();
}

#endif
