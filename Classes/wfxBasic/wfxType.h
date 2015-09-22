#ifndef __WFX_TYPE_H__
#define __WFX_TYPE_H__


typedef uint8_t     wfxUint8;
typedef int8_t      wfxSint8;
typedef uint16_t    wfxUint16;
typedef int16_t     wfxSint16;
typedef uint32_t    wfxUint32;
typedef int32_t     wfxSint32;
typedef uint64_t    wfxUint64;
typedef int64_t     wfxSint64;
typedef size_t		wfxSize_t;
typedef float       wfxFloat;

#define WFX_ABORT( _msg )

#define WFX_ASSERT( _ptr )

#define WFX_SAFE_DELETE( _ptr )			if( _ptr ) { delete (_ptr); (_ptr) = NULL; }
#define WFX_SAFE_DELETE_ARRAY( _ptr )	if( _ptr ) { delete [] (_ptr); (_ptr) = NULL; }


#endif // __WFX_TYPE_H__
