// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_embed_optimize_for.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/unittest_embed_optimize_for.pb.h>

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace protobuf_unittest {

namespace {

const ::google::protobuf::Descriptor* TestEmbedOptimizedForSize_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TestEmbedOptimizedForSize_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/unittest_embed_optimize_for.proto");
  GOOGLE_CHECK(file != NULL);
  TestEmbedOptimizedForSize_descriptor_ = file->message_type(0);
  static const int TestEmbedOptimizedForSize_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestEmbedOptimizedForSize, optional_message_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestEmbedOptimizedForSize, repeated_message_),
  };
  TestEmbedOptimizedForSize_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      TestEmbedOptimizedForSize_descriptor_,
      TestEmbedOptimizedForSize::internal_default_instance(),
      TestEmbedOptimizedForSize_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestEmbedOptimizedForSize, _has_bits_),
      -1,
      -1,
      sizeof(TestEmbedOptimizedForSize),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestEmbedOptimizedForSize, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      TestEmbedOptimizedForSize_descriptor_, TestEmbedOptimizedForSize::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto() {
  TestEmbedOptimizedForSize_default_instance_.Shutdown();
  delete TestEmbedOptimizedForSize_reflection_;
}

void protobuf_InitDefaults_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_unittest::protobuf_InitDefaults_google_2fprotobuf_2funittest_5foptimize_5ffor_2eproto();
  TestEmbedOptimizedForSize_default_instance_.DefaultConstruct();
  TestEmbedOptimizedForSize_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto_once_);
void protobuf_InitDefaults_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto_once_,
                 &protobuf_InitDefaults_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto_impl);
}
void protobuf_AddDesc_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n1google/protobuf/unittest_embed_optimiz"
    "e_for.proto\022\021protobuf_unittest\032+google/p"
    "rotobuf/unittest_optimize_for.proto\"\241\001\n\031"
    "TestEmbedOptimizedForSize\022A\n\020optional_me"
    "ssage\030\001 \001(\0132\'.protobuf_unittest.TestOpti"
    "mizedForSize\022A\n\020repeated_message\030\002 \003(\0132\'"
    ".protobuf_unittest.TestOptimizedForSizeB"
    "\002H\001", 283);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/unittest_embed_optimize_for.proto", &protobuf_RegisterTypes);
  ::protobuf_unittest::protobuf_AddDesc_google_2fprotobuf_2funittest_5foptimize_5ffor_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto_once_);
void protobuf_AddDesc_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto_once_,
                 &protobuf_AddDesc_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TestEmbedOptimizedForSize::kOptionalMessageFieldNumber;
const int TestEmbedOptimizedForSize::kRepeatedMessageFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TestEmbedOptimizedForSize::TestEmbedOptimizedForSize()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:protobuf_unittest.TestEmbedOptimizedForSize)
}

void TestEmbedOptimizedForSize::InitAsDefaultInstance() {
  optional_message_ = const_cast< ::protobuf_unittest::TestOptimizedForSize*>(
      ::protobuf_unittest::TestOptimizedForSize::internal_default_instance());
}

TestEmbedOptimizedForSize::TestEmbedOptimizedForSize(const TestEmbedOptimizedForSize& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protobuf_unittest.TestEmbedOptimizedForSize)
}

void TestEmbedOptimizedForSize::SharedCtor() {
  _cached_size_ = 0;
  optional_message_ = NULL;
}

TestEmbedOptimizedForSize::~TestEmbedOptimizedForSize() {
  // @@protoc_insertion_point(destructor:protobuf_unittest.TestEmbedOptimizedForSize)
  SharedDtor();
}

void TestEmbedOptimizedForSize::SharedDtor() {
  if (this != &TestEmbedOptimizedForSize_default_instance_.get()) {
    delete optional_message_;
  }
}

void TestEmbedOptimizedForSize::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TestEmbedOptimizedForSize::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TestEmbedOptimizedForSize_descriptor_;
}

const TestEmbedOptimizedForSize& TestEmbedOptimizedForSize::default_instance() {
  protobuf_InitDefaults_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<TestEmbedOptimizedForSize> TestEmbedOptimizedForSize_default_instance_;

TestEmbedOptimizedForSize* TestEmbedOptimizedForSize::New(::google::protobuf::Arena* arena) const {
  TestEmbedOptimizedForSize* n = new TestEmbedOptimizedForSize;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TestEmbedOptimizedForSize::Clear() {
// @@protoc_insertion_point(message_clear_start:protobuf_unittest.TestEmbedOptimizedForSize)
  if (has_optional_message()) {
    if (optional_message_ != NULL) optional_message_->::protobuf_unittest::TestOptimizedForSize::Clear();
  }
  repeated_message_.Clear();
  _has_bits_.Clear();
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool TestEmbedOptimizedForSize::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protobuf_unittest.TestEmbedOptimizedForSize)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .protobuf_unittest.TestOptimizedForSize optional_message = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_optional_message()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_repeated_message;
        break;
      }

      // repeated .protobuf_unittest.TestOptimizedForSize repeated_message = 2;
      case 2: {
        if (tag == 18) {
         parse_repeated_message:
          DO_(input->IncrementRecursionDepth());
         parse_loop_repeated_message:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_repeated_message()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_repeated_message;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protobuf_unittest.TestEmbedOptimizedForSize)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protobuf_unittest.TestEmbedOptimizedForSize)
  return false;
#undef DO_
}

void TestEmbedOptimizedForSize::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protobuf_unittest.TestEmbedOptimizedForSize)
  // optional .protobuf_unittest.TestOptimizedForSize optional_message = 1;
  if (has_optional_message()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, *this->optional_message_, output);
  }

  // repeated .protobuf_unittest.TestOptimizedForSize repeated_message = 2;
  for (unsigned int i = 0, n = this->repeated_message_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->repeated_message(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:protobuf_unittest.TestEmbedOptimizedForSize)
}

::google::protobuf::uint8* TestEmbedOptimizedForSize::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:protobuf_unittest.TestEmbedOptimizedForSize)
  // optional .protobuf_unittest.TestOptimizedForSize optional_message = 1;
  if (has_optional_message()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->optional_message_, false, target);
  }

  // repeated .protobuf_unittest.TestOptimizedForSize repeated_message = 2;
  for (unsigned int i = 0, n = this->repeated_message_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->repeated_message(i), false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protobuf_unittest.TestEmbedOptimizedForSize)
  return target;
}

size_t TestEmbedOptimizedForSize::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protobuf_unittest.TestEmbedOptimizedForSize)
  size_t total_size = 0;

  // optional .protobuf_unittest.TestOptimizedForSize optional_message = 1;
  if (has_optional_message()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->optional_message_);
  }

  // repeated .protobuf_unittest.TestOptimizedForSize repeated_message = 2;
  {
    unsigned int count = this->repeated_message_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->repeated_message(i));
    }
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TestEmbedOptimizedForSize::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protobuf_unittest.TestEmbedOptimizedForSize)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const TestEmbedOptimizedForSize* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TestEmbedOptimizedForSize>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protobuf_unittest.TestEmbedOptimizedForSize)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protobuf_unittest.TestEmbedOptimizedForSize)
    UnsafeMergeFrom(*source);
  }
}

void TestEmbedOptimizedForSize::MergeFrom(const TestEmbedOptimizedForSize& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protobuf_unittest.TestEmbedOptimizedForSize)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void TestEmbedOptimizedForSize::UnsafeMergeFrom(const TestEmbedOptimizedForSize& from) {
  GOOGLE_DCHECK(&from != this);
  repeated_message_.MergeFrom(from.repeated_message_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_optional_message()) {
      mutable_optional_message()->::protobuf_unittest::TestOptimizedForSize::MergeFrom(from.optional_message());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::UnknownFieldSet::MergeToInternalMetdata(
      from.unknown_fields(), &_internal_metadata_);
  }
}

void TestEmbedOptimizedForSize::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protobuf_unittest.TestEmbedOptimizedForSize)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestEmbedOptimizedForSize::CopyFrom(const TestEmbedOptimizedForSize& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protobuf_unittest.TestEmbedOptimizedForSize)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool TestEmbedOptimizedForSize::IsInitialized() const {

  if (has_optional_message()) {
    if (!this->optional_message_->IsInitialized()) return false;
  }
  if (!::google::protobuf::internal::AllAreInitialized(this->repeated_message())) return false;
  return true;
}

void TestEmbedOptimizedForSize::Swap(TestEmbedOptimizedForSize* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TestEmbedOptimizedForSize::InternalSwap(TestEmbedOptimizedForSize* other) {
  std::swap(optional_message_, other->optional_message_);
  repeated_message_.UnsafeArenaSwap(&other->repeated_message_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TestEmbedOptimizedForSize::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TestEmbedOptimizedForSize_descriptor_;
  metadata.reflection = TestEmbedOptimizedForSize_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TestEmbedOptimizedForSize

// optional .protobuf_unittest.TestOptimizedForSize optional_message = 1;
bool TestEmbedOptimizedForSize::has_optional_message() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void TestEmbedOptimizedForSize::set_has_optional_message() {
  _has_bits_[0] |= 0x00000001u;
}
void TestEmbedOptimizedForSize::clear_has_optional_message() {
  _has_bits_[0] &= ~0x00000001u;
}
void TestEmbedOptimizedForSize::clear_optional_message() {
  if (optional_message_ != NULL) optional_message_->::protobuf_unittest::TestOptimizedForSize::Clear();
  clear_has_optional_message();
}
const ::protobuf_unittest::TestOptimizedForSize& TestEmbedOptimizedForSize::optional_message() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestEmbedOptimizedForSize.optional_message)
  return optional_message_ != NULL ? *optional_message_
                         : *::protobuf_unittest::TestOptimizedForSize::internal_default_instance();
}
::protobuf_unittest::TestOptimizedForSize* TestEmbedOptimizedForSize::mutable_optional_message() {
  set_has_optional_message();
  if (optional_message_ == NULL) {
    optional_message_ = new ::protobuf_unittest::TestOptimizedForSize;
  }
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestEmbedOptimizedForSize.optional_message)
  return optional_message_;
}
::protobuf_unittest::TestOptimizedForSize* TestEmbedOptimizedForSize::release_optional_message() {
  // @@protoc_insertion_point(field_release:protobuf_unittest.TestEmbedOptimizedForSize.optional_message)
  clear_has_optional_message();
  ::protobuf_unittest::TestOptimizedForSize* temp = optional_message_;
  optional_message_ = NULL;
  return temp;
}
void TestEmbedOptimizedForSize::set_allocated_optional_message(::protobuf_unittest::TestOptimizedForSize* optional_message) {
  delete optional_message_;
  optional_message_ = optional_message;
  if (optional_message) {
    set_has_optional_message();
  } else {
    clear_has_optional_message();
  }
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.TestEmbedOptimizedForSize.optional_message)
}

// repeated .protobuf_unittest.TestOptimizedForSize repeated_message = 2;
int TestEmbedOptimizedForSize::repeated_message_size() const {
  return repeated_message_.size();
}
void TestEmbedOptimizedForSize::clear_repeated_message() {
  repeated_message_.Clear();
}
const ::protobuf_unittest::TestOptimizedForSize& TestEmbedOptimizedForSize::repeated_message(int index) const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestEmbedOptimizedForSize.repeated_message)
  return repeated_message_.Get(index);
}
::protobuf_unittest::TestOptimizedForSize* TestEmbedOptimizedForSize::mutable_repeated_message(int index) {
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestEmbedOptimizedForSize.repeated_message)
  return repeated_message_.Mutable(index);
}
::protobuf_unittest::TestOptimizedForSize* TestEmbedOptimizedForSize::add_repeated_message() {
  // @@protoc_insertion_point(field_add:protobuf_unittest.TestEmbedOptimizedForSize.repeated_message)
  return repeated_message_.Add();
}
::google::protobuf::RepeatedPtrField< ::protobuf_unittest::TestOptimizedForSize >*
TestEmbedOptimizedForSize::mutable_repeated_message() {
  // @@protoc_insertion_point(field_mutable_list:protobuf_unittest.TestEmbedOptimizedForSize.repeated_message)
  return &repeated_message_;
}
const ::google::protobuf::RepeatedPtrField< ::protobuf_unittest::TestOptimizedForSize >&
TestEmbedOptimizedForSize::repeated_message() const {
  // @@protoc_insertion_point(field_list:protobuf_unittest.TestEmbedOptimizedForSize.repeated_message)
  return repeated_message_;
}

inline const TestEmbedOptimizedForSize* TestEmbedOptimizedForSize::internal_default_instance() {
  return &TestEmbedOptimizedForSize_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf_unittest

// @@protoc_insertion_point(global_scope)
