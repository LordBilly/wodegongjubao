#pragma once
#include "DlgBaseEditor.h"
#include "UIComboVec3D.h"
#include "UIComboObjListSceneObject.h"

class CDlgToolObject : public CDlgBaseEditor
{
public:
	CDlgToolObject();
	~CDlgToolObject();
public:
	virtual void OnControlRegister();
	void initObject();
	void OnFocusObjectValueChanged();
	void OnFocusObjectChanged();
	void OnAddObject();
	void OnObjectPosChanged();
	void OnObjectListReload();
private:
	CUIComboObjListSceneObject m_ObjListSceneObject;

	CUICheckBox m_CheckBoxCatchAtFloor;
	CUICheckBox m_CheckBoxCatchAtGrid;
	CUIComboNumber	m_NumGridSize;
	CUIComboVec3D	m_Vec3DPos;
	CUIComboVec3D	m_Vec3Rotate;
	CUIComboNumber	m_NumScale;
};