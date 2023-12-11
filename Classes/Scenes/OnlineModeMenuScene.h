/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     OnlineModeMenuScene.h
 * File Function: OnlineModeMenuScene��Ķ���
 * Author:        �ּ���
 * Update Date:   2023/12/9
 ****************************************************************/

#pragma once
#ifndef _ONLINE_MODE_MENU_SCENE_H_
#define _ONLINE_MODE_MENU_SCENE_H_

#include "cocos2d.h"

/*
 * Class Name:     OnlineModeMenuScene
 * Class Function: ����ģʽ�˵�������
 */
class OnlineModeMenuScene : public cocos2d::Scene {
public:
    // ��������
    static cocos2d::Scene* createScene();

    // ��ʼ������
    virtual bool init();

    // ʵ�� OnlineModeMenuScene ��� create ����
    CREATE_FUNC(OnlineModeMenuScene);
};

#endif // !_ONLINE_MODE_MENU_SCENE_H_