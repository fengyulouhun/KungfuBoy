﻿/*!
 * \file PauseLayer.h
 *
 * \author SuooL
 * \date 六月 2015
 *
 * 暂停界面
 */

#ifndef __PauseLayer__H__
#define __PauseLayer__H__
#include "cocos2d.h"
#include "extensions/cocos-ext.h"

USING_NS_CC;
using namespace cocos2d::extension;

class PauseLayer : public Layer {
public:
	static Scene* createScene(RenderTexture* rt);
	virtual bool init();
	CREATE_FUNC(PauseLayer);

	Sprite* spriteOn;
	Sprite* spriteDown;

	void musicSet(Ref* pSender);

private:

};

#endif
 