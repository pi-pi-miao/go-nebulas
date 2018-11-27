// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: nvm.proto

#ifndef PROTOBUF_nvm_2eproto__INCLUDED
#define PROTOBUF_nvm_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_nvm_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsNVMDeployRequestImpl();
void InitDefaultsNVMDeployRequest();
void InitDefaultsNVMDataRequestImpl();
void InitDefaultsNVMDataRequest();
void InitDefaultsNVMResponseImpl();
void InitDefaultsNVMResponse();
inline void InitDefaults() {
  InitDefaultsNVMDeployRequest();
  InitDefaultsNVMDataRequest();
  InitDefaultsNVMResponse();
}
}  // namespace protobuf_nvm_2eproto
class NVMDataRequest;
class NVMDataRequestDefaultTypeInternal;
extern NVMDataRequestDefaultTypeInternal _NVMDataRequest_default_instance_;
class NVMDeployRequest;
class NVMDeployRequestDefaultTypeInternal;
extern NVMDeployRequestDefaultTypeInternal _NVMDeployRequest_default_instance_;
class NVMResponse;
class NVMResponseDefaultTypeInternal;
extern NVMResponseDefaultTypeInternal _NVMResponse_default_instance_;

// ===================================================================

class NVMDeployRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:NVMDeployRequest) */ {
 public:
  NVMDeployRequest();
  virtual ~NVMDeployRequest();

  NVMDeployRequest(const NVMDeployRequest& from);

  inline NVMDeployRequest& operator=(const NVMDeployRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  NVMDeployRequest(NVMDeployRequest&& from) noexcept
    : NVMDeployRequest() {
    *this = ::std::move(from);
  }

  inline NVMDeployRequest& operator=(NVMDeployRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const NVMDeployRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NVMDeployRequest* internal_default_instance() {
    return reinterpret_cast<const NVMDeployRequest*>(
               &_NVMDeployRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(NVMDeployRequest* other);
  friend void swap(NVMDeployRequest& a, NVMDeployRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline NVMDeployRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  NVMDeployRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const NVMDeployRequest& from);
  void MergeFrom(const NVMDeployRequest& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(NVMDeployRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string script_src = 1;
  void clear_script_src();
  static const int kScriptSrcFieldNumber = 1;
  const ::std::string& script_src() const;
  void set_script_src(const ::std::string& value);
  #if LANG_CXX11
  void set_script_src(::std::string&& value);
  #endif
  void set_script_src(const char* value);
  void set_script_src(const char* value, size_t size);
  ::std::string* mutable_script_src();
  ::std::string* release_script_src();
  void set_allocated_script_src(::std::string* script_src);

  // string from_addr = 2;
  void clear_from_addr();
  static const int kFromAddrFieldNumber = 2;
  const ::std::string& from_addr() const;
  void set_from_addr(const ::std::string& value);
  #if LANG_CXX11
  void set_from_addr(::std::string&& value);
  #endif
  void set_from_addr(const char* value);
  void set_from_addr(const char* value, size_t size);
  ::std::string* mutable_from_addr();
  ::std::string* release_from_addr();
  void set_allocated_from_addr(::std::string* from_addr);

  // string type = 4;
  void clear_type();
  static const int kTypeFieldNumber = 4;
  const ::std::string& type() const;
  void set_type(const ::std::string& value);
  #if LANG_CXX11
  void set_type(::std::string&& value);
  #endif
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  ::std::string* mutable_type();
  ::std::string* release_type();
  void set_allocated_type(::std::string* type);

  // int64 block_height = 3;
  void clear_block_height();
  static const int kBlockHeightFieldNumber = 3;
  ::google::protobuf::int64 block_height() const;
  void set_block_height(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:NVMDeployRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr script_src_;
  ::google::protobuf::internal::ArenaStringPtr from_addr_;
  ::google::protobuf::internal::ArenaStringPtr type_;
  ::google::protobuf::int64 block_height_;
  mutable int _cached_size_;
  friend struct ::protobuf_nvm_2eproto::TableStruct;
  friend void ::protobuf_nvm_2eproto::InitDefaultsNVMDeployRequestImpl();
};
// -------------------------------------------------------------------

class NVMDataRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:NVMDataRequest) */ {
 public:
  NVMDataRequest();
  virtual ~NVMDataRequest();

  NVMDataRequest(const NVMDataRequest& from);

  inline NVMDataRequest& operator=(const NVMDataRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  NVMDataRequest(NVMDataRequest&& from) noexcept
    : NVMDataRequest() {
    *this = ::std::move(from);
  }

  inline NVMDataRequest& operator=(NVMDataRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const NVMDataRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NVMDataRequest* internal_default_instance() {
    return reinterpret_cast<const NVMDataRequest*>(
               &_NVMDataRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(NVMDataRequest* other);
  friend void swap(NVMDataRequest& a, NVMDataRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline NVMDataRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  NVMDataRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const NVMDataRequest& from);
  void MergeFrom(const NVMDataRequest& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(NVMDataRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string request_type = 1;
  void clear_request_type();
  static const int kRequestTypeFieldNumber = 1;
  const ::std::string& request_type() const;
  void set_request_type(const ::std::string& value);
  #if LANG_CXX11
  void set_request_type(::std::string&& value);
  #endif
  void set_request_type(const char* value);
  void set_request_type(const char* value, size_t size);
  ::std::string* mutable_request_type();
  ::std::string* release_request_type();
  void set_allocated_request_type(::std::string* request_type);

  // string script_src = 2;
  void clear_script_src();
  static const int kScriptSrcFieldNumber = 2;
  const ::std::string& script_src() const;
  void set_script_src(const ::std::string& value);
  #if LANG_CXX11
  void set_script_src(::std::string&& value);
  #endif
  void set_script_src(const char* value);
  void set_script_src(const char* value, size_t size);
  ::std::string* mutable_script_src();
  ::std::string* release_script_src();
  void set_allocated_script_src(::std::string* script_src);

  // string function_name = 3;
  void clear_function_name();
  static const int kFunctionNameFieldNumber = 3;
  const ::std::string& function_name() const;
  void set_function_name(const ::std::string& value);
  #if LANG_CXX11
  void set_function_name(::std::string&& value);
  #endif
  void set_function_name(const char* value);
  void set_function_name(const char* value, size_t size);
  ::std::string* mutable_function_name();
  ::std::string* release_function_name();
  void set_allocated_function_name(::std::string* function_name);

  // string contract_addr = 4;
  void clear_contract_addr();
  static const int kContractAddrFieldNumber = 4;
  const ::std::string& contract_addr() const;
  void set_contract_addr(const ::std::string& value);
  #if LANG_CXX11
  void set_contract_addr(::std::string&& value);
  #endif
  void set_contract_addr(const char* value);
  void set_contract_addr(const char* value, size_t size);
  ::std::string* mutable_contract_addr();
  ::std::string* release_contract_addr();
  void set_allocated_contract_addr(::std::string* contract_addr);

  // string extra_data = 5;
  void clear_extra_data();
  static const int kExtraDataFieldNumber = 5;
  const ::std::string& extra_data() const;
  void set_extra_data(const ::std::string& value);
  #if LANG_CXX11
  void set_extra_data(::std::string&& value);
  #endif
  void set_extra_data(const char* value);
  void set_extra_data(const char* value, size_t size);
  ::std::string* mutable_extra_data();
  ::std::string* release_extra_data();
  void set_allocated_extra_data(::std::string* extra_data);

  // @@protoc_insertion_point(class_scope:NVMDataRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr request_type_;
  ::google::protobuf::internal::ArenaStringPtr script_src_;
  ::google::protobuf::internal::ArenaStringPtr function_name_;
  ::google::protobuf::internal::ArenaStringPtr contract_addr_;
  ::google::protobuf::internal::ArenaStringPtr extra_data_;
  mutable int _cached_size_;
  friend struct ::protobuf_nvm_2eproto::TableStruct;
  friend void ::protobuf_nvm_2eproto::InitDefaultsNVMDataRequestImpl();
};
// -------------------------------------------------------------------

class NVMResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:NVMResponse) */ {
 public:
  NVMResponse();
  virtual ~NVMResponse();

  NVMResponse(const NVMResponse& from);

  inline NVMResponse& operator=(const NVMResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  NVMResponse(NVMResponse&& from) noexcept
    : NVMResponse() {
    *this = ::std::move(from);
  }

  inline NVMResponse& operator=(NVMResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const NVMResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NVMResponse* internal_default_instance() {
    return reinterpret_cast<const NVMResponse*>(
               &_NVMResponse_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(NVMResponse* other);
  friend void swap(NVMResponse& a, NVMResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline NVMResponse* New() const PROTOBUF_FINAL { return New(NULL); }

  NVMResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const NVMResponse& from);
  void MergeFrom(const NVMResponse& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(NVMResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string msg = 2;
  void clear_msg();
  static const int kMsgFieldNumber = 2;
  const ::std::string& msg() const;
  void set_msg(const ::std::string& value);
  #if LANG_CXX11
  void set_msg(::std::string&& value);
  #endif
  void set_msg(const char* value);
  void set_msg(const char* value, size_t size);
  ::std::string* mutable_msg();
  ::std::string* release_msg();
  void set_allocated_msg(::std::string* msg);

  // int32 result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::google::protobuf::int32 result() const;
  void set_result(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:NVMResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr msg_;
  ::google::protobuf::int32 result_;
  mutable int _cached_size_;
  friend struct ::protobuf_nvm_2eproto::TableStruct;
  friend void ::protobuf_nvm_2eproto::InitDefaultsNVMResponseImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NVMDeployRequest

// string script_src = 1;
inline void NVMDeployRequest::clear_script_src() {
  script_src_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& NVMDeployRequest::script_src() const {
  // @@protoc_insertion_point(field_get:NVMDeployRequest.script_src)
  return script_src_.GetNoArena();
}
inline void NVMDeployRequest::set_script_src(const ::std::string& value) {
  
  script_src_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NVMDeployRequest.script_src)
}
#if LANG_CXX11
inline void NVMDeployRequest::set_script_src(::std::string&& value) {
  
  script_src_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:NVMDeployRequest.script_src)
}
#endif
inline void NVMDeployRequest::set_script_src(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  script_src_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NVMDeployRequest.script_src)
}
inline void NVMDeployRequest::set_script_src(const char* value, size_t size) {
  
  script_src_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NVMDeployRequest.script_src)
}
inline ::std::string* NVMDeployRequest::mutable_script_src() {
  
  // @@protoc_insertion_point(field_mutable:NVMDeployRequest.script_src)
  return script_src_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NVMDeployRequest::release_script_src() {
  // @@protoc_insertion_point(field_release:NVMDeployRequest.script_src)
  
  return script_src_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NVMDeployRequest::set_allocated_script_src(::std::string* script_src) {
  if (script_src != NULL) {
    
  } else {
    
  }
  script_src_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), script_src);
  // @@protoc_insertion_point(field_set_allocated:NVMDeployRequest.script_src)
}

// string from_addr = 2;
inline void NVMDeployRequest::clear_from_addr() {
  from_addr_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& NVMDeployRequest::from_addr() const {
  // @@protoc_insertion_point(field_get:NVMDeployRequest.from_addr)
  return from_addr_.GetNoArena();
}
inline void NVMDeployRequest::set_from_addr(const ::std::string& value) {
  
  from_addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NVMDeployRequest.from_addr)
}
#if LANG_CXX11
inline void NVMDeployRequest::set_from_addr(::std::string&& value) {
  
  from_addr_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:NVMDeployRequest.from_addr)
}
#endif
inline void NVMDeployRequest::set_from_addr(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  from_addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NVMDeployRequest.from_addr)
}
inline void NVMDeployRequest::set_from_addr(const char* value, size_t size) {
  
  from_addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NVMDeployRequest.from_addr)
}
inline ::std::string* NVMDeployRequest::mutable_from_addr() {
  
  // @@protoc_insertion_point(field_mutable:NVMDeployRequest.from_addr)
  return from_addr_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NVMDeployRequest::release_from_addr() {
  // @@protoc_insertion_point(field_release:NVMDeployRequest.from_addr)
  
  return from_addr_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NVMDeployRequest::set_allocated_from_addr(::std::string* from_addr) {
  if (from_addr != NULL) {
    
  } else {
    
  }
  from_addr_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from_addr);
  // @@protoc_insertion_point(field_set_allocated:NVMDeployRequest.from_addr)
}

// int64 block_height = 3;
inline void NVMDeployRequest::clear_block_height() {
  block_height_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 NVMDeployRequest::block_height() const {
  // @@protoc_insertion_point(field_get:NVMDeployRequest.block_height)
  return block_height_;
}
inline void NVMDeployRequest::set_block_height(::google::protobuf::int64 value) {
  
  block_height_ = value;
  // @@protoc_insertion_point(field_set:NVMDeployRequest.block_height)
}

// string type = 4;
inline void NVMDeployRequest::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& NVMDeployRequest::type() const {
  // @@protoc_insertion_point(field_get:NVMDeployRequest.type)
  return type_.GetNoArena();
}
inline void NVMDeployRequest::set_type(const ::std::string& value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NVMDeployRequest.type)
}
#if LANG_CXX11
inline void NVMDeployRequest::set_type(::std::string&& value) {
  
  type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:NVMDeployRequest.type)
}
#endif
inline void NVMDeployRequest::set_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NVMDeployRequest.type)
}
inline void NVMDeployRequest::set_type(const char* value, size_t size) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NVMDeployRequest.type)
}
inline ::std::string* NVMDeployRequest::mutable_type() {
  
  // @@protoc_insertion_point(field_mutable:NVMDeployRequest.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NVMDeployRequest::release_type() {
  // @@protoc_insertion_point(field_release:NVMDeployRequest.type)
  
  return type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NVMDeployRequest::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    
  } else {
    
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:NVMDeployRequest.type)
}

// -------------------------------------------------------------------

// NVMDataRequest

// string request_type = 1;
inline void NVMDataRequest::clear_request_type() {
  request_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& NVMDataRequest::request_type() const {
  // @@protoc_insertion_point(field_get:NVMDataRequest.request_type)
  return request_type_.GetNoArena();
}
inline void NVMDataRequest::set_request_type(const ::std::string& value) {
  
  request_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NVMDataRequest.request_type)
}
#if LANG_CXX11
inline void NVMDataRequest::set_request_type(::std::string&& value) {
  
  request_type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:NVMDataRequest.request_type)
}
#endif
inline void NVMDataRequest::set_request_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  request_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NVMDataRequest.request_type)
}
inline void NVMDataRequest::set_request_type(const char* value, size_t size) {
  
  request_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NVMDataRequest.request_type)
}
inline ::std::string* NVMDataRequest::mutable_request_type() {
  
  // @@protoc_insertion_point(field_mutable:NVMDataRequest.request_type)
  return request_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NVMDataRequest::release_request_type() {
  // @@protoc_insertion_point(field_release:NVMDataRequest.request_type)
  
  return request_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NVMDataRequest::set_allocated_request_type(::std::string* request_type) {
  if (request_type != NULL) {
    
  } else {
    
  }
  request_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), request_type);
  // @@protoc_insertion_point(field_set_allocated:NVMDataRequest.request_type)
}

// string script_src = 2;
inline void NVMDataRequest::clear_script_src() {
  script_src_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& NVMDataRequest::script_src() const {
  // @@protoc_insertion_point(field_get:NVMDataRequest.script_src)
  return script_src_.GetNoArena();
}
inline void NVMDataRequest::set_script_src(const ::std::string& value) {
  
  script_src_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NVMDataRequest.script_src)
}
#if LANG_CXX11
inline void NVMDataRequest::set_script_src(::std::string&& value) {
  
  script_src_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:NVMDataRequest.script_src)
}
#endif
inline void NVMDataRequest::set_script_src(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  script_src_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NVMDataRequest.script_src)
}
inline void NVMDataRequest::set_script_src(const char* value, size_t size) {
  
  script_src_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NVMDataRequest.script_src)
}
inline ::std::string* NVMDataRequest::mutable_script_src() {
  
  // @@protoc_insertion_point(field_mutable:NVMDataRequest.script_src)
  return script_src_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NVMDataRequest::release_script_src() {
  // @@protoc_insertion_point(field_release:NVMDataRequest.script_src)
  
  return script_src_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NVMDataRequest::set_allocated_script_src(::std::string* script_src) {
  if (script_src != NULL) {
    
  } else {
    
  }
  script_src_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), script_src);
  // @@protoc_insertion_point(field_set_allocated:NVMDataRequest.script_src)
}

// string function_name = 3;
inline void NVMDataRequest::clear_function_name() {
  function_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& NVMDataRequest::function_name() const {
  // @@protoc_insertion_point(field_get:NVMDataRequest.function_name)
  return function_name_.GetNoArena();
}
inline void NVMDataRequest::set_function_name(const ::std::string& value) {
  
  function_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NVMDataRequest.function_name)
}
#if LANG_CXX11
inline void NVMDataRequest::set_function_name(::std::string&& value) {
  
  function_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:NVMDataRequest.function_name)
}
#endif
inline void NVMDataRequest::set_function_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  function_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NVMDataRequest.function_name)
}
inline void NVMDataRequest::set_function_name(const char* value, size_t size) {
  
  function_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NVMDataRequest.function_name)
}
inline ::std::string* NVMDataRequest::mutable_function_name() {
  
  // @@protoc_insertion_point(field_mutable:NVMDataRequest.function_name)
  return function_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NVMDataRequest::release_function_name() {
  // @@protoc_insertion_point(field_release:NVMDataRequest.function_name)
  
  return function_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NVMDataRequest::set_allocated_function_name(::std::string* function_name) {
  if (function_name != NULL) {
    
  } else {
    
  }
  function_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), function_name);
  // @@protoc_insertion_point(field_set_allocated:NVMDataRequest.function_name)
}

// string contract_addr = 4;
inline void NVMDataRequest::clear_contract_addr() {
  contract_addr_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& NVMDataRequest::contract_addr() const {
  // @@protoc_insertion_point(field_get:NVMDataRequest.contract_addr)
  return contract_addr_.GetNoArena();
}
inline void NVMDataRequest::set_contract_addr(const ::std::string& value) {
  
  contract_addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NVMDataRequest.contract_addr)
}
#if LANG_CXX11
inline void NVMDataRequest::set_contract_addr(::std::string&& value) {
  
  contract_addr_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:NVMDataRequest.contract_addr)
}
#endif
inline void NVMDataRequest::set_contract_addr(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  contract_addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NVMDataRequest.contract_addr)
}
inline void NVMDataRequest::set_contract_addr(const char* value, size_t size) {
  
  contract_addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NVMDataRequest.contract_addr)
}
inline ::std::string* NVMDataRequest::mutable_contract_addr() {
  
  // @@protoc_insertion_point(field_mutable:NVMDataRequest.contract_addr)
  return contract_addr_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NVMDataRequest::release_contract_addr() {
  // @@protoc_insertion_point(field_release:NVMDataRequest.contract_addr)
  
  return contract_addr_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NVMDataRequest::set_allocated_contract_addr(::std::string* contract_addr) {
  if (contract_addr != NULL) {
    
  } else {
    
  }
  contract_addr_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), contract_addr);
  // @@protoc_insertion_point(field_set_allocated:NVMDataRequest.contract_addr)
}

// string extra_data = 5;
inline void NVMDataRequest::clear_extra_data() {
  extra_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& NVMDataRequest::extra_data() const {
  // @@protoc_insertion_point(field_get:NVMDataRequest.extra_data)
  return extra_data_.GetNoArena();
}
inline void NVMDataRequest::set_extra_data(const ::std::string& value) {
  
  extra_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NVMDataRequest.extra_data)
}
#if LANG_CXX11
inline void NVMDataRequest::set_extra_data(::std::string&& value) {
  
  extra_data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:NVMDataRequest.extra_data)
}
#endif
inline void NVMDataRequest::set_extra_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  extra_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NVMDataRequest.extra_data)
}
inline void NVMDataRequest::set_extra_data(const char* value, size_t size) {
  
  extra_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NVMDataRequest.extra_data)
}
inline ::std::string* NVMDataRequest::mutable_extra_data() {
  
  // @@protoc_insertion_point(field_mutable:NVMDataRequest.extra_data)
  return extra_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NVMDataRequest::release_extra_data() {
  // @@protoc_insertion_point(field_release:NVMDataRequest.extra_data)
  
  return extra_data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NVMDataRequest::set_allocated_extra_data(::std::string* extra_data) {
  if (extra_data != NULL) {
    
  } else {
    
  }
  extra_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), extra_data);
  // @@protoc_insertion_point(field_set_allocated:NVMDataRequest.extra_data)
}

// -------------------------------------------------------------------

// NVMResponse

// int32 result = 1;
inline void NVMResponse::clear_result() {
  result_ = 0;
}
inline ::google::protobuf::int32 NVMResponse::result() const {
  // @@protoc_insertion_point(field_get:NVMResponse.result)
  return result_;
}
inline void NVMResponse::set_result(::google::protobuf::int32 value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:NVMResponse.result)
}

// string msg = 2;
inline void NVMResponse::clear_msg() {
  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& NVMResponse::msg() const {
  // @@protoc_insertion_point(field_get:NVMResponse.msg)
  return msg_.GetNoArena();
}
inline void NVMResponse::set_msg(const ::std::string& value) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NVMResponse.msg)
}
#if LANG_CXX11
inline void NVMResponse::set_msg(::std::string&& value) {
  
  msg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:NVMResponse.msg)
}
#endif
inline void NVMResponse::set_msg(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NVMResponse.msg)
}
inline void NVMResponse::set_msg(const char* value, size_t size) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NVMResponse.msg)
}
inline ::std::string* NVMResponse::mutable_msg() {
  
  // @@protoc_insertion_point(field_mutable:NVMResponse.msg)
  return msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NVMResponse::release_msg() {
  // @@protoc_insertion_point(field_release:NVMResponse.msg)
  
  return msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NVMResponse::set_allocated_msg(::std::string* msg) {
  if (msg != NULL) {
    
  } else {
    
  }
  msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:NVMResponse.msg)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_nvm_2eproto__INCLUDED
