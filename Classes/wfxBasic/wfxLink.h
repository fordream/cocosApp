#ifndef __WFX_LINK_H__
#define __WFX_LINK_H__


class wfxLink {

	wfxLink*	mpPrevLink;		///<
	wfxLink*	mpNextLink;		///<

public:
	wfxLink( void ) {
	}
	virtual ~wfxLink( void ) {
	}
};

#endif // __WFX_LINK_H__
