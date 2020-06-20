/**
 * PANDA 3D SOFTWARE
 * Copyright (c) Carnegie Mellon University.  All rights reserved.
 *
 * All use of this software is subject to the terms of the revised BSD
 * license.  You should have received a copy of this license along
 * with this source code in a file named "LICENSE."
 *
 * @file pandasymbols.h
 * @author drose
 * @date 2000-02-18
 */

#ifndef PANDASYMBOLS_H
#define PANDASYMBOLS_H

/* See dtoolsymbols.h for a rant on the purpose of this file.  */

/* Note that the symbols declared in this file appear in alphabetical
   order.  Also note that we must use C-style comments only here, not
   C++-style comments, since this file is occasionally included by a C
   file. */

#ifdef BUILDING_COLLADA
  #define EXPCL_COLLADA EXPORT_CLASS
  #define EXPTP_COLLADA EXPORT_TEMPL
#else
  #define EXPCL_COLLADA IMPORT_CLASS
  #define EXPTP_COLLADA IMPORT_TEMPL
#endif

#ifdef BUILDING_FFMPEG
  #define EXPCL_FFMPEG EXPORT_CLASS
  #define EXPTP_FFMPEG EXPORT_TEMPL
#else
  #define EXPCL_FFMPEG IMPORT_CLASS
  #define EXPTP_FFMPEG IMPORT_TEMPL
#endif

#ifdef BUILDING_FMOD_AUDIO
  #define EXPCL_FMOD_AUDIO EXPORT_CLASS
  #define EXPTP_FMOD_AUDIO EXPORT_TEMPL
#else
  #define EXPCL_FMOD_AUDIO IMPORT_CLASS
  #define EXPTP_FMOD_AUDIO IMPORT_TEMPL
#endif

#ifdef BUILDING_FRAMEWORK
  #define EXPCL_FRAMEWORK EXPORT_CLASS
  #define EXPTP_FRAMEWORK EXPORT_TEMPL
#else
  #define EXPCL_FRAMEWORK IMPORT_CLASS
  #define EXPTP_FRAMEWORK IMPORT_TEMPL
#endif

#ifdef BUILDING_OPENAL_AUDIO
  #define EXPCL_OPENAL_AUDIO EXPORT_CLASS
  #define EXPTP_OPENAL_AUDIO EXPORT_TEMPL
#else
  #define EXPCL_OPENAL_AUDIO IMPORT_CLASS
  #define EXPTP_OPENAL_AUDIO IMPORT_TEMPL
#endif

/* BUILDING_PANDA is just a buildsystem shortcut for all of these: */
#ifdef BUILDING_PANDA
  #define BUILDING_LIBPANDA
  #define BUILDING_PANDA_AUDIO
  #define BUILDING_PANDA_CHAN
  #define BUILDING_PANDA_CHAR
  #define BUILDING_PANDA_COLLIDE
  #define BUILDING_PANDA_CULL
  #define BUILDING_PANDA_DEVICE
  #define BUILDING_PANDA_DGRAPH
  #define BUILDING_PANDA_DISPLAY
  #define BUILDING_PANDA_DXML
  #define BUILDING_PANDA_EVENT
  #define BUILDING_PANDA_GOBJ
  #define BUILDING_PANDA_GRUTIL
  #define BUILDING_PANDA_GSGBASE
  #define BUILDING_PANDA_LINMATH
  #define BUILDING_PANDA_MATHUTIL
  #define BUILDING_PANDA_MOVIES
  #define BUILDING_PANDA_NATIVENET
  #define BUILDING_PANDA_NET
  #define BUILDING_PANDA_PARAMETRICS
  #define BUILDING_PANDA_PGRAPH
  #define BUILDING_PANDA_PGRAPHNODES
  #define BUILDING_PANDA_PGUI
  #define BUILDING_PANDA_PIPELINE
  #define BUILDING_PANDA_PNMIMAGE
  #define BUILDING_PANDA_PNMIMAGETYPES
  #define BUILDING_PANDA_PNMTEXT
  #define BUILDING_PANDA_PSTATCLIENT
  #define BUILDING_PANDA_PUTIL
  #define BUILDING_PANDA_RECORDER
  #define BUILDING_PANDA_TEXT
  #define BUILDING_PANDA_TFORM
#endif

/* BUILDING_PANDAEGG for these: */
#ifdef BUILDING_PANDAEGG
  #define BUILDING_PANDA_EGG
  #define BUILDING_PANDA_EGG2PG
#endif

/* BUILDING_PANDAEXPRESS for these: */
#ifdef BUILDING_PANDAEXPRESS
  #define BUILDING_PANDA_DOWNLOADER
  #define BUILDING_PANDA_EXPRESS
#endif

/* BUILDING_PANDAGL for these: */
#ifdef BUILDING_PANDAGL
  #define BUILDING_PANDA_COCOADISPLAY
  #define BUILDING_PANDA_GLGSG
  #define BUILDING_PANDA_GLXDISPLAY
  #define BUILDING_PANDA_WGLDISPLAY
#endif

/* BUILDING_PANDAPHYSICS for these: */
#ifdef BUILDING_PANDAPHYSICS
  #define BUILDING_PANDA_PARTICLESYSTEM
  #define BUILDING_PANDA_PHYSICS
#endif

#ifdef BUILDING_LIBPANDA
  #define EXPCL_LIBPANDA EXPORT_CLASS
  #define EXPTP_LIBPANDA EXPORT_TEMPL
#else
  #define EXPCL_LIBPANDA IMPORT_CLASS
  #define EXPTP_LIBPANDA IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_AUDIO
  #define EXPCL_PANDA_AUDIO EXPORT_CLASS
  #define EXPTP_PANDA_AUDIO EXPORT_TEMPL
#else
  #define EXPCL_PANDA_AUDIO IMPORT_CLASS
  #define EXPTP_PANDA_AUDIO IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_CHAN
  #define EXPCL_PANDA_CHAN EXPORT_CLASS
  #define EXPTP_PANDA_CHAN EXPORT_TEMPL
#else
  #define EXPCL_PANDA_CHAN IMPORT_CLASS
  #define EXPTP_PANDA_CHAN IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_CHAR
  #define EXPCL_PANDA_CHAR EXPORT_CLASS
  #define EXPTP_PANDA_CHAR EXPORT_TEMPL
#else
  #define EXPCL_PANDA_CHAR IMPORT_CLASS
  #define EXPTP_PANDA_CHAR IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_COCOADISPLAY
  #define EXPCL_PANDA_COCOADISPLAY EXPORT_CLASS
  #define EXPTP_PANDA_COCOADISPLAY EXPORT_TEMPL
#else
  #define EXPCL_PANDA_COCOADISPLAY IMPORT_CLASS
  #define EXPTP_PANDA_COCOADISPLAY IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_COLLIDE
  #define EXPCL_PANDA_COLLIDE EXPORT_CLASS
  #define EXPTP_PANDA_COLLIDE EXPORT_TEMPL
#else
  #define EXPCL_PANDA_COLLIDE IMPORT_CLASS
  #define EXPTP_PANDA_COLLIDE IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_CULL
  #define EXPCL_PANDA_CULL EXPORT_CLASS
  #define EXPTP_PANDA_CULL EXPORT_TEMPL
#else
  #define EXPCL_PANDA_CULL IMPORT_CLASS
  #define EXPTP_PANDA_CULL IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_DEVICE
  #define EXPCL_PANDA_DEVICE EXPORT_CLASS
  #define EXPTP_PANDA_DEVICE EXPORT_TEMPL
#else
  #define EXPCL_PANDA_DEVICE IMPORT_CLASS
  #define EXPTP_PANDA_DEVICE IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_DGRAPH
  #define EXPCL_PANDA_DGRAPH EXPORT_CLASS
  #define EXPTP_PANDA_DGRAPH EXPORT_TEMPL
#else
  #define EXPCL_PANDA_DGRAPH IMPORT_CLASS
  #define EXPTP_PANDA_DGRAPH IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_DISPLAY
  #define EXPCL_PANDA_DISPLAY EXPORT_CLASS
  #define EXPTP_PANDA_DISPLAY EXPORT_TEMPL
#else
  #define EXPCL_PANDA_DISPLAY IMPORT_CLASS
  #define EXPTP_PANDA_DISPLAY IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_DOWNLOADER
  #define EXPCL_PANDA_DOWNLOADER EXPORT_CLASS
  #define EXPTP_PANDA_DOWNLOADER EXPORT_TEMPL
#else
  #define EXPCL_PANDA_DOWNLOADER IMPORT_CLASS
  #define EXPTP_PANDA_DOWNLOADER IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_DXML
  #define EXPCL_PANDA_DXML EXPORT_CLASS
  #define EXPTP_PANDA_DXML EXPORT_TEMPL
#else
  #define EXPCL_PANDA_DXML IMPORT_CLASS
  #define EXPTP_PANDA_DXML IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_EGG
  #define EXPCL_PANDA_EGG EXPORT_CLASS
  #define EXPTP_PANDA_EGG EXPORT_TEMPL
#else
  #define EXPCL_PANDA_EGG IMPORT_CLASS
  #define EXPTP_PANDA_EGG IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_EGG2PG
  #define EXPCL_PANDA_EGG2PG EXPORT_CLASS
  #define EXPTP_PANDA_EGG2PG EXPORT_TEMPL
#else
  #define EXPCL_PANDA_EGG2PG IMPORT_CLASS
  #define EXPTP_PANDA_EGG2PG IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_EVENT
  #define EXPCL_PANDA_EVENT EXPORT_CLASS
  #define EXPTP_PANDA_EVENT EXPORT_TEMPL
#else
  #define EXPCL_PANDA_EVENT IMPORT_CLASS
  #define EXPTP_PANDA_EVENT IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_EXPRESS
  #define EXPCL_PANDA_EXPRESS EXPORT_CLASS
  #define EXPTP_PANDA_EXPRESS EXPORT_TEMPL
#else
  #define EXPCL_PANDA_EXPRESS IMPORT_CLASS
  #define EXPTP_PANDA_EXPRESS IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_GLGSG
  #define EXPCL_PANDA_GLGSG EXPORT_CLASS
  #define EXPTP_PANDA_GLGSG EXPORT_TEMPL
#else
  #define EXPCL_PANDA_GLGSG IMPORT_CLASS
  #define EXPTP_PANDA_GLGSG IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_GLXDISPLAY
  #define EXPCL_PANDA_GLXDISPLAY EXPORT_CLASS
  #define EXPTP_PANDA_GLXDISPLAY EXPORT_TEMPL
#else
  #define EXPCL_PANDA_GLXDISPLAY IMPORT_CLASS
  #define EXPTP_PANDA_GLXDISPLAY IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_GOBJ
  #define EXPCL_PANDA_GOBJ EXPORT_CLASS
  #define EXPTP_PANDA_GOBJ EXPORT_TEMPL
#else
  #define EXPCL_PANDA_GOBJ IMPORT_CLASS
  #define EXPTP_PANDA_GOBJ IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_GRUTIL
  #define EXPCL_PANDA_GRUTIL EXPORT_CLASS
  #define EXPTP_PANDA_GRUTIL EXPORT_TEMPL
#else
  #define EXPCL_PANDA_GRUTIL IMPORT_CLASS
  #define EXPTP_PANDA_GRUTIL IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_GSGBASE
  #define EXPCL_PANDA_GSGBASE EXPORT_CLASS
  #define EXPTP_PANDA_GSGBASE EXPORT_TEMPL
#else
  #define EXPCL_PANDA_GSGBASE IMPORT_CLASS
  #define EXPTP_PANDA_GSGBASE IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_LINMATH
  #define EXPCL_PANDA_LINMATH EXPORT_CLASS
  #define EXPTP_PANDA_LINMATH EXPORT_TEMPL
#else
  #define EXPCL_PANDA_LINMATH IMPORT_CLASS
  #define EXPTP_PANDA_LINMATH IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_MATHUTIL
  #define EXPCL_PANDA_MATHUTIL EXPORT_CLASS
  #define EXPTP_PANDA_MATHUTIL EXPORT_TEMPL
#else
  #define EXPCL_PANDA_MATHUTIL IMPORT_CLASS
  #define EXPTP_PANDA_MATHUTIL IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_MOVIES
  #define EXPCL_PANDA_MOVIES EXPORT_CLASS
  #define EXPTP_PANDA_MOVIES EXPORT_TEMPL
#else
  #define EXPCL_PANDA_MOVIES IMPORT_CLASS
  #define EXPTP_PANDA_MOVIES IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_NATIVENET
  #define EXPCL_PANDA_NATIVENET EXPORT_CLASS
  #define EXPTP_PANDA_NATIVENET EXPORT_TEMPL
#else
  #define EXPCL_PANDA_NATIVENET IMPORT_CLASS
  #define EXPTP_PANDA_NATIVENET IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_NET
  #define EXPCL_PANDA_NET EXPORT_CLASS
  #define EXPTP_PANDA_NET EXPORT_TEMPL
#else
  #define EXPCL_PANDA_NET IMPORT_CLASS
  #define EXPTP_PANDA_NET IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_PARAMETRICS
  #define EXPCL_PANDA_PARAMETRICS EXPORT_CLASS
  #define EXPTP_PANDA_PARAMETRICS EXPORT_TEMPL
#else
  #define EXPCL_PANDA_PARAMETRICS IMPORT_CLASS
  #define EXPTP_PANDA_PARAMETRICS IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_PARTICLESYSTEM
  #define EXPCL_PANDA_PARTICLESYSTEM EXPORT_CLASS
  #define EXPTP_PANDA_PARTICLESYSTEM EXPORT_TEMPL
#else
  #define EXPCL_PANDA_PARTICLESYSTEM IMPORT_CLASS
  #define EXPTP_PANDA_PARTICLESYSTEM IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_PGRAPH
  #define EXPCL_PANDA_PGRAPH EXPORT_CLASS
  #define EXPTP_PANDA_PGRAPH EXPORT_TEMPL
#else
  #define EXPCL_PANDA_PGRAPH IMPORT_CLASS
  #define EXPTP_PANDA_PGRAPH IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_PGRAPHNODES
  #define EXPCL_PANDA_PGRAPHNODES EXPORT_CLASS
  #define EXPTP_PANDA_PGRAPHNODES EXPORT_TEMPL
#else
  #define EXPCL_PANDA_PGRAPHNODES IMPORT_CLASS
  #define EXPTP_PANDA_PGRAPHNODES IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_PGUI
  #define EXPCL_PANDA_PGUI EXPORT_CLASS
  #define EXPTP_PANDA_PGUI EXPORT_TEMPL
#else
  #define EXPCL_PANDA_PGUI IMPORT_CLASS
  #define EXPTP_PANDA_PGUI IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_PHYSICS
  #define EXPCL_PANDA_PHYSICS EXPORT_CLASS
  #define EXPTP_PANDA_PHYSICS EXPORT_TEMPL
#else
  #define EXPCL_PANDA_PHYSICS IMPORT_CLASS
  #define EXPTP_PANDA_PHYSICS IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_PIPELINE
  #define EXPCL_PANDA_PIPELINE EXPORT_CLASS
  #define EXPTP_PANDA_PIPELINE EXPORT_TEMPL
#else
  #define EXPCL_PANDA_PIPELINE IMPORT_CLASS
  #define EXPTP_PANDA_PIPELINE IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_PNMIMAGE
  #define EXPCL_PANDA_PNMIMAGE EXPORT_CLASS
  #define EXPTP_PANDA_PNMIMAGE EXPORT_TEMPL
#else
  #define EXPCL_PANDA_PNMIMAGE IMPORT_CLASS
  #define EXPTP_PANDA_PNMIMAGE IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_PNMIMAGETYPES
  #define EXPCL_PANDA_PNMIMAGETYPES EXPORT_CLASS
  #define EXPTP_PANDA_PNMIMAGETYPES EXPORT_TEMPL
#else
  #define EXPCL_PANDA_PNMIMAGETYPES IMPORT_CLASS
  #define EXPTP_PANDA_PNMIMAGETYPES IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_PNMTEXT
  #define EXPCL_PANDA_PNMTEXT EXPORT_CLASS
  #define EXPTP_PANDA_PNMTEXT EXPORT_TEMPL
#else
  #define EXPCL_PANDA_PNMTEXT IMPORT_CLASS
  #define EXPTP_PANDA_PNMTEXT IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_PSTATCLIENT
  #define EXPCL_PANDA_PSTATCLIENT EXPORT_CLASS
  #define EXPTP_PANDA_PSTATCLIENT EXPORT_TEMPL
#else
  #define EXPCL_PANDA_PSTATCLIENT IMPORT_CLASS
  #define EXPTP_PANDA_PSTATCLIENT IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_PUTIL
  #define EXPCL_PANDA_PUTIL EXPORT_CLASS
  #define EXPTP_PANDA_PUTIL EXPORT_TEMPL
#else
  #define EXPCL_PANDA_PUTIL IMPORT_CLASS
  #define EXPTP_PANDA_PUTIL IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_RECORDER
  #define EXPCL_PANDA_RECORDER EXPORT_CLASS
  #define EXPTP_PANDA_RECORDER EXPORT_TEMPL
#else
  #define EXPCL_PANDA_RECORDER IMPORT_CLASS
  #define EXPTP_PANDA_RECORDER IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_TEXT
  #define EXPCL_PANDA_TEXT EXPORT_CLASS
  #define EXPTP_PANDA_TEXT EXPORT_TEMPL
#else
  #define EXPCL_PANDA_TEXT IMPORT_CLASS
  #define EXPTP_PANDA_TEXT IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_TFORM
  #define EXPCL_PANDA_TFORM EXPORT_CLASS
  #define EXPTP_PANDA_TFORM EXPORT_TEMPL
#else
  #define EXPCL_PANDA_TFORM IMPORT_CLASS
  #define EXPTP_PANDA_TFORM IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDA_WGLDISPLAY
  #define EXPCL_PANDA_WGLDISPLAY EXPORT_CLASS
  #define EXPTP_PANDA_WGLDISPLAY EXPORT_TEMPL
#else
  #define EXPCL_PANDA_WGLDISPLAY IMPORT_CLASS
  #define EXPTP_PANDA_WGLDISPLAY IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDAGL
  #define EXPCL_PANDAGL EXPORT_CLASS
  #define EXPTP_PANDAGL EXPORT_TEMPL
#else
  #define EXPCL_PANDAGL IMPORT_CLASS
  #define EXPTP_PANDAGL IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDABULLET
  #define EXPCL_PANDABULLET EXPORT_CLASS
  #define EXPTP_PANDABULLET EXPORT_TEMPL
#else
  #define EXPCL_PANDABULLET IMPORT_CLASS
  #define EXPTP_PANDABULLET IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDADX
  #define EXPCL_PANDADX EXPORT_CLASS
  #define EXPTP_PANDADX EXPORT_TEMPL
#else
  #define EXPCL_PANDADX IMPORT_CLASS
  #define EXPTP_PANDADX IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDAEGG
  #define EXPCL_PANDAEGG EXPORT_CLASS
  #define EXPTP_PANDAEGG EXPORT_TEMPL
#else
  #define EXPCL_PANDAEGG IMPORT_CLASS
  #define EXPTP_PANDAEGG IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDAFX
  #define EXPCL_PANDAFX EXPORT_CLASS
  #define EXPTP_PANDAFX EXPORT_TEMPL
#else
  #define EXPCL_PANDAFX IMPORT_CLASS
  #define EXPTP_PANDAFX IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDAGLES
  #define EXPCL_PANDAGLES EXPORT_CLASS
  #define EXPTP_PANDAGLES EXPORT_TEMPL
#else
  #define EXPCL_PANDAGLES IMPORT_CLASS
  #define EXPTP_PANDAGLES IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDAGLES2
  #define EXPCL_PANDAGLES2 EXPORT_CLASS
  #define EXPTP_PANDAGLES2 EXPORT_TEMPL
#else
  #define EXPCL_PANDAGLES2 IMPORT_CLASS
  #define EXPTP_PANDAGLES2 IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDAODE
  #define EXPCL_PANDAODE EXPORT_CLASS
  #define EXPTP_PANDAODE EXPORT_TEMPL
#else
  #define EXPCL_PANDAODE IMPORT_CLASS
  #define EXPTP_PANDAODE IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDAPHYSICS
  #define EXPCL_PANDAPHYSICS EXPORT_CLASS
  #define EXPTP_PANDAPHYSICS EXPORT_TEMPL
#else
  #define EXPCL_PANDAPHYSICS IMPORT_CLASS
  #define EXPTP_PANDAPHYSICS IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDASKEL
  #define EXPCL_PANDASKEL EXPORT_CLASS
  #define EXPTP_PANDASKEL EXPORT_TEMPL
#else
  #define EXPCL_PANDASKEL IMPORT_CLASS
  #define EXPTP_PANDASKEL IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDASPEEDTREE
  #define EXPCL_PANDASPEEDTREE EXPORT_CLASS
  #define EXPTP_PANDASPEEDTREE EXPORT_TEMPL
#else
  #define EXPCL_PANDASPEEDTREE IMPORT_CLASS
  #define EXPTP_PANDASPEEDTREE IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDAWIN
  #define EXPCL_PANDAWIN EXPORT_CLASS
  #define EXPTP_PANDAWIN EXPORT_TEMPL
#else
  #define EXPCL_PANDAWIN IMPORT_CLASS
  #define EXPTP_PANDAWIN IMPORT_TEMPL
#endif

#ifdef BUILDING_PANDAX11
  #define EXPCL_PANDAX11 EXPORT_CLASS
  #define EXPTP_PANDAX11 EXPORT_TEMPL
#else
  #define EXPCL_PANDAX11 IMPORT_CLASS
  #define EXPTP_PANDAX11 IMPORT_TEMPL
#endif

#ifdef BUILDING_TINYDISPLAY
  #define EXPCL_TINYDISPLAY EXPORT_CLASS
  #define EXPTP_TINYDISPLAY EXPORT_TEMPL
#else
  #define EXPCL_TINYDISPLAY IMPORT_CLASS
  #define EXPTP_TINYDISPLAY IMPORT_TEMPL
#endif

#ifdef BUILDING_VISION
  #define EXPCL_VISION EXPORT_CLASS
  #define EXPTP_VISION EXPORT_TEMPL
#else
  #define EXPCL_VISION IMPORT_CLASS
  #define EXPTP_VISION IMPORT_TEMPL
#endif

#ifdef BUILDING_NAVIGATION
  #define EXPCL_NAVIGATION EXPORT_CLASS
  #define EXPTP_NAVIGATION EXPORT_TEMPL
#else
  #define EXPCL_NAVIGATION IMPORT_CLASS
  #define EXPTP_NAVIGATION IMPORT_TEMPL
#endif

#ifdef BUILDING_VRPN
  #define EXPCL_VRPN EXPORT_CLASS
  #define EXPTP_VRPN EXPORT_TEMPL
#else
  #define EXPCL_VRPN IMPORT_CLASS
  #define EXPTP_VRPN IMPORT_TEMPL
#endif

#if defined(_MSC_VER) && !defined(CPPPARSER)
#define INLINE_LINMATH __forceinline
#define INLINE_MATHUTIL __forceinline

#else
#define INLINE_LINMATH INLINE
#define INLINE_MATHUTIL INLINE
#endif

#endif
