// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Drawable>
#include <osg/Image>
#include <osg/Node>
#include <osg/Object>
#include <osg/Shader>
#include <osg/StateAttribute>
#include <osg/Uniform>
#include <osgDB/Input>
#include <osgDB/Options>
#include <osgDB/Registry>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(osg::ArgumentParser::Parameter, osgDB::Input::Parameter)

BEGIN_OBJECT_REFLECTOR(osgDB::Input)
	I_DeclaringFile("osgDB/Input");
	I_BaseType(osgDB::FieldReaderIterator);
	I_Constructor0(____Input,
	               "",
	               "");
	I_Method1(void, setOptions, IN, const osgDB::Options *, options,
	          Properties::NON_VIRTUAL,
	          __void__setOptions__C5_Options_P1,
	          "",
	          "");
	I_Method0(const osgDB::Options *, getOptions,
	          Properties::NON_VIRTUAL,
	          __C5_Options_P1__getOptions,
	          "",
	          "");
	I_Method1(osg::Object *, readObjectOfType, IN, const osg::Object &, compObj,
	          Properties::VIRTUAL,
	          __osg_Object_P1__readObjectOfType__C5_osg_Object_R1,
	          "",
	          "");
	I_Method1(osg::Object *, readObjectOfType, IN, const osgDB::basic_type_wrapper &, btw,
	          Properties::VIRTUAL,
	          __osg_Object_P1__readObjectOfType__C5_basic_type_wrapper_R1,
	          "",
	          "");
	I_Method0(osg::Object *, readObject,
	          Properties::VIRTUAL,
	          __osg_Object_P1__readObject,
	          "",
	          "");
	I_Method0(osg::Image *, readImage,
	          Properties::VIRTUAL,
	          __osg_Image_P1__readImage,
	          "",
	          "");
	I_Method0(osg::Drawable *, readDrawable,
	          Properties::VIRTUAL,
	          __osg_Drawable_P1__readDrawable,
	          "",
	          "");
	I_Method0(osg::StateAttribute *, readStateAttribute,
	          Properties::VIRTUAL,
	          __osg_StateAttribute_P1__readStateAttribute,
	          "",
	          "");
	I_Method0(osg::Uniform *, readUniform,
	          Properties::VIRTUAL,
	          __osg_Uniform_P1__readUniform,
	          "",
	          "");
	I_Method0(osg::Node *, readNode,
	          Properties::VIRTUAL,
	          __osg_Node_P1__readNode,
	          "",
	          "");
	I_Method0(osg::Shader *, readShader,
	          Properties::VIRTUAL,
	          __osg_Shader_P1__readShader,
	          "",
	          "");
	I_Method1(osg::Object *, readObject, IN, const std::string &, fileName,
	          Properties::VIRTUAL,
	          __osg_Object_P1__readObject__C5_std_string_R1,
	          "",
	          "");
	I_Method1(osg::Image *, readImage, IN, const std::string &, fileName,
	          Properties::VIRTUAL,
	          __osg_Image_P1__readImage__C5_std_string_R1,
	          "",
	          "");
	I_Method1(osg::Node *, readNode, IN, const std::string &, fileName,
	          Properties::VIRTUAL,
	          __osg_Node_P1__readNode__C5_std_string_R1,
	          "",
	          "");
	I_Method1(osg::Shader *, readShader, IN, const std::string &, fileName,
	          Properties::VIRTUAL,
	          __osg_Shader_P1__readShader__C5_std_string_R1,
	          "",
	          "");
	I_Method1(osg::Object *, getObjectForUniqueID, IN, const std::string &, uniqueID,
	          Properties::VIRTUAL,
	          __osg_Object_P1__getObjectForUniqueID__C5_std_string_R1,
	          "",
	          "");
	I_Method2(void, registerUniqueIDForObject, IN, const std::string &, uniqueID, IN, osg::Object *, obj,
	          Properties::VIRTUAL,
	          __void__registerUniqueIDForObject__C5_std_string_R1__osg_Object_P1,
	          "",
	          "");
	I_Method1(bool, read, IN, osgDB::Input::Parameter, value1,
	          Properties::NON_VIRTUAL,
	          __bool__read__Parameter,
	          "",
	          "");
	I_Method2(bool, read, IN, osgDB::Input::Parameter, value1, IN, osgDB::Input::Parameter, value2,
	          Properties::NON_VIRTUAL,
	          __bool__read__Parameter__Parameter,
	          "",
	          "");
	I_Method3(bool, read, IN, osgDB::Input::Parameter, value1, IN, osgDB::Input::Parameter, value2, IN, osgDB::Input::Parameter, value3,
	          Properties::NON_VIRTUAL,
	          __bool__read__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method4(bool, read, IN, osgDB::Input::Parameter, value1, IN, osgDB::Input::Parameter, value2, IN, osgDB::Input::Parameter, value3, IN, osgDB::Input::Parameter, value4,
	          Properties::NON_VIRTUAL,
	          __bool__read__Parameter__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method5(bool, read, IN, osgDB::Input::Parameter, value1, IN, osgDB::Input::Parameter, value2, IN, osgDB::Input::Parameter, value3, IN, osgDB::Input::Parameter, value4, IN, osgDB::Input::Parameter, value5,
	          Properties::NON_VIRTUAL,
	          __bool__read__Parameter__Parameter__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method6(bool, read, IN, osgDB::Input::Parameter, value1, IN, osgDB::Input::Parameter, value2, IN, osgDB::Input::Parameter, value3, IN, osgDB::Input::Parameter, value4, IN, osgDB::Input::Parameter, value5, IN, osgDB::Input::Parameter, value6,
	          Properties::NON_VIRTUAL,
	          __bool__read__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method7(bool, read, IN, osgDB::Input::Parameter, value1, IN, osgDB::Input::Parameter, value2, IN, osgDB::Input::Parameter, value3, IN, osgDB::Input::Parameter, value4, IN, osgDB::Input::Parameter, value5, IN, osgDB::Input::Parameter, value6, IN, osgDB::Input::Parameter, value7,
	          Properties::NON_VIRTUAL,
	          __bool__read__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method8(bool, read, IN, osgDB::Input::Parameter, value1, IN, osgDB::Input::Parameter, value2, IN, osgDB::Input::Parameter, value3, IN, osgDB::Input::Parameter, value4, IN, osgDB::Input::Parameter, value5, IN, osgDB::Input::Parameter, value6, IN, osgDB::Input::Parameter, value7, IN, osgDB::Input::Parameter, value8,
	          Properties::NON_VIRTUAL,
	          __bool__read__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method1(bool, read, IN, const char *, str,
	          Properties::NON_VIRTUAL,
	          __bool__read__C5_char_P1,
	          "",
	          "");
	I_Method2(bool, read, IN, const char *, str, IN, osgDB::Input::Parameter, value1,
	          Properties::NON_VIRTUAL,
	          __bool__read__C5_char_P1__Parameter,
	          "",
	          "");
	I_Method3(bool, read, IN, const char *, str, IN, osgDB::Input::Parameter, value1, IN, osgDB::Input::Parameter, value2,
	          Properties::NON_VIRTUAL,
	          __bool__read__C5_char_P1__Parameter__Parameter,
	          "",
	          "");
	I_Method4(bool, read, IN, const char *, str, IN, osgDB::Input::Parameter, value1, IN, osgDB::Input::Parameter, value2, IN, osgDB::Input::Parameter, value3,
	          Properties::NON_VIRTUAL,
	          __bool__read__C5_char_P1__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method5(bool, read, IN, const char *, str, IN, osgDB::Input::Parameter, value1, IN, osgDB::Input::Parameter, value2, IN, osgDB::Input::Parameter, value3, IN, osgDB::Input::Parameter, value4,
	          Properties::NON_VIRTUAL,
	          __bool__read__C5_char_P1__Parameter__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method6(bool, read, IN, const char *, str, IN, osgDB::Input::Parameter, value1, IN, osgDB::Input::Parameter, value2, IN, osgDB::Input::Parameter, value3, IN, osgDB::Input::Parameter, value4, IN, osgDB::Input::Parameter, value5,
	          Properties::NON_VIRTUAL,
	          __bool__read__C5_char_P1__Parameter__Parameter__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method7(bool, read, IN, const char *, str, IN, osgDB::Input::Parameter, value1, IN, osgDB::Input::Parameter, value2, IN, osgDB::Input::Parameter, value3, IN, osgDB::Input::Parameter, value4, IN, osgDB::Input::Parameter, value5, IN, osgDB::Input::Parameter, value6,
	          Properties::NON_VIRTUAL,
	          __bool__read__C5_char_P1__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method8(bool, read, IN, const char *, str, IN, osgDB::Input::Parameter, value1, IN, osgDB::Input::Parameter, value2, IN, osgDB::Input::Parameter, value3, IN, osgDB::Input::Parameter, value4, IN, osgDB::Input::Parameter, value5, IN, osgDB::Input::Parameter, value6, IN, osgDB::Input::Parameter, value7,
	          Properties::NON_VIRTUAL,
	          __bool__read__C5_char_P1__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method9(bool, read, IN, const char *, str, IN, osgDB::Input::Parameter, value1, IN, osgDB::Input::Parameter, value2, IN, osgDB::Input::Parameter, value3, IN, osgDB::Input::Parameter, value4, IN, osgDB::Input::Parameter, value5, IN, osgDB::Input::Parameter, value6, IN, osgDB::Input::Parameter, value7, IN, osgDB::Input::Parameter, value8,
	          Properties::NON_VIRTUAL,
	          __bool__read__C5_char_P1__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_SimpleProperty(const osgDB::Options *, Options, 
	                 __C5_Options_P1__getOptions, 
	                 __void__setOptions__C5_Options_P1);
END_REFLECTOR
