// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/contrib/tpu/proto/tpu_embedding_config.proto

#ifndef PROTOBUF_INCLUDED_tensorflow_2fcontrib_2ftpu_2fproto_2ftpu_5fembedding_5fconfig_2eproto
#define PROTOBUF_INCLUDED_tensorflow_2fcontrib_2ftpu_2fproto_2ftpu_5fembedding_5fconfig_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow/contrib/tpu/proto/optimization_parameters.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_2fcontrib_2ftpu_2fproto_2ftpu_5fembedding_5fconfig_2eproto 

namespace protobuf_tensorflow_2fcontrib_2ftpu_2fproto_2ftpu_5fembedding_5fconfig_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_tensorflow_2fcontrib_2ftpu_2fproto_2ftpu_5fembedding_5fconfig_2eproto
namespace tensorflow {
namespace tpu {
class TPUEmbeddingConfiguration;
class TPUEmbeddingConfigurationDefaultTypeInternal;
extern TPUEmbeddingConfigurationDefaultTypeInternal _TPUEmbeddingConfiguration_default_instance_;
class TPUEmbeddingConfiguration_TPUEmbeddingTable;
class TPUEmbeddingConfiguration_TPUEmbeddingTableDefaultTypeInternal;
extern TPUEmbeddingConfiguration_TPUEmbeddingTableDefaultTypeInternal _TPUEmbeddingConfiguration_TPUEmbeddingTable_default_instance_;
}  // namespace tpu
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> ::tensorflow::tpu::TPUEmbeddingConfiguration* Arena::CreateMaybeMessage<::tensorflow::tpu::TPUEmbeddingConfiguration>(Arena*);
template<> ::tensorflow::tpu::TPUEmbeddingConfiguration_TPUEmbeddingTable* Arena::CreateMaybeMessage<::tensorflow::tpu::TPUEmbeddingConfiguration_TPUEmbeddingTable>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace tensorflow {
namespace tpu {

enum TPUEmbeddingConfiguration_ModelMode {
  TPUEmbeddingConfiguration_ModelMode_INVALID = 0,
  TPUEmbeddingConfiguration_ModelMode_TRAINING = 1,
  TPUEmbeddingConfiguration_ModelMode_INFERENCE = 2,
  TPUEmbeddingConfiguration_ModelMode_TPUEmbeddingConfiguration_ModelMode_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  TPUEmbeddingConfiguration_ModelMode_TPUEmbeddingConfiguration_ModelMode_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool TPUEmbeddingConfiguration_ModelMode_IsValid(int value);
const TPUEmbeddingConfiguration_ModelMode TPUEmbeddingConfiguration_ModelMode_ModelMode_MIN = TPUEmbeddingConfiguration_ModelMode_INVALID;
const TPUEmbeddingConfiguration_ModelMode TPUEmbeddingConfiguration_ModelMode_ModelMode_MAX = TPUEmbeddingConfiguration_ModelMode_INFERENCE;
const int TPUEmbeddingConfiguration_ModelMode_ModelMode_ARRAYSIZE = TPUEmbeddingConfiguration_ModelMode_ModelMode_MAX + 1;

const ::google::protobuf::EnumDescriptor* TPUEmbeddingConfiguration_ModelMode_descriptor();
inline const ::std::string& TPUEmbeddingConfiguration_ModelMode_Name(TPUEmbeddingConfiguration_ModelMode value) {
  return ::google::protobuf::internal::NameOfEnum(
    TPUEmbeddingConfiguration_ModelMode_descriptor(), value);
}
inline bool TPUEmbeddingConfiguration_ModelMode_Parse(
    const ::std::string& name, TPUEmbeddingConfiguration_ModelMode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<TPUEmbeddingConfiguration_ModelMode>(
    TPUEmbeddingConfiguration_ModelMode_descriptor(), name, value);
}
// ===================================================================

class TPUEmbeddingConfiguration_TPUEmbeddingTable : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable) */ {
 public:
  TPUEmbeddingConfiguration_TPUEmbeddingTable();
  virtual ~TPUEmbeddingConfiguration_TPUEmbeddingTable();

  TPUEmbeddingConfiguration_TPUEmbeddingTable(const TPUEmbeddingConfiguration_TPUEmbeddingTable& from);

  inline TPUEmbeddingConfiguration_TPUEmbeddingTable& operator=(const TPUEmbeddingConfiguration_TPUEmbeddingTable& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TPUEmbeddingConfiguration_TPUEmbeddingTable(TPUEmbeddingConfiguration_TPUEmbeddingTable&& from) noexcept
    : TPUEmbeddingConfiguration_TPUEmbeddingTable() {
    *this = ::std::move(from);
  }

  inline TPUEmbeddingConfiguration_TPUEmbeddingTable& operator=(TPUEmbeddingConfiguration_TPUEmbeddingTable&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TPUEmbeddingConfiguration_TPUEmbeddingTable& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TPUEmbeddingConfiguration_TPUEmbeddingTable* internal_default_instance() {
    return reinterpret_cast<const TPUEmbeddingConfiguration_TPUEmbeddingTable*>(
               &_TPUEmbeddingConfiguration_TPUEmbeddingTable_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(TPUEmbeddingConfiguration_TPUEmbeddingTable* other);
  friend void swap(TPUEmbeddingConfiguration_TPUEmbeddingTable& a, TPUEmbeddingConfiguration_TPUEmbeddingTable& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TPUEmbeddingConfiguration_TPUEmbeddingTable* New() const final {
    return CreateMaybeMessage<TPUEmbeddingConfiguration_TPUEmbeddingTable>(NULL);
  }

  TPUEmbeddingConfiguration_TPUEmbeddingTable* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TPUEmbeddingConfiguration_TPUEmbeddingTable>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TPUEmbeddingConfiguration_TPUEmbeddingTable& from);
  void MergeFrom(const TPUEmbeddingConfiguration_TPUEmbeddingTable& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TPUEmbeddingConfiguration_TPUEmbeddingTable* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // .tensorflow.tpu.OptimizationParameters optimization_parameters = 6;
  bool has_optimization_parameters() const;
  void clear_optimization_parameters();
  static const int kOptimizationParametersFieldNumber = 6;
  private:
  const ::tensorflow::tpu::OptimizationParameters& _internal_optimization_parameters() const;
  public:
  const ::tensorflow::tpu::OptimizationParameters& optimization_parameters() const;
  ::tensorflow::tpu::OptimizationParameters* release_optimization_parameters();
  ::tensorflow::tpu::OptimizationParameters* mutable_optimization_parameters();
  void set_allocated_optimization_parameters(::tensorflow::tpu::OptimizationParameters* optimization_parameters);

  // int32 num_rows = 3;
  void clear_num_rows();
  static const int kNumRowsFieldNumber = 3;
  ::google::protobuf::int32 num_rows() const;
  void set_num_rows(::google::protobuf::int32 value);

  // int32 width = 4;
  void clear_width();
  static const int kWidthFieldNumber = 4;
  ::google::protobuf::int32 width() const;
  void set_width(::google::protobuf::int32 value);

  // int32 num_features = 5;
  void clear_num_features();
  static const int kNumFeaturesFieldNumber = 5;
  ::google::protobuf::int32 num_features() const;
  void set_num_features(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::tensorflow::tpu::OptimizationParameters* optimization_parameters_;
  ::google::protobuf::int32 num_rows_;
  ::google::protobuf::int32 width_;
  ::google::protobuf::int32 num_features_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_2fcontrib_2ftpu_2fproto_2ftpu_5fembedding_5fconfig_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class TPUEmbeddingConfiguration : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.tpu.TPUEmbeddingConfiguration) */ {
 public:
  TPUEmbeddingConfiguration();
  virtual ~TPUEmbeddingConfiguration();

  TPUEmbeddingConfiguration(const TPUEmbeddingConfiguration& from);

  inline TPUEmbeddingConfiguration& operator=(const TPUEmbeddingConfiguration& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TPUEmbeddingConfiguration(TPUEmbeddingConfiguration&& from) noexcept
    : TPUEmbeddingConfiguration() {
    *this = ::std::move(from);
  }

  inline TPUEmbeddingConfiguration& operator=(TPUEmbeddingConfiguration&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TPUEmbeddingConfiguration& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TPUEmbeddingConfiguration* internal_default_instance() {
    return reinterpret_cast<const TPUEmbeddingConfiguration*>(
               &_TPUEmbeddingConfiguration_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(TPUEmbeddingConfiguration* other);
  friend void swap(TPUEmbeddingConfiguration& a, TPUEmbeddingConfiguration& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TPUEmbeddingConfiguration* New() const final {
    return CreateMaybeMessage<TPUEmbeddingConfiguration>(NULL);
  }

  TPUEmbeddingConfiguration* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TPUEmbeddingConfiguration>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TPUEmbeddingConfiguration& from);
  void MergeFrom(const TPUEmbeddingConfiguration& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TPUEmbeddingConfiguration* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef TPUEmbeddingConfiguration_TPUEmbeddingTable TPUEmbeddingTable;

  typedef TPUEmbeddingConfiguration_ModelMode ModelMode;
  static const ModelMode INVALID =
    TPUEmbeddingConfiguration_ModelMode_INVALID;
  static const ModelMode TRAINING =
    TPUEmbeddingConfiguration_ModelMode_TRAINING;
  static const ModelMode INFERENCE =
    TPUEmbeddingConfiguration_ModelMode_INFERENCE;
  static inline bool ModelMode_IsValid(int value) {
    return TPUEmbeddingConfiguration_ModelMode_IsValid(value);
  }
  static const ModelMode ModelMode_MIN =
    TPUEmbeddingConfiguration_ModelMode_ModelMode_MIN;
  static const ModelMode ModelMode_MAX =
    TPUEmbeddingConfiguration_ModelMode_ModelMode_MAX;
  static const int ModelMode_ARRAYSIZE =
    TPUEmbeddingConfiguration_ModelMode_ModelMode_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ModelMode_descriptor() {
    return TPUEmbeddingConfiguration_ModelMode_descriptor();
  }
  static inline const ::std::string& ModelMode_Name(ModelMode value) {
    return TPUEmbeddingConfiguration_ModelMode_Name(value);
  }
  static inline bool ModelMode_Parse(const ::std::string& name,
      ModelMode* value) {
    return TPUEmbeddingConfiguration_ModelMode_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated .tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable table_config = 5;
  int table_config_size() const;
  void clear_table_config();
  static const int kTableConfigFieldNumber = 5;
  ::tensorflow::tpu::TPUEmbeddingConfiguration_TPUEmbeddingTable* mutable_table_config(int index);
  ::google::protobuf::RepeatedPtrField< ::tensorflow::tpu::TPUEmbeddingConfiguration_TPUEmbeddingTable >*
      mutable_table_config();
  const ::tensorflow::tpu::TPUEmbeddingConfiguration_TPUEmbeddingTable& table_config(int index) const;
  ::tensorflow::tpu::TPUEmbeddingConfiguration_TPUEmbeddingTable* add_table_config();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::tpu::TPUEmbeddingConfiguration_TPUEmbeddingTable >&
      table_config() const;

  // .tensorflow.tpu.TPUEmbeddingConfiguration.ModelMode model_mode = 1;
  void clear_model_mode();
  static const int kModelModeFieldNumber = 1;
  ::tensorflow::tpu::TPUEmbeddingConfiguration_ModelMode model_mode() const;
  void set_model_mode(::tensorflow::tpu::TPUEmbeddingConfiguration_ModelMode value);

  // int32 num_hosts = 2;
  void clear_num_hosts();
  static const int kNumHostsFieldNumber = 2;
  ::google::protobuf::int32 num_hosts() const;
  void set_num_hosts(::google::protobuf::int32 value);

  // int32 num_tensornodes = 3;
  void clear_num_tensornodes();
  static const int kNumTensornodesFieldNumber = 3;
  ::google::protobuf::int32 num_tensornodes() const;
  void set_num_tensornodes(::google::protobuf::int32 value);

  // int32 batch_size = 4;
  void clear_batch_size();
  static const int kBatchSizeFieldNumber = 4;
  ::google::protobuf::int32 batch_size() const;
  void set_batch_size(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:tensorflow.tpu.TPUEmbeddingConfiguration)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::tpu::TPUEmbeddingConfiguration_TPUEmbeddingTable > table_config_;
  int model_mode_;
  ::google::protobuf::int32 num_hosts_;
  ::google::protobuf::int32 num_tensornodes_;
  ::google::protobuf::int32 batch_size_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_2fcontrib_2ftpu_2fproto_2ftpu_5fembedding_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TPUEmbeddingConfiguration_TPUEmbeddingTable

// string name = 1;
inline void TPUEmbeddingConfiguration_TPUEmbeddingTable::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TPUEmbeddingConfiguration_TPUEmbeddingTable::name() const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable.name)
  return name_.GetNoArena();
}
inline void TPUEmbeddingConfiguration_TPUEmbeddingTable::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable.name)
}
#if LANG_CXX11
inline void TPUEmbeddingConfiguration_TPUEmbeddingTable::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable.name)
}
#endif
inline void TPUEmbeddingConfiguration_TPUEmbeddingTable::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable.name)
}
inline void TPUEmbeddingConfiguration_TPUEmbeddingTable::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable.name)
}
inline ::std::string* TPUEmbeddingConfiguration_TPUEmbeddingTable::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TPUEmbeddingConfiguration_TPUEmbeddingTable::release_name() {
  // @@protoc_insertion_point(field_release:tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TPUEmbeddingConfiguration_TPUEmbeddingTable::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable.name)
}

// int32 num_rows = 3;
inline void TPUEmbeddingConfiguration_TPUEmbeddingTable::clear_num_rows() {
  num_rows_ = 0;
}
inline ::google::protobuf::int32 TPUEmbeddingConfiguration_TPUEmbeddingTable::num_rows() const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable.num_rows)
  return num_rows_;
}
inline void TPUEmbeddingConfiguration_TPUEmbeddingTable::set_num_rows(::google::protobuf::int32 value) {
  
  num_rows_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable.num_rows)
}

// int32 width = 4;
inline void TPUEmbeddingConfiguration_TPUEmbeddingTable::clear_width() {
  width_ = 0;
}
inline ::google::protobuf::int32 TPUEmbeddingConfiguration_TPUEmbeddingTable::width() const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable.width)
  return width_;
}
inline void TPUEmbeddingConfiguration_TPUEmbeddingTable::set_width(::google::protobuf::int32 value) {
  
  width_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable.width)
}

// int32 num_features = 5;
inline void TPUEmbeddingConfiguration_TPUEmbeddingTable::clear_num_features() {
  num_features_ = 0;
}
inline ::google::protobuf::int32 TPUEmbeddingConfiguration_TPUEmbeddingTable::num_features() const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable.num_features)
  return num_features_;
}
inline void TPUEmbeddingConfiguration_TPUEmbeddingTable::set_num_features(::google::protobuf::int32 value) {
  
  num_features_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable.num_features)
}

// .tensorflow.tpu.OptimizationParameters optimization_parameters = 6;
inline bool TPUEmbeddingConfiguration_TPUEmbeddingTable::has_optimization_parameters() const {
  return this != internal_default_instance() && optimization_parameters_ != NULL;
}
inline const ::tensorflow::tpu::OptimizationParameters& TPUEmbeddingConfiguration_TPUEmbeddingTable::_internal_optimization_parameters() const {
  return *optimization_parameters_;
}
inline const ::tensorflow::tpu::OptimizationParameters& TPUEmbeddingConfiguration_TPUEmbeddingTable::optimization_parameters() const {
  const ::tensorflow::tpu::OptimizationParameters* p = optimization_parameters_;
  // @@protoc_insertion_point(field_get:tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable.optimization_parameters)
  return p != NULL ? *p : *reinterpret_cast<const ::tensorflow::tpu::OptimizationParameters*>(
      &::tensorflow::tpu::_OptimizationParameters_default_instance_);
}
inline ::tensorflow::tpu::OptimizationParameters* TPUEmbeddingConfiguration_TPUEmbeddingTable::release_optimization_parameters() {
  // @@protoc_insertion_point(field_release:tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable.optimization_parameters)
  
  ::tensorflow::tpu::OptimizationParameters* temp = optimization_parameters_;
  optimization_parameters_ = NULL;
  return temp;
}
inline ::tensorflow::tpu::OptimizationParameters* TPUEmbeddingConfiguration_TPUEmbeddingTable::mutable_optimization_parameters() {
  
  if (optimization_parameters_ == NULL) {
    auto* p = CreateMaybeMessage<::tensorflow::tpu::OptimizationParameters>(GetArenaNoVirtual());
    optimization_parameters_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable.optimization_parameters)
  return optimization_parameters_;
}
inline void TPUEmbeddingConfiguration_TPUEmbeddingTable::set_allocated_optimization_parameters(::tensorflow::tpu::OptimizationParameters* optimization_parameters) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(optimization_parameters_);
  }
  if (optimization_parameters) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      optimization_parameters = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, optimization_parameters, submessage_arena);
    }
    
  } else {
    
  }
  optimization_parameters_ = optimization_parameters;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable.optimization_parameters)
}

// -------------------------------------------------------------------

// TPUEmbeddingConfiguration

// .tensorflow.tpu.TPUEmbeddingConfiguration.ModelMode model_mode = 1;
inline void TPUEmbeddingConfiguration::clear_model_mode() {
  model_mode_ = 0;
}
inline ::tensorflow::tpu::TPUEmbeddingConfiguration_ModelMode TPUEmbeddingConfiguration::model_mode() const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.TPUEmbeddingConfiguration.model_mode)
  return static_cast< ::tensorflow::tpu::TPUEmbeddingConfiguration_ModelMode >(model_mode_);
}
inline void TPUEmbeddingConfiguration::set_model_mode(::tensorflow::tpu::TPUEmbeddingConfiguration_ModelMode value) {
  
  model_mode_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.tpu.TPUEmbeddingConfiguration.model_mode)
}

// int32 num_hosts = 2;
inline void TPUEmbeddingConfiguration::clear_num_hosts() {
  num_hosts_ = 0;
}
inline ::google::protobuf::int32 TPUEmbeddingConfiguration::num_hosts() const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.TPUEmbeddingConfiguration.num_hosts)
  return num_hosts_;
}
inline void TPUEmbeddingConfiguration::set_num_hosts(::google::protobuf::int32 value) {
  
  num_hosts_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.tpu.TPUEmbeddingConfiguration.num_hosts)
}

// int32 num_tensornodes = 3;
inline void TPUEmbeddingConfiguration::clear_num_tensornodes() {
  num_tensornodes_ = 0;
}
inline ::google::protobuf::int32 TPUEmbeddingConfiguration::num_tensornodes() const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.TPUEmbeddingConfiguration.num_tensornodes)
  return num_tensornodes_;
}
inline void TPUEmbeddingConfiguration::set_num_tensornodes(::google::protobuf::int32 value) {
  
  num_tensornodes_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.tpu.TPUEmbeddingConfiguration.num_tensornodes)
}

// int32 batch_size = 4;
inline void TPUEmbeddingConfiguration::clear_batch_size() {
  batch_size_ = 0;
}
inline ::google::protobuf::int32 TPUEmbeddingConfiguration::batch_size() const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.TPUEmbeddingConfiguration.batch_size)
  return batch_size_;
}
inline void TPUEmbeddingConfiguration::set_batch_size(::google::protobuf::int32 value) {
  
  batch_size_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.tpu.TPUEmbeddingConfiguration.batch_size)
}

// repeated .tensorflow.tpu.TPUEmbeddingConfiguration.TPUEmbeddingTable table_config = 5;
inline int TPUEmbeddingConfiguration::table_config_size() const {
  return table_config_.size();
}
inline void TPUEmbeddingConfiguration::clear_table_config() {
  table_config_.Clear();
}
inline ::tensorflow::tpu::TPUEmbeddingConfiguration_TPUEmbeddingTable* TPUEmbeddingConfiguration::mutable_table_config(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.tpu.TPUEmbeddingConfiguration.table_config)
  return table_config_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::tpu::TPUEmbeddingConfiguration_TPUEmbeddingTable >*
TPUEmbeddingConfiguration::mutable_table_config() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.tpu.TPUEmbeddingConfiguration.table_config)
  return &table_config_;
}
inline const ::tensorflow::tpu::TPUEmbeddingConfiguration_TPUEmbeddingTable& TPUEmbeddingConfiguration::table_config(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.TPUEmbeddingConfiguration.table_config)
  return table_config_.Get(index);
}
inline ::tensorflow::tpu::TPUEmbeddingConfiguration_TPUEmbeddingTable* TPUEmbeddingConfiguration::add_table_config() {
  // @@protoc_insertion_point(field_add:tensorflow.tpu.TPUEmbeddingConfiguration.table_config)
  return table_config_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::tpu::TPUEmbeddingConfiguration_TPUEmbeddingTable >&
TPUEmbeddingConfiguration::table_config() const {
  // @@protoc_insertion_point(field_list:tensorflow.tpu.TPUEmbeddingConfiguration.table_config)
  return table_config_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tpu
}  // namespace tensorflow

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::tensorflow::tpu::TPUEmbeddingConfiguration_ModelMode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::tensorflow::tpu::TPUEmbeddingConfiguration_ModelMode>() {
  return ::tensorflow::tpu::TPUEmbeddingConfiguration_ModelMode_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_tensorflow_2fcontrib_2ftpu_2fproto_2ftpu_5fembedding_5fconfig_2eproto
