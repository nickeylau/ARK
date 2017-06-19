// -------------------------------------------------------------------------
//    @FileName         :    NFCProperty.h
//    @Author           :    Ark Game Tech
//    @Date             :    2012-03-01
//    @Module           :    NFCProperty
//
// -------------------------------------------------------------------------

#ifndef NFC_PROPERTY_H
#define NFC_PROPERTY_H

#include "NFDefine.h"
#include "NFMap.h"
#include "NFList.h"
#include "AFCDataList.h"
#include "NFIProperty.h"
#include "AFIData.h"
#include <vector>

using namespace ArkFrame;

/**
 * @class   NFCProperty
 *
 * @brief   A nfc property.
 *
 * @author  flyicegood
 * @date    2016/11/22
 */

class NFCProperty : public NFIProperty
{
private:

    /**
     * @fn  NFCProperty::NFCProperty();
     *
     * @brief   Default constructor.
     *
     * @author  flyicegood
     * @date    2016/11/29
     */

    NFCProperty();

public:

    /**
     * @fn  NFCProperty::NFCProperty(const AFGUID& self, const std::string& strPropertyName, const TDATA_TYPE varType);
     *
     * @brief   Constructor.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @param   self            The class instance that this method operates on.
     * @param   strPropertyName Name of the property.
     * @param   varType         Type of the variable.
     */

    NFCProperty(const AFGUID& self, const std::string& strPropertyName, const int varType);

    /**
     * @fn  virtual NFCProperty::~NFCProperty();
     *
     * @brief   Destructor.
     *
     * @author  flyicegood
     * @date    2016/11/29
     */

    virtual ~NFCProperty();

    /**
     * @fn  virtual void NFCProperty::SetValue(const AFDataList::TData& TData);
     *
     * @brief   Sets a value.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @param   TData   The data.
     */

    virtual void SetValue(const AFIData& TData);

    /**
     * @fn  virtual void NFCProperty::SetValue(const NFIProperty* pProperty);
     *
     * @brief   Sets a value.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @param   pProperty   The property.
     */

    virtual void SetValue(const NFIProperty* pProperty);

    /**
     * @fn  virtual bool NFCProperty::SetInt(const NFINT64 value);
     *
     * @brief   Sets an int.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @param   value   The value.
     *
     * @return  True if it succeeds, false if it fails.
     */

    virtual bool SetInt(const NFINT64 value);

    /**
     * @fn  virtual bool NFCProperty::SetDouble(const double value);
     *
     * @brief   Sets a double.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @param   value   The value.
     *
     * @return  True if it succeeds, false if it fails.
     */

    virtual bool SetDouble(const double value);

    /**
     * @fn  virtual bool NFCProperty::SetString(const std::string& value);
     *
     * @brief   Sets a string.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @param   value   The value.
     *
     * @return  True if it succeeds, false if it fails.
     */

    virtual bool SetString(const std::string& value);

    /**
     * @fn  virtual bool NFCProperty::SetObject(const AFGUID& value);
     *
     * @brief   Sets an object.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @param   value   The value.
     *
     * @return  True if it succeeds, false if it fails.
     */

    virtual bool SetObject(const AFGUID& value);

    /**
     * @fn  virtual NFINT64 NFCProperty::GetInt() const;
     *
     * @brief   Gets the int.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @return  The int.
     */

    virtual NFINT64 GetInt() const;

    /**
     * @fn  virtual double NFCProperty::GetDouble() const;
     *
     * @brief   Gets the double.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @return  The double.
     */

    virtual double GetDouble() const;

    /**
     * @fn  virtual const std::string& NFCProperty::GetString() const;
     *
     * @brief   Gets the string.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @return  The string.
     */

    virtual const std::string& GetString() const;

    /**
     * @fn  virtual const AFGUID& NFCProperty::GetObject() const;
     *
     * @brief   Gets the object.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @return  The object.
     */

    virtual const AFGUID& GetObject() const;

    /**
     * @fn  virtual const TDATA_TYPE NFCProperty::GetType() const;
     *
     * @brief   Gets the type.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @return  The type.
     */

    virtual const int GetType() const;

    /**
     * @fn  virtual const bool NFCProperty::GeUsed() const;
     *
     * @brief   Ge used.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @return  A const bool.
     */

    virtual const bool GeUsed() const;

    /**
     * @fn  virtual const std::string& NFCProperty::GetKey() const;
     *
     * @brief   Gets the key.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @return  The key.
     */

    virtual const std::string& GetKey() const;

    /**
     * @fn  virtual const bool NFCProperty::GetSave() const;
     *
     * @brief   Gets the save.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @return  The save.
     */

    virtual const bool GetSave() const;

    /**
     * @fn  virtual const bool NFCProperty::GetPublic() const;
     *
     * @brief   Gets the public.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @return  The public.
     */

    virtual const bool GetPublic() const;

    /**
     * @fn  virtual const bool NFCProperty::GetPrivate() const;
     *
     * @brief   Gets the private.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @return  The private.
     */

    virtual const bool GetPrivate() const;

    /**
     * @fn  virtual const bool NFCProperty::GetCache() const;
     *
     * @brief   Gets the cache.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @return  The cache.
     */

    virtual const bool GetCache() const;

    /**
     * @fn  virtual const std::string& NFCProperty::GetRelationValue() const;
     *
     * @brief   Gets relation value.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @return  The relation value.
     */

    virtual const std::string& GetRelationValue() const;

    /**
     * @fn  virtual void NFCProperty::SetSave(bool bSave);
     *
     * @brief   Sets a save.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @param   bSave   True to save.
     */

    virtual void SetSave(bool bSave);

    /**
     * @fn  virtual void NFCProperty::SetPublic(bool bPublic);
     *
     * @brief   Sets a public.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @param   bPublic True to public.
     */

    virtual void SetPublic(bool bPublic);

    /**
     * @fn  virtual void NFCProperty::SetPrivate(bool bPrivate);
     *
     * @brief   Sets a private.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @param   bPrivate    True to private.
     */

    virtual void SetPrivate(bool bPrivate);

    /**
     * @fn  virtual void NFCProperty::SetCache(bool bCache);
     *
     * @brief   Sets a cache.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @param   bCache  True to cache.
     */

    virtual void SetCache(bool bCache);

    /**
     * @fn  virtual void NFCProperty::SetRelationValue(const std::string& strRelation);
     *
     * @brief   Sets relation value.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @param   strRelation The relation.
     */

    virtual void SetRelationValue(const std::string& strRelation);

    /**
     * @fn  virtual const AFDataList::TData& NFCProperty::GetValue() const;
     *
     * @brief   Gets the value.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @return  The value.
     */

    virtual const AFIData& GetValue() const;

    /**
     * @fn  virtual const NF_SHARE_PTR<NFList<std::string>> NFCProperty::GetEmbeddedList() const;
     *
     * @brief   Gets embedded list.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @return  The embedded list.
     */

    virtual const NF_SHARE_PTR<NFList<std::string>> GetEmbeddedList() const;

    /**
     * @fn  virtual const NF_SHARE_PTR<NFMapEx<std::string, std::string>> NFCProperty::GetEmbeddedMap() const;
     *
     * @brief   Gets embedded map.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @return  The embedded map.
     */

    virtual const NF_SHARE_PTR<NFMapEx<std::string, std::string>> GetEmbeddedMap() const;

    /**
     * @fn  virtual bool NFCProperty::Changed() const;
     *
     * @brief   Changed this object.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @return  True if it succeeds, false if it fails.
     */

    virtual bool Changed() const;

    /**
     * @fn  virtual std::string NFCProperty::ToString();
     *
     * @brief   Convert this object into a string representation.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @return  A std::string that represents this object.
     */

    virtual std::string ToString();

    /**
     * @fn  virtual bool NFCProperty::FromString(const std::string& strData);
     *
     * @brief   Initializes this object from the given from string.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @param   strData The data.
     *
     * @return  True if it succeeds, false if it fails.
     */

    virtual bool FromString(const std::string& strData);

    /**
     * @fn  virtual bool NFCProperty::DeSerialization();
     *
     * @brief   Determines if we can de serialization.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @return  True if it succeeds, false if it fails.
     */

    virtual bool DeSerialization();

    /**
     * @fn  virtual void NFCProperty::RegisterCallback(const PROPERTY_EVENT_FUNCTOR_PTR& cb);
     *
     * @brief   Registers the callback described by cb.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @param   cb  The cb.
     */

    virtual void RegisterCallback(const PROPERTY_EVENT_FUNCTOR_PTR& cb);

private:

    /**
     * @fn  int NFCProperty::OnEventHandler(const AFDataList::TData& oldVar, const AFDataList::TData& newVar);
     *
     * @brief   Executes the event handler action.
     *
     * @author  flyicegood
     * @date    2016/11/29
     *
     * @param   oldVar  The old variable.
     * @param   newVar  The new variable.
     *
     * @return  An int.
     */

    int OnEventHandler(const AFIData& oldVar, const AFIData& newVar);

private:

    /**
     * @typedef std::vector<PROPERTY_EVENT_FUNCTOR_PTR> TPROPERTYCALLBACKEX
     *
     * @brief   Defines an alias representing the tpropertycallbackex.
     */

    typedef std::vector<PROPERTY_EVENT_FUNCTOR_PTR> TPROPERTYCALLBACKEX;
    /** @brief   The mt property callback. */
    TPROPERTYCALLBACKEX mtPropertyCallback;

    /** @brief   The self. */
    AFGUID mSelf;
    /** @brief   可以想办法与基本类型共用. */
    std::string msPropertyName;
    /** @brief   The mstr relation value. */
    std::string mstrRelationValue;
    /** @brief   只有在不存在指针的时候才用这个判断类型--为节约内存. */
    AF_DATA_TYPE eType;

    /** @brief   Information describing the mx. */
    NF_SHARE_PTR<AFIData> mxData;
    /** @brief   The mx embedded map. */
    NF_SHARE_PTR<NFMapEx<std::string, std::string>> mxEmbeddedMap;
    /** @brief   List of mx embedded. */
    NF_SHARE_PTR<NFList<std::string>> mxEmbeddedList;

    /** @brief   True to megabytes public. */
    bool mbPublic;
    /** @brief   True to megabytes private. */
    bool mbPrivate;
    /** @brief   True to megabytes save. */
    bool mbSave;
    /** @brief   True to megabytes cache. */
    bool mbCache;
};

#endif
