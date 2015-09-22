#ifndef __WFX_ARRAY_H__
#define __WFX_ARRAY_H__


template <class Type>
class wfxArray {

	Type*		mpData;			///< 配列
	int			mCount;			///< データ数

public:

	wfxArray( void ) {
	}
	~wfxArray( void ) {
	}
	
};


#endif // __WFX_ARRAY_H__
