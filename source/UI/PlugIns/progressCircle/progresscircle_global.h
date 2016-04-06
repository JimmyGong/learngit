#ifndef PROGRESSCIRCLE_GLOBAL_H
#define PROGRESSCIRCLE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PROGRESSCIRCLE_LIBRARY)
#  define PROGRESSCIRCLESHARED_EXPORT Q_DECL_EXPORT
#else
#  define PROGRESSCIRCLESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PROGRESSCIRCLE_GLOBAL_H