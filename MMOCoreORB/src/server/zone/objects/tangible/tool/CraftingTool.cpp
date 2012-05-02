/*
 *	server/zone/objects/tangible/tool/CraftingTool.cpp generated by engine3 IDL compiler 0.60
 */

#include "CraftingTool.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/draftschematic/DraftSchematic.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/area/ActiveArea.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/scene/variables/ContainerPermissions.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

/*
 *	CraftingToolStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_ISCRAFTINGTOOL__,RPC_ISREADY__,RPC_SETREADY__,RPC_ISBUSY__,RPC_SETBUSY__,RPC_ISFINISHED__,RPC_SETFINISHED__,RPC_SENDTOOLSTARTFAILURE__CREATUREOBJECT_STRING_,RPC_GETTOOLTYPE__,RPC_GETEFFECTIVENESS__,RPC_GETCOMPLEXITYLEVEL__,RPC_GETPROTOTYPE__,RPC_GETMANUFACTURESCHEMATIC__,RPC_DISPERSEITEMS__};

CraftingTool::CraftingTool() : ToolTangibleObject(DummyConstructorParameter::instance()) {
	CraftingToolImplementation* _implementation = new CraftingToolImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("CraftingTool");
}

CraftingTool::CraftingTool(DummyConstructorParameter* param) : ToolTangibleObject(param) {
	_setClassName("CraftingTool");
}

CraftingTool::~CraftingTool() {
}



void CraftingTool::initializeTransientMembers() {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void CraftingTool::loadTemplateData(SharedObjectTemplate* templateData) {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void CraftingTool::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillObjectMenuResponse(menuResponse, player);
}

int CraftingTool::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

void CraftingTool::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

void CraftingTool::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->updateCraftingValues(values, firstUpdate);
}

bool CraftingTool::isCraftingTool() {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCRAFTINGTOOL__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isCraftingTool();
}

bool CraftingTool::isReady() {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISREADY__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isReady();
}

void CraftingTool::setReady() {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETREADY__);

		method.executeWithVoidReturn();
	} else
		_implementation->setReady();
}

bool CraftingTool::isBusy() {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISBUSY__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isBusy();
}

void CraftingTool::setBusy() {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETBUSY__);

		method.executeWithVoidReturn();
	} else
		_implementation->setBusy();
}

bool CraftingTool::isFinished() {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISFINISHED__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isFinished();
}

void CraftingTool::setFinished() {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETFINISHED__);

		method.executeWithVoidReturn();
	} else
		_implementation->setFinished();
}

void CraftingTool::sendToolStartFailure(CreatureObject* player, const String& message) {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDTOOLSTARTFAILURE__CREATUREOBJECT_STRING_);
		method.addObjectParameter(player);
		method.addAsciiParameter(message);

		method.executeWithVoidReturn();
	} else
		_implementation->sendToolStartFailure(player, message);
}

int CraftingTool::getToolType() {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTOOLTYPE__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getToolType();
}

float CraftingTool::getEffectiveness() {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETEFFECTIVENESS__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getEffectiveness();
}

float CraftingTool::getComplexityLevel() {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCOMPLEXITYLEVEL__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getComplexityLevel();
}

TangibleObject* CraftingTool::getPrototype() {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPROTOTYPE__);

		return static_cast<TangibleObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->getPrototype();
}

ManufactureSchematic* CraftingTool::getManufactureSchematic() {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMANUFACTURESCHEMATIC__);

		return static_cast<ManufactureSchematic*>(method.executeWithObjectReturn());
	} else
		return _implementation->getManufactureSchematic();
}

Vector<unsigned int>* CraftingTool::getToolTabs() {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getToolTabs();
}

void CraftingTool::disperseItems() {
	CraftingToolImplementation* _implementation = static_cast<CraftingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DISPERSEITEMS__);

		method.executeWithVoidReturn();
	} else
		_implementation->disperseItems();
}

DistributedObjectServant* CraftingTool::_getImplementation() {

	_updated = true;
	return _impl;
}

void CraftingTool::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CraftingToolImplementation
 */

CraftingToolImplementation::CraftingToolImplementation(DummyConstructorParameter* param) : ToolTangibleObjectImplementation(param) {
	_initializeImplementation();
}


CraftingToolImplementation::~CraftingToolImplementation() {
}


void CraftingToolImplementation::finalize() {
}

void CraftingToolImplementation::_initializeImplementation() {
	_setClassHelper(CraftingToolHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void CraftingToolImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<CraftingTool*>(stub);
	ToolTangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* CraftingToolImplementation::_getStub() {
	return _this;
}

CraftingToolImplementation::operator const CraftingTool*() {
	return _this;
}

void CraftingToolImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CraftingToolImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CraftingToolImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CraftingToolImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CraftingToolImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CraftingToolImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CraftingToolImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CraftingToolImplementation::_serializationHelperMethod() {
	ToolTangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("CraftingTool");

}

void CraftingToolImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(CraftingToolImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CraftingToolImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ToolTangibleObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "CraftingTool.status") {
		TypeInfo<String >::parseFromBinaryStream(&status, stream);
		return true;
	}

	if (_name == "CraftingTool.type") {
		TypeInfo<int >::parseFromBinaryStream(&type, stream);
		return true;
	}

	if (_name == "CraftingTool.effectiveness") {
		TypeInfo<float >::parseFromBinaryStream(&effectiveness, stream);
		return true;
	}

	if (_name == "CraftingTool.complexityLevel") {
		TypeInfo<int >::parseFromBinaryStream(&complexityLevel, stream);
		return true;
	}

	if (_name == "CraftingTool.enabledTabs") {
		TypeInfo<Vector<unsigned int> >::parseFromBinaryStream(&enabledTabs, stream);
		return true;
	}


	return false;
}

void CraftingToolImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CraftingToolImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CraftingToolImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ToolTangibleObjectImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "CraftingTool.status";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&status, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "CraftingTool.type";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&type, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "CraftingTool.effectiveness";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&effectiveness, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "CraftingTool.complexityLevel";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&complexityLevel, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "CraftingTool.enabledTabs";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Vector<unsigned int> >::toBinaryStream(&enabledTabs, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 5;
}

CraftingToolImplementation::CraftingToolImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		Logger.setLoggingName("CraftingTool");
	Logger::setLoggingName("CraftingTool");
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		status = "@crafting:tool_status_ready";
	status = "@crafting:tool_status_ready";
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		effectiveness = -15;
	effectiveness = -15;
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		super.setContainerInheritPermissionsFromParent(false);
	ToolTangibleObjectImplementation::setContainerInheritPermissionsFromParent(false);
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		super.setContainerDefaultDenyPermission(ContainerPermissions.OPEN);
	ToolTangibleObjectImplementation::setContainerDefaultDenyPermission(ContainerPermissions::OPEN);
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		super.setContainerDefaultDenyPermission(ContainerPermissions.MOVEIN);
	ToolTangibleObjectImplementation::setContainerDefaultDenyPermission(ContainerPermissions::MOVEIN);
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		super.setContainerDefaultDenyPermission(ContainerPermissions.MOVEOUT);
	ToolTangibleObjectImplementation::setContainerDefaultDenyPermission(ContainerPermissions::MOVEOUT);
}

void CraftingToolImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		super.initializeTransientMembers();
	ToolTangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		}
	if (getContainerObjectsSize() == 0){
	// server/zone/objects/tangible/tool/CraftingTool.idl():  			status = "@crafting:tool_status_ready";
	status = "@crafting:tool_status_ready";
}

	else {
	// server/zone/objects/tangible/tool/CraftingTool.idl():  			status = "@crafting:tool_status_finished";
	status = "@crafting:tool_status_finished";
}
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		setCountdownTimer(0, false);
	setCountdownTimer(0, false);
}

bool CraftingToolImplementation::isCraftingTool() {
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		return true;
	return true;
}

bool CraftingToolImplementation::isReady() {
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		return status == "@crafting:tool_status_ready";
	return status == "@crafting:tool_status_ready";
}

void CraftingToolImplementation::setReady() {
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		status = "@crafting:tool_status_ready";
	status = "@crafting:tool_status_ready";
}

bool CraftingToolImplementation::isBusy() {
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		return status == "@crafting:tool_status_working";
	return status == "@crafting:tool_status_working";
}

void CraftingToolImplementation::setBusy() {
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		status = "@crafting:tool_status_working";
	status = "@crafting:tool_status_working";
}

bool CraftingToolImplementation::isFinished() {
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		return status == "@crafting:tool_status_finished";
	return status == "@crafting:tool_status_finished";
}

void CraftingToolImplementation::setFinished() {
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		status = "@crafting:tool_status_finished";
	status = "@crafting:tool_status_finished";
}

int CraftingToolImplementation::getToolType() {
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		return type;
	return type;
}

float CraftingToolImplementation::getEffectiveness() {
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		return effectiveness;
	return effectiveness;
}

float CraftingToolImplementation::getComplexityLevel() {
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		return complexityLevel;
	return complexityLevel;
}

ManufactureSchematic* CraftingToolImplementation::getManufactureSchematic() {
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		return (ManufactureSchematic)getSlottedObject("test_manf_schematic");
	return (ManufactureSchematic*) getSlottedObject("test_manf_schematic");
}

/*
 *	CraftingToolAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


CraftingToolAdapter::CraftingToolAdapter(CraftingTool* obj) : ToolTangibleObjectAdapter(obj) {
}

void CraftingToolAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getByteParameter()));
		break;
	case RPC_ISCRAFTINGTOOL__:
		resp->insertBoolean(isCraftingTool());
		break;
	case RPC_ISREADY__:
		resp->insertBoolean(isReady());
		break;
	case RPC_SETREADY__:
		setReady();
		break;
	case RPC_ISBUSY__:
		resp->insertBoolean(isBusy());
		break;
	case RPC_SETBUSY__:
		setBusy();
		break;
	case RPC_ISFINISHED__:
		resp->insertBoolean(isFinished());
		break;
	case RPC_SETFINISHED__:
		setFinished();
		break;
	case RPC_SENDTOOLSTARTFAILURE__CREATUREOBJECT_STRING_:
		sendToolStartFailure(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getAsciiParameter(_param1_sendToolStartFailure__CreatureObject_String_));
		break;
	case RPC_GETTOOLTYPE__:
		resp->insertSignedInt(getToolType());
		break;
	case RPC_GETEFFECTIVENESS__:
		resp->insertFloat(getEffectiveness());
		break;
	case RPC_GETCOMPLEXITYLEVEL__:
		resp->insertFloat(getComplexityLevel());
		break;
	case RPC_GETPROTOTYPE__:
		resp->insertLong(getPrototype()->_getObjectID());
		break;
	case RPC_GETMANUFACTURESCHEMATIC__:
		resp->insertLong(getManufactureSchematic()->_getObjectID());
		break;
	case RPC_DISPERSEITEMS__:
		disperseItems();
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void CraftingToolAdapter::initializeTransientMembers() {
	(static_cast<CraftingTool*>(stub))->initializeTransientMembers();
}

int CraftingToolAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<CraftingTool*>(stub))->handleObjectMenuSelect(player, selectedID);
}

bool CraftingToolAdapter::isCraftingTool() {
	return (static_cast<CraftingTool*>(stub))->isCraftingTool();
}

bool CraftingToolAdapter::isReady() {
	return (static_cast<CraftingTool*>(stub))->isReady();
}

void CraftingToolAdapter::setReady() {
	(static_cast<CraftingTool*>(stub))->setReady();
}

bool CraftingToolAdapter::isBusy() {
	return (static_cast<CraftingTool*>(stub))->isBusy();
}

void CraftingToolAdapter::setBusy() {
	(static_cast<CraftingTool*>(stub))->setBusy();
}

bool CraftingToolAdapter::isFinished() {
	return (static_cast<CraftingTool*>(stub))->isFinished();
}

void CraftingToolAdapter::setFinished() {
	(static_cast<CraftingTool*>(stub))->setFinished();
}

void CraftingToolAdapter::sendToolStartFailure(CreatureObject* player, const String& message) {
	(static_cast<CraftingTool*>(stub))->sendToolStartFailure(player, message);
}

int CraftingToolAdapter::getToolType() {
	return (static_cast<CraftingTool*>(stub))->getToolType();
}

float CraftingToolAdapter::getEffectiveness() {
	return (static_cast<CraftingTool*>(stub))->getEffectiveness();
}

float CraftingToolAdapter::getComplexityLevel() {
	return (static_cast<CraftingTool*>(stub))->getComplexityLevel();
}

TangibleObject* CraftingToolAdapter::getPrototype() {
	return (static_cast<CraftingTool*>(stub))->getPrototype();
}

ManufactureSchematic* CraftingToolAdapter::getManufactureSchematic() {
	return (static_cast<CraftingTool*>(stub))->getManufactureSchematic();
}

void CraftingToolAdapter::disperseItems() {
	(static_cast<CraftingTool*>(stub))->disperseItems();
}

/*
 *	CraftingToolHelper
 */

CraftingToolHelper* CraftingToolHelper::staticInitializer = CraftingToolHelper::instance();

CraftingToolHelper::CraftingToolHelper() {
	className = "CraftingTool";

	Core::getObjectBroker()->registerClass(className, this);
}

void CraftingToolHelper::finalizeHelper() {
	CraftingToolHelper::finalize();
}

DistributedObject* CraftingToolHelper::instantiateObject() {
	return new CraftingTool(DummyConstructorParameter::instance());
}

DistributedObjectServant* CraftingToolHelper::instantiateServant() {
	return new CraftingToolImplementation();
}

DistributedObjectAdapter* CraftingToolHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CraftingToolAdapter(static_cast<CraftingTool*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

