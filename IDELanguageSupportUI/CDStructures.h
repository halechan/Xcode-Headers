//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct SwiftSyntaxStructure;

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct shared_ptr<SwiftSyntaxStructure> {
    struct SwiftSyntaxStructure *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct vector<SwiftSyntaxToken, std::__1::allocator<SwiftSyntaxToken>>;

struct vector<std::__1::shared_ptr<SwiftSyntaxStructure>, std::__1::allocator<std::__1::shared_ptr<SwiftSyntaxStructure>>> {
    shared_ptr_99585c3b *__begin_;
    shared_ptr_99585c3b *__end_;
    struct __compressed_pair<std::__1::shared_ptr<SwiftSyntaxStructure>*, std::__1::allocator<std::__1::shared_ptr<SwiftSyntaxStructure>>> {
        shared_ptr_99585c3b *__first_;
    } __end_cap_;
};

struct vector<std::__1::vector<SwiftSyntaxToken, std::__1::allocator<SwiftSyntaxToken>>, std::__1::allocator<std::__1::vector<SwiftSyntaxToken, std::__1::allocator<SwiftSyntaxToken>>>> {
    struct vector<SwiftSyntaxToken, std::__1::allocator<SwiftSyntaxToken>> *__begin_;
    struct vector<SwiftSyntaxToken, std::__1::allocator<SwiftSyntaxToken>> *__end_;
    struct __compressed_pair<std::__1::vector<SwiftSyntaxToken, std::__1::allocator<SwiftSyntaxToken>>*, std::__1::allocator<std::__1::vector<SwiftSyntaxToken, std::__1::allocator<SwiftSyntaxToken>>>> {
        struct vector<SwiftSyntaxToken, std::__1::allocator<SwiftSyntaxToken>> *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long data[4];
} CDStruct_4c46f3f5;

// Template types
typedef struct shared_ptr<SwiftSyntaxStructure> {
    struct SwiftSyntaxStructure *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_99585c3b;

typedef struct vector<std::__1::shared_ptr<SwiftSyntaxStructure>, std::__1::allocator<std::__1::shared_ptr<SwiftSyntaxStructure>>> {
    shared_ptr_99585c3b *__begin_;
    shared_ptr_99585c3b *__end_;
    struct __compressed_pair<std::__1::shared_ptr<SwiftSyntaxStructure>*, std::__1::allocator<std::__1::shared_ptr<SwiftSyntaxStructure>>> {
        shared_ptr_99585c3b *__first_;
    } __end_cap_;
} vector_c3e2d001;
