// This file was generated based on '.uno/ux11/iphod.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.iphod_altReadin-29d8ca9c.h>
#include <altReading.Button.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
static uType* TYPES[1];

namespace g{

// internal sealed class iphod_altReadingButton_FontSize_Property :215
// {
static void iphod_altReadingButton_FontSize_Property_build(uType* type)
{
    ::TYPES[0] = ::g::altReading::Button_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*altReading.Button*/], offsetof(::g::iphod_altReadingButton_FontSize_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* iphod_altReadingButton_FontSize_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(iphod_altReadingButton_FontSize_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("iphod_altReadingButton_FontSize_Property", options);
    type->fp_build_ = iphod_altReadingButton_FontSize_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))iphod_altReadingButton_FontSize_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))iphod_altReadingButton_FontSize_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))iphod_altReadingButton_FontSize_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))iphod_altReadingButton_FontSize_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :220
void iphod_altReadingButton_FontSize_Property__Get1_fn(iphod_altReadingButton_FontSize_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::altReading::Button*>(obj, ::TYPES[0/*altReading.Button*/]))->FontSize(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :219
void iphod_altReadingButton_FontSize_Property__get_Object_fn(iphod_altReadingButton_FontSize_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :221
void iphod_altReadingButton_FontSize_Property__Set1_fn(iphod_altReadingButton_FontSize_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::altReading::Button*>(obj, ::TYPES[0/*altReading.Button*/]))->SetFontSize(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :222
void iphod_altReadingButton_FontSize_Property__get_SupportsOriginSetter_fn(iphod_altReadingButton_FontSize_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

} // ::g